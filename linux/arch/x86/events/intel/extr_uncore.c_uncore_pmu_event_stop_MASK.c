
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw_perf_event {size_t idx; int state; } ;
struct perf_event {int active_entry; struct hw_perf_event hw; } ;
struct intel_uncore_box {scalar_t__ n_active; int ** events; int active_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (size_t,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct intel_uncore_box*,struct perf_event*) ;
 struct intel_uncore_box* FUNC_4 (struct perf_event*) ;
 int FUNC_5 (struct intel_uncore_box*,struct perf_event*) ;
 scalar_t__ FUNC_6 (size_t) ;
 int FUNC_7 (struct intel_uncore_box*) ;

void FUNC_8(struct perf_event *VAR_3, int VAR_4)
{
 struct intel_uncore_box *VAR_5 = FUNC_4(VAR_3);
 struct hw_perf_event *VAR_6 = &VAR_3->hw;


 if (FUNC_6(VAR_6->idx)) {
  FUNC_2(&VAR_3->active_entry);
  if (--VAR_5->n_active == 0)
   FUNC_7(VAR_5);
  FUNC_5(VAR_5, VAR_3);
  return;
 }

 if (FUNC_1(VAR_6->idx, VAR_5->active_mask)) {
  FUNC_3(VAR_5, VAR_3);
  VAR_5->n_active--;
  VAR_5->events[VAR_6->idx] = ((void*)0);
  FUNC_0(VAR_6->state & VAR_1);
  VAR_6->state |= VAR_1;

  if (VAR_5->n_active == 0)
   FUNC_7(VAR_5);
 }

 if ((VAR_4 & VAR_0) && !(VAR_6->state & VAR_2)) {




  FUNC_5(VAR_5, VAR_3);
  VAR_6->state |= VAR_2;
 }
}
