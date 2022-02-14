
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int num_power_states; int default_power_state_index; TYPE_1__* power_state; } ;
struct radeon_device {TYPE_2__ pm; } ;
typedef enum radeon_pm_state_type { ____Placeholder_radeon_pm_state_type } radeon_pm_state_type ;
struct TYPE_3__ {int type; } ;



int FUNC_0(struct radeon_device *VAR_0,
        enum radeon_pm_state_type VAR_1,
        int VAR_2)
{
 int VAR_3;
 int VAR_4 = -1;

 for (VAR_3 = 0; VAR_3 < VAR_0->pm.num_power_states; VAR_3++) {
  if (VAR_0->pm.power_state[VAR_3].type == VAR_1) {
   VAR_4++;
   if (VAR_4 == VAR_2)
    return VAR_3;
  }
 }

 return VAR_0->pm.default_power_state_index;
}
