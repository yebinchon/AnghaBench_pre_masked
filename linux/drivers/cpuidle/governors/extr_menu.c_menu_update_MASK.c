
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct menu_device {unsigned int next_timer_us; unsigned int* correction_factor; size_t bucket; unsigned int* intervals; scalar_t__ interval_ptr; scalar_t__ tick_wakeup; } ;
struct cpuidle_state {int flags; int exit_latency; } ;
struct cpuidle_driver {struct cpuidle_state* states; } ;
struct cpuidle_device {int last_state_idx; unsigned int last_residency; scalar_t__ poll_time_limit; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 struct menu_device* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct cpuidle_driver *VAR_7, struct cpuidle_device *VAR_8)
{
 struct menu_device *VAR_9 = FUNC_0(&VAR_6);
 int VAR_10 = VAR_8->last_state_idx;
 struct cpuidle_state *VAR_11 = &VAR_7->states[VAR_10];
 unsigned int VAR_12;
 unsigned int VAR_13;
 if (VAR_9->tick_wakeup && VAR_9->next_timer_us > VAR_5) {
  VAR_12 = 9 * VAR_3 / 10;
 } else if ((VAR_7->states[VAR_10].flags & VAR_0) &&
     VAR_8->poll_time_limit) {







  VAR_12 = VAR_9->next_timer_us;
 } else {

  VAR_12 = VAR_8->last_residency;


  if (VAR_12 > 2 * VAR_11->exit_latency)
   VAR_12 -= VAR_11->exit_latency;
  else
   VAR_12 /= 2;
 }


 if (VAR_12 > VAR_9->next_timer_us)
  VAR_12 = VAR_9->next_timer_us;


 VAR_13 = VAR_9->correction_factor[VAR_9->bucket];
 VAR_13 -= VAR_13 / VAR_1;

 if (VAR_9->next_timer_us > 0 && VAR_12 < VAR_3)
  VAR_13 += VAR_4 * VAR_12 / VAR_9->next_timer_us;
 else




  VAR_13 += VAR_4;







 if (VAR_1 == 1 && FUNC_1(VAR_13 == 0))
  VAR_13 = 1;

 VAR_9->correction_factor[VAR_9->bucket] = VAR_13;


 VAR_9->intervals[VAR_9->interval_ptr++] = VAR_12;
 if (VAR_9->interval_ptr >= VAR_2)
  VAR_9->interval_ptr = 0;
}
