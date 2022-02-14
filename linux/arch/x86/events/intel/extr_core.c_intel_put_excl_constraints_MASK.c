
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw_perf_event {int flags; size_t idx; } ;
struct perf_event {struct hw_perf_event hw; } ;
struct intel_excl_states {int sched_started; int * state; } ;
struct intel_excl_cntrs {int lock; struct intel_excl_states* states; int * has_exclusive; } ;
struct cpu_hw_events {int excl_thread_id; int n_excl; scalar_t__ is_fake; struct intel_excl_cntrs* excl_cntrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct cpu_hw_events *VAR_2,
  struct perf_event *VAR_3)
{
 struct hw_perf_event *VAR_4 = &VAR_3->hw;
 struct intel_excl_cntrs *VAR_5 = VAR_2->excl_cntrs;
 int VAR_6 = VAR_2->excl_thread_id;
 struct intel_excl_states *VAR_7;




 if (VAR_2->is_fake)
  return;

 if (FUNC_0(!VAR_5))
  return;

 if (VAR_4->flags & VAR_1) {
  VAR_4->flags &= ~VAR_1;
  if (!--VAR_2->n_excl)
   FUNC_1(VAR_5->has_exclusive[VAR_6], 0);
 }





 if (VAR_4->idx >= 0) {
  VAR_7 = &VAR_5->states[VAR_6];






  if (!VAR_7->sched_started)
   FUNC_2(&VAR_5->lock);

  VAR_7->state[VAR_4->idx] = VAR_0;

  if (!VAR_7->sched_started)
   FUNC_3(&VAR_5->lock);
 }
}
