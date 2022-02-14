
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cpuidle_driver {TYPE_2__* states; } ;
struct cpuidle_device {TYPE_1__* states_usage; } ;
struct TYPE_4__ {unsigned int target_residency; scalar_t__ disabled; } ;
struct TYPE_3__ {scalar_t__ disable; } ;



__attribute__((used)) static int FUNC_0(struct cpuidle_driver *VAR_0,
        struct cpuidle_device *VAR_1, int VAR_2,
        unsigned int VAR_3)
{
 int VAR_4;

 for (VAR_4 = VAR_2 - 1; VAR_4 >= 0; VAR_4--) {
  if (VAR_0->states[VAR_4].disabled || VAR_1->states_usage[VAR_4].disable)
   continue;

  VAR_2 = VAR_4;
  if (VAR_0->states[VAR_4].target_residency <= VAR_3)
   break;
 }
 return VAR_2;
}
