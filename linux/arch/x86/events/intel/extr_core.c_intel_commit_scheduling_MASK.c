
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_excl_states {int * state; } ;
struct intel_excl_cntrs {int lock; struct intel_excl_states* states; } ;
struct event_constraint {int flags; } ;
struct cpu_hw_events {int excl_thread_id; scalar_t__ is_fake; struct event_constraint** event_constraint; struct intel_excl_cntrs* excl_cntrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct cpu_hw_events *VAR_4, int VAR_5, int VAR_6)
{
 struct intel_excl_cntrs *VAR_7 = VAR_4->excl_cntrs;
 struct event_constraint *VAR_8 = VAR_4->event_constraint[VAR_5];
 struct intel_excl_states *VAR_9;
 int VAR_10 = VAR_4->excl_thread_id;

 if (VAR_4->is_fake || !FUNC_1())
  return;

 if (FUNC_0(!VAR_7))
  return;

 if (!(VAR_8->flags & VAR_2))
  return;

 VAR_9 = &VAR_7->states[VAR_10];

 FUNC_2(&VAR_7->lock);

 if (VAR_8->flags & VAR_3)
  VAR_9->state[VAR_6] = VAR_0;
 else
  VAR_9->state[VAR_6] = VAR_1;
}
