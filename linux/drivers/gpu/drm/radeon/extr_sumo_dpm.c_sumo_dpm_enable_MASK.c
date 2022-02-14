
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sumo_power_info {scalar_t__ enable_boost; scalar_t__ enable_sclk_ds; scalar_t__ enable_auto_thermal_throttling; } ;
struct TYPE_3__ {int boot_ps; } ;
struct TYPE_4__ {TYPE_1__ dpm; } ;
struct radeon_device {TYPE_2__ pm; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (struct radeon_device*) ;
 int FUNC_2 (struct radeon_device*,int) ;
 int FUNC_3 (struct radeon_device*,int) ;
 struct sumo_power_info* FUNC_4 (struct radeon_device*) ;
 int FUNC_5 (struct radeon_device*) ;
 int FUNC_6 (struct radeon_device*) ;
 int FUNC_7 (struct radeon_device*) ;
 int FUNC_8 (struct radeon_device*) ;
 int FUNC_9 (struct radeon_device*) ;
 int FUNC_10 (struct radeon_device*) ;
 int FUNC_11 (struct radeon_device*) ;
 int FUNC_12 (struct radeon_device*) ;
 int FUNC_13 (struct radeon_device*) ;
 int FUNC_14 (struct radeon_device*) ;
 int FUNC_15 (struct radeon_device*,int ) ;
 int FUNC_16 (struct radeon_device*) ;
 int FUNC_17 (struct radeon_device*) ;
 int FUNC_18 (struct radeon_device*) ;
 int FUNC_19 (struct radeon_device*,int ) ;
 int FUNC_20 (struct radeon_device*) ;

int FUNC_21(struct radeon_device *VAR_2)
{
 struct sumo_power_info *VAR_3 = FUNC_4(VAR_2);

 if (FUNC_0(VAR_2))
  return -VAR_0;

 FUNC_8(VAR_2);
 FUNC_5(VAR_2);
 FUNC_16(VAR_2);
 FUNC_12(VAR_2);
 FUNC_7(VAR_2);
 FUNC_17(VAR_2);
 if (VAR_3->enable_auto_thermal_throttling) {
  FUNC_13(VAR_2);
  FUNC_14(VAR_2);
 }
 FUNC_9(VAR_2);
 FUNC_10(VAR_2);
 FUNC_3(VAR_2, 1);
 FUNC_11(VAR_2);
 FUNC_15(VAR_2, VAR_1);
 FUNC_6(VAR_2);
 FUNC_18(VAR_2);
 FUNC_20(VAR_2);
 if (VAR_3->enable_sclk_ds)
  FUNC_2(VAR_2, 1);
 if (VAR_3->enable_boost)
  FUNC_1(VAR_2);

 FUNC_19(VAR_2, VAR_2->pm.dpm.boot_ps);

 return 0;
}
