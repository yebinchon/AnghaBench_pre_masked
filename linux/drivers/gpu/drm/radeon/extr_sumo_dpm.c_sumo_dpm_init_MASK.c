
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int enable_boost; int htc_tmp_lmt; } ;
struct sumo_power_info {int driver_nbps_policy_disable; int disable_gfx_power_gating_in_uvd; int enable_alt_vddnb; int enable_sclk_ds; int enable_dynamic_m3_arbiter; int enable_dynamic_patch_ps; int enable_gfx_power_gating; int enable_gfx_clock_gating; int enable_mg_clock_gating; int enable_auto_thermal_throttling; int enable_dpm; TYPE_3__ sys_info; int enable_boost; int thermal_auto_throttling; int asi; int pasi; } ;
struct TYPE_4__ {struct sumo_power_info* priv; } ;
struct TYPE_5__ {TYPE_1__ dpm; } ;
struct radeon_device {scalar_t__ family; TYPE_2__ pm; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int VAR_7 ;
 struct sumo_power_info* FUNC_1 (int,int ) ;
 int FUNC_2 (struct radeon_device*) ;
 int FUNC_3 (struct radeon_device*) ;
 int FUNC_4 (struct radeon_device*) ;
 int FUNC_5 (struct radeon_device*) ;

int FUNC_6(struct radeon_device *VAR_8)
{
 struct sumo_power_info *VAR_9;
 u32 VAR_10 = (FUNC_0(VAR_6) & VAR_0) >> VAR_1;
 int VAR_11;

 VAR_9 = FUNC_1(sizeof(struct sumo_power_info), VAR_5);
 if (VAR_9 == ((void*)0))
  return -VAR_4;
 VAR_8->pm.dpm.priv = VAR_9;

 VAR_9->driver_nbps_policy_disable = 0;
 if ((VAR_8->family == VAR_2) && (VAR_10 < 3))
  VAR_9->disable_gfx_power_gating_in_uvd = 1;
 else
  VAR_9->disable_gfx_power_gating_in_uvd = 0;
 VAR_9->enable_alt_vddnb = 1;
 VAR_9->enable_sclk_ds = 1;
 VAR_9->enable_dynamic_m3_arbiter = 0;
 VAR_9->enable_dynamic_patch_ps = 1;



 if (VAR_8->family == VAR_2)
  VAR_9->enable_gfx_power_gating = 0;
 else
  VAR_9->enable_gfx_power_gating = 1;
 VAR_9->enable_gfx_clock_gating = 1;
 VAR_9->enable_mg_clock_gating = 1;
 VAR_9->enable_auto_thermal_throttling = 1;

 VAR_11 = FUNC_5(VAR_8);
 if (VAR_11)
  return VAR_11;

 FUNC_3(VAR_8);

 VAR_11 = FUNC_2(VAR_8);
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_4(VAR_8);
 if (VAR_11)
  return VAR_11;

 VAR_9->pasi = VAR_3;
 VAR_9->asi = VAR_7;
 VAR_9->thermal_auto_throttling = VAR_9->sys_info.htc_tmp_lmt;
 VAR_9->enable_boost = VAR_9->sys_info.enable_boost;
 VAR_9->enable_dpm = 1;

 return 0;
}
