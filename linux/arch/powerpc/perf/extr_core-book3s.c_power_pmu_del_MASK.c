
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ idx; } ;
struct perf_event {int pmu; TYPE_1__ hw; } ;
struct cpu_hw_events {long n_events; int* mmcr; long n_limited; int * limited_hwidx; struct perf_event** limited_counter; int * flags; int * events; struct perf_event** event; } ;
struct TYPE_4__ {int (* disable_pmc ) (scalar_t__,int*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct perf_event*) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (struct perf_event*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct perf_event*) ;
 int FUNC_7 (struct perf_event*) ;
 TYPE_2__* VAR_3 ;
 int FUNC_8 (scalar_t__,int*) ;
 struct cpu_hw_events* FUNC_9 (int *) ;
 int FUNC_10 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_11(struct perf_event *VAR_4, int VAR_5)
{
 struct cpu_hw_events *VAR_6;
 long VAR_7;
 unsigned long VAR_8;

 FUNC_2(VAR_8);
 FUNC_4(VAR_4->pmu);

 FUNC_7(VAR_4);

 VAR_6 = FUNC_9(&VAR_2);
 for (VAR_7 = 0; VAR_7 < VAR_6->n_events; ++VAR_7) {
  if (VAR_4 == VAR_6->event[VAR_7]) {
   while (++VAR_7 < VAR_6->n_events) {
    VAR_6->event[VAR_7-1] = VAR_6->event[VAR_7];
    VAR_6->events[VAR_7-1] = VAR_6->events[VAR_7];
    VAR_6->flags[VAR_7-1] = VAR_6->flags[VAR_7];
   }
   --VAR_6->n_events;
   VAR_3->disable_pmc(VAR_4->hw.idx - 1, VAR_6->mmcr);
   if (VAR_4->hw.idx) {
    FUNC_10(VAR_4->hw.idx, 0);
    VAR_4->hw.idx = 0;
   }
   FUNC_3(VAR_4);
   break;
  }
 }
 for (VAR_7 = 0; VAR_7 < VAR_6->n_limited; ++VAR_7)
  if (VAR_4 == VAR_6->limited_counter[VAR_7])
   break;
 if (VAR_7 < VAR_6->n_limited) {
  while (++VAR_7 < VAR_6->n_limited) {
   VAR_6->limited_counter[VAR_7-1] = VAR_6->limited_counter[VAR_7];
   VAR_6->limited_hwidx[VAR_7-1] = VAR_6->limited_hwidx[VAR_7];
  }
  --VAR_6->n_limited;
 }
 if (VAR_6->n_events == 0) {

  VAR_6->mmcr[0] &= ~(VAR_1 | VAR_0);
 }

 if (FUNC_0(VAR_4))
  FUNC_6(VAR_4);

 FUNC_5(VAR_4->pmu);
 FUNC_1(VAR_8);
}
