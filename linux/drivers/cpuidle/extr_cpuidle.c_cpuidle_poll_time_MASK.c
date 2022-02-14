
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct cpuidle_driver {int state_count; TYPE_2__* states; } ;
struct cpuidle_device {int poll_limit_ns; TYPE_1__* states_usage; } ;
struct TYPE_4__ {scalar_t__ target_residency; scalar_t__ disabled; } ;
struct TYPE_3__ {scalar_t__ disable; } ;


 int VAR_0 ;
 int VAR_1 ;

u64 FUNC_0(struct cpuidle_driver *VAR_2,
        struct cpuidle_device *VAR_3)
{
 int VAR_4;
 u64 VAR_5;

 if (VAR_3->poll_limit_ns)
  return VAR_3->poll_limit_ns;

 VAR_5 = VAR_1;
 for (VAR_4 = 1; VAR_4 < VAR_2->state_count; VAR_4++) {
  if (VAR_2->states[VAR_4].disabled || VAR_3->states_usage[VAR_4].disable)
   continue;

  VAR_5 = (u64)VAR_2->states[VAR_4].target_residency * VAR_0;
 }

 VAR_3->poll_limit_ns = VAR_5;

 return VAR_3->poll_limit_ns;
}
