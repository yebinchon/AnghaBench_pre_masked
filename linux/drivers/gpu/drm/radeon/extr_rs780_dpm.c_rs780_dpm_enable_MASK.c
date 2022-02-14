
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct radeon_ps {int dummy; } ;
struct TYPE_3__ {struct radeon_ps* boot_ps; } ;
struct TYPE_4__ {TYPE_1__ dpm; } ;
struct radeon_device {TYPE_2__ pm; } ;
struct igp_power_info {scalar_t__ gfx_clock_gating; scalar_t__ voltage_control; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (struct radeon_device*,int) ;
 int FUNC_2 (struct radeon_device*,int) ;
 int FUNC_3 (struct radeon_device*) ;
 struct igp_power_info* FUNC_4 (struct radeon_device*) ;
 int FUNC_5 (struct radeon_device*) ;
 int FUNC_6 (struct radeon_device*,struct radeon_ps*) ;
 int FUNC_7 (struct radeon_device*) ;
 int FUNC_8 (struct radeon_device*) ;
 int FUNC_9 (struct radeon_device*) ;
 int FUNC_10 (struct radeon_device*) ;
 int FUNC_11 (struct radeon_device*) ;
 int FUNC_12 (struct radeon_device*) ;
 int FUNC_13 (struct radeon_device*) ;
 int FUNC_14 (struct radeon_device*) ;
 int FUNC_15 (struct radeon_device*) ;

int FUNC_16(struct radeon_device *VAR_1)
{
 struct igp_power_info *VAR_2 = FUNC_4(VAR_1);
 struct radeon_ps *VAR_3 = VAR_1->pm.dpm.boot_ps;
 int VAR_4;

 FUNC_5(VAR_1);
 FUNC_3(VAR_1);

 if (FUNC_0(VAR_1))
  return -VAR_0;
 VAR_4 = FUNC_6(VAR_1, VAR_3);
 if (VAR_4)
  return VAR_4;
 FUNC_14(VAR_1);

 FUNC_7(VAR_1);
 FUNC_8(VAR_1);
 if (VAR_2->voltage_control)
  FUNC_15(VAR_1);
 FUNC_2(VAR_1, 1);
 FUNC_10(VAR_1);
 FUNC_13(VAR_1);
 FUNC_9(VAR_1);
 FUNC_12(VAR_1);
 FUNC_11(VAR_1);

 if (VAR_2->gfx_clock_gating)
  FUNC_1(VAR_1, 1);

 return 0;
}
