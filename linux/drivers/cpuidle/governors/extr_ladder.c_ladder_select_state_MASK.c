
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int promotion_time; scalar_t__ promotion_count; int demotion_time; scalar_t__ demotion_count; } ;
struct TYPE_7__ {scalar_t__ promotion_count; scalar_t__ demotion_count; } ;
struct ladder_device_state {TYPE_4__ threshold; TYPE_3__ stats; } ;
struct ladder_device {struct ladder_device_state* states; } ;
struct cpuidle_driver {int state_count; TYPE_2__* states; } ;
struct cpuidle_device {int last_state_idx; int last_residency; TYPE_1__* states_usage; int cpu; } ;
struct TYPE_6__ {int flags; int exit_latency; scalar_t__ disabled; } ;
struct TYPE_5__ {scalar_t__ disable; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct cpuidle_device*,struct ladder_device*,int,int) ;
 struct ladder_device* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct cpuidle_driver *VAR_2,
          struct cpuidle_device *VAR_3, bool *VAR_4)
{
 struct ladder_device *VAR_5 = FUNC_2(&VAR_1);
 struct ladder_device_state *VAR_6;
 int VAR_7, VAR_8 = VAR_3->last_state_idx;
 int VAR_9 = VAR_2->states[0].flags & VAR_0 ? 1 : 0;
 int VAR_10 = FUNC_0(VAR_3->cpu);


 if (FUNC_3(VAR_10 == 0)) {
  FUNC_1(VAR_3, VAR_5, VAR_8, 0);
  return 0;
 }

 VAR_6 = &VAR_5->states[VAR_8];

 VAR_7 = VAR_3->last_residency - VAR_2->states[VAR_8].exit_latency;


 if (VAR_8 < VAR_2->state_count - 1 &&
     !VAR_2->states[VAR_8 + 1].disabled &&
     !VAR_3->states_usage[VAR_8 + 1].disable &&
     VAR_7 > VAR_6->threshold.promotion_time &&
     VAR_2->states[VAR_8 + 1].exit_latency <= VAR_10) {
  VAR_6->stats.promotion_count++;
  VAR_6->stats.demotion_count = 0;
  if (VAR_6->stats.promotion_count >= VAR_6->threshold.promotion_count) {
   FUNC_1(VAR_3, VAR_5, VAR_8, VAR_8 + 1);
   return VAR_8 + 1;
  }
 }


 if (VAR_8 > VAR_9 &&
     (VAR_2->states[VAR_8].disabled ||
     VAR_3->states_usage[VAR_8].disable ||
     VAR_2->states[VAR_8].exit_latency > VAR_10)) {
  int VAR_11;

  for (VAR_11 = VAR_8 - 1; VAR_11 > VAR_9; VAR_11--) {
   if (VAR_2->states[VAR_11].exit_latency <= VAR_10)
    break;
  }
  FUNC_1(VAR_3, VAR_5, VAR_8, VAR_11);
  return VAR_11;
 }

 if (VAR_8 > VAR_9 &&
     VAR_7 < VAR_6->threshold.demotion_time) {
  VAR_6->stats.demotion_count++;
  VAR_6->stats.promotion_count = 0;
  if (VAR_6->stats.demotion_count >= VAR_6->threshold.demotion_count) {
   FUNC_1(VAR_3, VAR_5, VAR_8, VAR_8 - 1);
   return VAR_8 - 1;
  }
 }


 return VAR_8;
}
