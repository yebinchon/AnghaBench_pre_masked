
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct cpuidle_state_usage {scalar_t__ disable; } ;
struct cpuidle_state {int target_residency; scalar_t__ disabled; } ;
struct cpuidle_driver {int state_count; struct cpuidle_state* states; } ;
struct cpuidle_device {struct cpuidle_state_usage* states_usage; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static u64 FUNC_1(struct cpuidle_device *VAR_3,
         struct cpuidle_driver *VAR_4,
         int VAR_5)
{
 int VAR_6;

 if (FUNC_0(!VAR_1))
  return VAR_0;

 for (VAR_6 = VAR_5 + 1; VAR_6 < VAR_4->state_count; VAR_6++) {
  struct cpuidle_state *VAR_7 = &VAR_4->states[VAR_6];
  struct cpuidle_state_usage *VAR_8 = &VAR_3->states_usage[VAR_6];

  if (VAR_7->disabled || VAR_8->disable)
   continue;

  return VAR_7->target_residency * VAR_2;
 }

 return VAR_0;
}
