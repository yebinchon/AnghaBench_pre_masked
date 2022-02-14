
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_excl_states {int sched_started; } ;
struct intel_excl_cntrs {int lock; struct intel_excl_states* states; } ;
struct cpu_hw_events {int excl_thread_id; scalar_t__ is_fake; struct intel_excl_cntrs* excl_cntrs; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct cpu_hw_events *VAR_0)
{
 struct intel_excl_cntrs *VAR_1 = VAR_0->excl_cntrs;
 struct intel_excl_states *VAR_2;
 int VAR_3 = VAR_0->excl_thread_id;




 if (VAR_0->is_fake || !FUNC_1())
  return;



 if (FUNC_0(!VAR_1))
  return;

 VAR_2 = &VAR_1->states[VAR_3];

 VAR_2->sched_started = 0;



 FUNC_2(&VAR_1->lock);
}
