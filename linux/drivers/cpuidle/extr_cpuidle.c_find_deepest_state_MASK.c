
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuidle_state_usage {scalar_t__ disable; } ;
struct cpuidle_state {unsigned int exit_latency; unsigned int flags; int enter_s2idle; scalar_t__ disabled; } ;
struct cpuidle_driver {int state_count; struct cpuidle_state* states; } ;
struct cpuidle_device {struct cpuidle_state_usage* states_usage; } ;



__attribute__((used)) static int FUNC_0(struct cpuidle_driver *VAR_0,
         struct cpuidle_device *VAR_1,
         unsigned int VAR_2,
         unsigned int VAR_3,
         bool VAR_4)
{
 unsigned int VAR_5 = 0;
 int VAR_6, VAR_7 = 0;

 for (VAR_6 = 1; VAR_6 < VAR_0->state_count; VAR_6++) {
  struct cpuidle_state *VAR_8 = &VAR_0->states[VAR_6];
  struct cpuidle_state_usage *VAR_9 = &VAR_1->states_usage[VAR_6];

  if (VAR_8->disabled || VAR_9->disable || VAR_8->exit_latency <= VAR_5
      || VAR_8->exit_latency > VAR_2
      || (VAR_8->flags & VAR_3)
      || (VAR_4 && !VAR_8->enter_s2idle))
   continue;

  VAR_5 = VAR_8->exit_latency;
  VAR_7 = VAR_6;
 }
 return VAR_7;
}
