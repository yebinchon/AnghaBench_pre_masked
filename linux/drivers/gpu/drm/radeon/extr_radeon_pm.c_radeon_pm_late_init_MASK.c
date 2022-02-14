
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ pm_method; int dpm_enabled; int sysfs_initialized; int num_power_states; int mutex; } ;
struct radeon_device {TYPE_1__ pm; int dev; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct radeon_device*) ;
 int FUNC_5 (struct radeon_device*) ;

int FUNC_6(struct radeon_device *VAR_5)
{
 int VAR_6 = 0;

 if (VAR_5->pm.pm_method == VAR_0) {
  if (VAR_5->pm.dpm_enabled) {
   if (!VAR_5->pm.sysfs_initialized) {
    VAR_6 = FUNC_1(VAR_5->dev, &VAR_2);
    if (VAR_6)
     FUNC_0("failed to create device file for dpm state\n");
    VAR_6 = FUNC_1(VAR_5->dev, &VAR_1);
    if (VAR_6)
     FUNC_0("failed to create device file for dpm state\n");

    VAR_6 = FUNC_1(VAR_5->dev, &VAR_4);
    if (VAR_6)
     FUNC_0("failed to create device file for power profile\n");
    VAR_6 = FUNC_1(VAR_5->dev, &VAR_3);
    if (VAR_6)
     FUNC_0("failed to create device file for power method\n");
    VAR_5->pm.sysfs_initialized = 1;
   }

   FUNC_2(&VAR_5->pm.mutex);
   VAR_6 = FUNC_4(VAR_5);
   FUNC_3(&VAR_5->pm.mutex);
   if (VAR_6) {
    VAR_5->pm.dpm_enabled = 0;
    FUNC_0("radeon_pm_late_init failed, disabling dpm\n");
   } else {



    FUNC_5(VAR_5);
   }
  }
 } else {
  if ((VAR_5->pm.num_power_states > 1) &&
      (!VAR_5->pm.sysfs_initialized)) {

   VAR_6 = FUNC_1(VAR_5->dev, &VAR_4);
   if (VAR_6)
    FUNC_0("failed to create device file for power profile\n");
   VAR_6 = FUNC_1(VAR_5->dev, &VAR_3);
   if (VAR_6)
    FUNC_0("failed to create device file for power method\n");
   if (!VAR_6)
    VAR_5->pm.sysfs_initialized = 1;
  }
 }
 return VAR_6;
}
