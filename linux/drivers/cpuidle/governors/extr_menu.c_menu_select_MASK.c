
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct menu_device {unsigned int next_timer_us; size_t bucket; int* correction_factor; scalar_t__ needs_update; } ;
struct cpuidle_state_usage {scalar_t__ disable; } ;
struct cpuidle_state {unsigned int target_residency; int exit_latency; int flags; scalar_t__ disabled; } ;
struct cpuidle_driver {int state_count; struct cpuidle_state* states; } ;
struct cpuidle_device {struct cpuidle_state_usage* states_usage; int cpu; } ;
typedef int ktime_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int,int) ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct menu_device*,unsigned int) ;
 void* FUNC_3 (int ) ;
 int VAR_4 ;
 int FUNC_4 (struct cpuidle_driver*,struct cpuidle_device*) ;
 unsigned int FUNC_5 (unsigned int,int ) ;
 unsigned long FUNC_6 (int ) ;
 unsigned int FUNC_7 (unsigned long) ;
 struct menu_device* FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 () ;
 scalar_t__ FUNC_11 (int) ;
 size_t FUNC_12 (unsigned int,unsigned long) ;

__attribute__((used)) static int FUNC_13(struct cpuidle_driver *VAR_5, struct cpuidle_device *VAR_6,
         bool *VAR_7)
{
 struct menu_device *VAR_8 = FUNC_8(&VAR_4);
 int VAR_9 = FUNC_1(VAR_6->cpu);
 int VAR_10;
 int VAR_11;
 unsigned int VAR_12;
 unsigned int VAR_13;
 unsigned long VAR_14;
 ktime_t VAR_15;

 if (VAR_8->needs_update) {
  FUNC_4(VAR_5, VAR_6);
  VAR_8->needs_update = 0;
 }


 VAR_8->next_timer_us = FUNC_3(FUNC_9(&VAR_15));

 VAR_14 = FUNC_6(VAR_6->cpu);
 VAR_8->bucket = FUNC_12(VAR_8->next_timer_us, VAR_14);

 if (FUNC_11(VAR_5->state_count <= 1 || VAR_9 == 0) ||
     ((VAR_8->next_timer_us < VAR_5->states[1].target_residency ||
       VAR_9 < VAR_5->states[1].exit_latency) &&
      !VAR_5->states[0].disabled && !VAR_6->states_usage[0].disable)) {





  *VAR_7 = !(VAR_5->states[0].flags & VAR_0);
  return 0;
 }






 VAR_13 = FUNC_0((uint64_t)VAR_8->next_timer_us *
      VAR_8->correction_factor[VAR_8->bucket],
      VAR_2 * VAR_1);



 VAR_13 = FUNC_5(VAR_13, FUNC_2(VAR_8, VAR_13));

 if (FUNC_10()) {
  if (VAR_13 < VAR_3)
   VAR_13 = FUNC_3(VAR_15);
 } else {




  VAR_12 = VAR_13 / FUNC_7(VAR_14);
  if (VAR_9 > VAR_12)
   VAR_9 = VAR_12;
 }





 VAR_11 = -1;
 for (VAR_10 = 0; VAR_10 < VAR_5->state_count; VAR_10++) {
  struct cpuidle_state *VAR_16 = &VAR_5->states[VAR_10];
  struct cpuidle_state_usage *VAR_17 = &VAR_6->states_usage[VAR_10];

  if (VAR_16->disabled || VAR_17->disable)
   continue;

  if (VAR_11 == -1)
   VAR_11 = VAR_10;

  if (VAR_16->target_residency > VAR_13) {




   if ((VAR_5->states[VAR_11].flags & VAR_0) &&
       VAR_16->exit_latency <= VAR_9 &&
       VAR_16->target_residency <= VAR_8->next_timer_us) {
    VAR_13 = VAR_16->target_residency;
    VAR_11 = VAR_10;
    break;
   }
   if (VAR_13 < VAR_3)
    break;

   if (!FUNC_10()) {






    VAR_13 = VAR_5->states[VAR_11].target_residency;
    break;
   }







   if (VAR_5->states[VAR_11].target_residency < VAR_3 &&
       VAR_16->target_residency <= FUNC_3(VAR_15))
    VAR_11 = VAR_10;

   return VAR_11;
  }
  if (VAR_16->exit_latency > VAR_9)
   break;

  VAR_11 = VAR_10;
 }

 if (VAR_11 == -1)
  VAR_11 = 0;





 if (((VAR_5->states[VAR_11].flags & VAR_0) ||
      VAR_13 < VAR_3) && !FUNC_10()) {
  unsigned int VAR_18 = FUNC_3(VAR_15);

  *VAR_7 = 0;

  if (VAR_11 > 0 && VAR_5->states[VAR_11].target_residency > VAR_18) {






   for (VAR_10 = VAR_11 - 1; VAR_10 >= 0; VAR_10--) {
    if (VAR_5->states[VAR_10].disabled ||
        VAR_6->states_usage[VAR_10].disable)
     continue;

    VAR_11 = VAR_10;
    if (VAR_5->states[VAR_10].target_residency <= VAR_18)
     break;
   }
  }
 }

 return VAR_11;
}
