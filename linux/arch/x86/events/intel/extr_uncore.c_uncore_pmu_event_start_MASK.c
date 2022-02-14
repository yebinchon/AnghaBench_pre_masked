
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int idx; int state; int prev_count; } ;
struct perf_event {TYPE_1__ hw; int active_entry; } ;
struct intel_uncore_box {int n_active; int active_mask; struct perf_event** events; int active_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct intel_uncore_box*,struct perf_event*) ;
 struct intel_uncore_box* FUNC_5 (struct perf_event*) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct intel_uncore_box*) ;
 int FUNC_8 (struct intel_uncore_box*,struct perf_event*) ;

void FUNC_9(struct perf_event *VAR_2, int VAR_3)
{
 struct intel_uncore_box *VAR_4 = FUNC_5(VAR_2);
 int VAR_5 = VAR_2->hw.idx;

 if (FUNC_0(VAR_5 == -1 || VAR_5 >= VAR_1))
  return;







 if (FUNC_6(VAR_2->hw.idx)) {
  FUNC_2(&VAR_2->active_entry, &VAR_4->active_list);
  FUNC_3(&VAR_2->hw.prev_count,
       FUNC_8(VAR_4, VAR_2));
  if (VAR_4->n_active++ == 0)
   FUNC_7(VAR_4);
  return;
 }

 if (FUNC_0(!(VAR_2->hw.state & VAR_0)))
  return;

 VAR_2->hw.state = 0;
 VAR_4->events[VAR_5] = VAR_2;
 VAR_4->n_active++;
 FUNC_1(VAR_5, VAR_4->active_mask);

 FUNC_3(&VAR_2->hw.prev_count, FUNC_8(VAR_4, VAR_2));
 FUNC_4(VAR_4, VAR_2);

 if (VAR_4->n_active == 1)
  FUNC_7(VAR_4);
}
