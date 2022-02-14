
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int htc_tmp_lmt; } ;
struct trinity_power_info {int enable_bapm; int enable_nbps_policy; int enable_sclk_ds; int enable_gfx_power_gating; int enable_gfx_clock_gating; int enable_mg_clock_gating; int enable_gfx_dynamic_mgpg; int override_dynamic_mgpg; int enable_auto_thermal_throttling; int voltage_drop_in_dce; int uvd_dpm; int enable_dpm; TYPE_4__ sys_info; int thermal_auto_throttling; int * at; } ;
struct TYPE_5__ {struct trinity_power_info* priv; } ;
struct TYPE_6__ {TYPE_1__ dpm; } ;
struct radeon_device {TYPE_3__* pdev; TYPE_2__ pm; } ;
struct TYPE_7__ {int subsystem_vendor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct trinity_power_info* FUNC_0 (int,int ) ;
 int FUNC_1 (struct radeon_device*) ;
 int FUNC_2 (struct radeon_device*) ;
 int VAR_4 ;
 int FUNC_3 (struct radeon_device*) ;
 int FUNC_4 (struct radeon_device*) ;
 int FUNC_5 (struct radeon_device*) ;

int FUNC_6(struct radeon_device *VAR_5)
{
 struct trinity_power_info *VAR_6;
 int VAR_7, VAR_8;

 VAR_6 = FUNC_0(sizeof(struct trinity_power_info), VAR_1);
 if (VAR_6 == ((void*)0))
  return -VAR_0;
 VAR_5->pm.dpm.priv = VAR_6;

 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++)
  VAR_6->at[VAR_8] = VAR_3;

 if (VAR_4 == -1) {






  if (VAR_5->pdev->subsystem_vendor == 0x1462)
   VAR_6->enable_bapm = 1;
  else
   VAR_6->enable_bapm = 0;
 } else if (VAR_4 == 0) {
  VAR_6->enable_bapm = 0;
 } else {
  VAR_6->enable_bapm = 1;
 }
 VAR_6->enable_nbps_policy = 1;
 VAR_6->enable_sclk_ds = 1;
 VAR_6->enable_gfx_power_gating = 1;
 VAR_6->enable_gfx_clock_gating = 1;
 VAR_6->enable_mg_clock_gating = 0;
 VAR_6->enable_gfx_dynamic_mgpg = 0;
 VAR_6->override_dynamic_mgpg = 0;
 VAR_6->enable_auto_thermal_throttling = 1;
 VAR_6->voltage_drop_in_dce = 0;
 VAR_6->uvd_dpm = 1;

 VAR_7 = FUNC_5(VAR_5);
 if (VAR_7)
  return VAR_7;

 FUNC_3(VAR_5);

 VAR_7 = FUNC_1(VAR_5);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_2(VAR_5);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_4(VAR_5);
 if (VAR_7)
  return VAR_7;

 VAR_6->thermal_auto_throttling = VAR_6->sys_info.htc_tmp_lmt;
 VAR_6->enable_dpm = 1;

 return 0;
}
