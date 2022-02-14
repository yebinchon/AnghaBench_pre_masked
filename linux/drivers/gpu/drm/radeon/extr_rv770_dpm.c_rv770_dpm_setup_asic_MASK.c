
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rv7xx_power_info {scalar_t__ dcodt; } ;
struct TYPE_4__ {int platform_caps; } ;
struct TYPE_3__ {TYPE_2__ dpm; } ;
struct radeon_device {TYPE_1__ pm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct radeon_device*) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct radeon_device*) ;
 int FUNC_2 (struct radeon_device*) ;
 int FUNC_3 (struct radeon_device*) ;
 int FUNC_4 (struct radeon_device*) ;
 int FUNC_5 (struct radeon_device*) ;
 int FUNC_6 (struct radeon_device*) ;
 int FUNC_7 (struct radeon_device*) ;
 struct rv7xx_power_info* FUNC_8 (struct radeon_device*) ;
 int FUNC_9 (struct radeon_device*) ;

void FUNC_10(struct radeon_device *VAR_4)
{
 struct rv7xx_power_info *VAR_5 = FUNC_8(VAR_4);

 FUNC_0(VAR_4);
 FUNC_9(VAR_4);
 FUNC_6(VAR_4);
 if (VAR_5->dcodt)
  FUNC_5(VAR_4);
 FUNC_7(VAR_4);

 FUNC_1(VAR_4);

 if (VAR_3 != 0) {
  if (VAR_4->pm.dpm.platform_caps & VAR_0)
   FUNC_2(VAR_4);
  if (VAR_4->pm.dpm.platform_caps & VAR_1)
   FUNC_3(VAR_4);
  if (VAR_4->pm.dpm.platform_caps & VAR_2)
   FUNC_4(VAR_4);
 }
}
