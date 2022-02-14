
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct trinity_power_info {scalar_t__ enable_auto_thermal_throttling; } ;
struct TYPE_3__ {int boot_ps; } ;
struct TYPE_4__ {TYPE_1__ dpm; } ;
struct radeon_device {TYPE_2__ pm; } ;


 int VAR_0 ;
 int FUNC_0 (struct radeon_device*,int) ;
 int FUNC_1 (struct radeon_device*) ;
 int FUNC_2 (struct radeon_device*,int) ;
 scalar_t__ FUNC_3 (struct radeon_device*) ;
 int FUNC_4 (struct radeon_device*) ;
 struct trinity_power_info* FUNC_5 (struct radeon_device*) ;
 int FUNC_6 (struct radeon_device*) ;
 int FUNC_7 (struct radeon_device*) ;
 int FUNC_8 (struct radeon_device*) ;
 int FUNC_9 (struct radeon_device*) ;
 int FUNC_10 (struct radeon_device*) ;
 int FUNC_11 (struct radeon_device*) ;
 int FUNC_12 (struct radeon_device*,int ) ;
 int FUNC_13 (struct radeon_device*) ;

int FUNC_14(struct radeon_device *VAR_1)
{
 struct trinity_power_info *VAR_2 = FUNC_5(VAR_1);

 FUNC_1(VAR_1);

 if (FUNC_3(VAR_1)) {
  FUNC_9(VAR_1);
  return -VAR_0;
 }

 FUNC_6(VAR_1);
 FUNC_0(VAR_1, 0x00C00033);
 FUNC_10(VAR_1);
 if (VAR_2->enable_auto_thermal_throttling) {
  FUNC_8(VAR_1);
  FUNC_4(VAR_1);
 }
 FUNC_7(VAR_1);
 FUNC_11(VAR_1);
 FUNC_13(VAR_1);
 FUNC_2(VAR_1, 0);
 FUNC_9(VAR_1);

 FUNC_12(VAR_1, VAR_1->pm.dpm.boot_ps);

 return 0;
}
