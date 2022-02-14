
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event {int dummy; } ;
struct cpu_hw_events {int n_events; int * current_idx; int * events; struct perf_event** event; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (struct perf_event*) ;
 int FUNC_3 (struct perf_event*,int ) ;
 struct cpu_hw_events* FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct perf_event *VAR_2, int VAR_3)
{
 struct cpu_hw_events *VAR_4 = FUNC_4(&VAR_1);
 unsigned long VAR_5;
 int VAR_6;

 FUNC_1(VAR_5);

 for (VAR_6 = 0; VAR_6 < VAR_4->n_events; VAR_6++) {
  if (VAR_2 == VAR_4->event[VAR_6]) {



   FUNC_3(VAR_2, VAR_0);




   while (++VAR_6 < VAR_4->n_events) {
    VAR_4->event[VAR_6 - 1] = VAR_4->event[VAR_6];
    VAR_4->events[VAR_6 - 1] = VAR_4->events[VAR_6];
    VAR_4->current_idx[VAR_6 - 1] =
     VAR_4->current_idx[VAR_6];
   }

   FUNC_2(VAR_2);

   VAR_4->n_events--;
   break;
  }
 }

 FUNC_0(VAR_5);
}
