
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int idx; unsigned long long last_tag; } ;
struct perf_event {TYPE_1__ hw; } ;
struct intel_uncore_box {int n_events; struct perf_event** event_list; } ;


 int VAR_0 ;
 struct intel_uncore_box* FUNC_0 (struct perf_event*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct perf_event*,int ) ;
 int FUNC_3 (struct intel_uncore_box*,struct perf_event*) ;

void FUNC_4(struct perf_event *VAR_1, int VAR_2)
{
 struct intel_uncore_box *VAR_3 = FUNC_0(VAR_1);
 int VAR_4;

 FUNC_2(VAR_1, VAR_0);






 if (FUNC_1(VAR_1->hw.idx))
  return;

 for (VAR_4 = 0; VAR_4 < VAR_3->n_events; VAR_4++) {
  if (VAR_1 == VAR_3->event_list[VAR_4]) {
   FUNC_3(VAR_3, VAR_1);

   for (++VAR_4; VAR_4 < VAR_3->n_events; VAR_4++)
    VAR_3->event_list[VAR_4 - 1] = VAR_3->event_list[VAR_4];

   --VAR_3->n_events;
   break;
  }
 }

 VAR_1->hw.idx = -1;
 VAR_1->hw.last_tag = ~0ULL;
}
