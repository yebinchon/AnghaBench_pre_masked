
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw_perf_event {int dummy; } ;
struct perf_event {int pmu; struct hw_perf_event hw; } ;
struct cpu_hw_events {int n_events; int* current_idx; unsigned long idx_mask; int * evtype; struct perf_event** event; } ;


 int FUNC_0 (struct perf_event*,struct hw_perf_event*,int,int ) ;
 int VAR_0 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (struct perf_event*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct cpu_hw_events* FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct perf_event *VAR_1, int VAR_2)
{
 struct cpu_hw_events *VAR_3 = FUNC_6(&VAR_0);
 struct hw_perf_event *VAR_4 = &VAR_1->hw;
 unsigned long VAR_5;
 int VAR_6;

 FUNC_4(VAR_1->pmu);
 FUNC_2(VAR_5);

 for (VAR_6 = 0; VAR_6 < VAR_3->n_events; VAR_6++) {
  if (VAR_1 == VAR_3->event[VAR_6]) {
   int VAR_7 = VAR_3->current_idx[VAR_6];




   while (++VAR_6 < VAR_3->n_events) {
    VAR_3->event[VAR_6 - 1] = VAR_3->event[VAR_6];
    VAR_3->evtype[VAR_6 - 1] = VAR_3->evtype[VAR_6];
    VAR_3->current_idx[VAR_6 - 1] =
     VAR_3->current_idx[VAR_6];
   }


   FUNC_0(VAR_1, VAR_4, VAR_7, 0);
   FUNC_3(VAR_1);

   VAR_3->idx_mask &= ~(1UL<<VAR_7);
   VAR_3->n_events--;
   break;
  }
 }

 FUNC_1(VAR_5);
 FUNC_5(VAR_1->pmu);
}
