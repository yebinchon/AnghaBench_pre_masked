
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuidle_driver {int state_count; } ;
struct cpuidle_device {scalar_t__ poll_limit_ns; scalar_t__ last_state_idx; int poll_time_limit; int cpu; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct cpuidle_driver *VAR_0,
      struct cpuidle_device *VAR_1,
      bool *VAR_2)
{
 int VAR_3 = FUNC_0(VAR_1->cpu);

 if (!VAR_0->state_count || VAR_3 == 0) {
  *VAR_2 = 0;
  return 0;
 }

 if (VAR_1->poll_limit_ns == 0)
  return 1;


 if (VAR_1->last_state_idx == 0) {

  if (VAR_1->poll_time_limit == 1)
   return 1;

  *VAR_2 = 0;

  return 0;
 }

 *VAR_2 = 0;

 return 0;
}
