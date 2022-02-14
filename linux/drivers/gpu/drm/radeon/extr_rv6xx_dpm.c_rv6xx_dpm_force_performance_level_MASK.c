
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rv6xx_power_info {int restricted_levels; } ;
struct TYPE_3__ {int forced_level; } ;
struct TYPE_4__ {TYPE_1__ dpm; } ;
struct radeon_device {TYPE_2__ pm; } ;
typedef enum radeon_dpm_forced_level { ____Placeholder_radeon_dpm_forced_level } radeon_dpm_forced_level ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct radeon_device*,int ,int) ;
 int FUNC_1 (struct radeon_device*,int,int,int,int) ;
 int FUNC_2 (struct radeon_device*,int ) ;
 int FUNC_3 (struct radeon_device*) ;
 int FUNC_4 (struct radeon_device*) ;
 int FUNC_5 (struct radeon_device*) ;
 struct rv6xx_power_info* FUNC_6 (struct radeon_device*) ;
 int FUNC_7 (struct radeon_device*) ;
 int FUNC_8 (struct radeon_device*) ;

int FUNC_9(struct radeon_device *VAR_5,
          enum radeon_dpm_forced_level VAR_6)
{
 struct rv6xx_power_info *VAR_7 = FUNC_6(VAR_5);

 if (VAR_6 == VAR_3) {
  VAR_7->restricted_levels = 3;
 } else if (VAR_6 == VAR_4) {
  VAR_7->restricted_levels = 2;
 } else {
  VAR_7->restricted_levels = 0;
 }

 FUNC_3(VAR_5);
 FUNC_0(VAR_5, VAR_1, 1);
 FUNC_1(VAR_5, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF);
 FUNC_2(VAR_5, VAR_1);
 FUNC_0(VAR_5, VAR_0, 0);
 FUNC_0(VAR_5, VAR_2, 0);
 FUNC_5(VAR_5);
 FUNC_4(VAR_5);
 if (VAR_7->restricted_levels == 3)
  FUNC_0(VAR_5, VAR_1, 0);
 FUNC_8(VAR_5);
 FUNC_7(VAR_5);

 VAR_5->pm.dpm.forced_level = VAR_6;

 return 0;
}
