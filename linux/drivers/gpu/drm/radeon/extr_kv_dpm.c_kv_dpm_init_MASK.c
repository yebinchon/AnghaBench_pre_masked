
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct kv_power_info* priv; } ;
struct TYPE_5__ {TYPE_1__ dpm; } ;
struct radeon_device {scalar_t__ family; TYPE_3__* pdev; TYPE_2__ pm; } ;
struct kv_power_info {int enable_nb_dpm; int caps_power_containment; int caps_cac; int enable_didt; int caps_sq_ramping; int caps_db_ramping; int caps_td_ramping; int caps_tcp_ramping; int caps_sclk_ds; int enable_auto_thermal_throttling; int disable_nb_ps3_in_battery; int bapm_enable; int caps_sclk_throttle_low_notification; int caps_fps; int caps_uvd_pg; int caps_uvd_dpm; int caps_vce_pg; int caps_samu_pg; int caps_acp_pg; int caps_stable_p_state; int enable_dpm; scalar_t__ voltage_drop_t; int sram_end; int * at; } ;
struct TYPE_6__ {int subsystem_vendor; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (struct radeon_device*) ;
 int FUNC_2 (struct radeon_device*) ;
 int FUNC_3 (struct radeon_device*) ;
 struct kv_power_info* FUNC_4 (int,int ) ;
 int FUNC_5 (struct radeon_device*) ;
 int FUNC_6 (struct radeon_device*) ;
 int VAR_7 ;

int FUNC_7(struct radeon_device *VAR_8)
{
 struct kv_power_info *VAR_9;
 int VAR_10, VAR_11;

 VAR_9 = FUNC_4(sizeof(struct kv_power_info), VAR_3);
 if (VAR_9 == ((void*)0))
  return -VAR_2;
 VAR_8->pm.dpm.priv = VAR_9;

 VAR_10 = FUNC_5(VAR_8);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_6(VAR_8);
 if (VAR_10)
  return VAR_10;

 for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++)
  VAR_9->at[VAR_11] = VAR_6;

 VAR_9->sram_end = VAR_4;


 if (VAR_8->pdev->subsystem_vendor == 0x1849)
  VAR_9->enable_nb_dpm = 0;
 else
  VAR_9->enable_nb_dpm = 1;

 VAR_9->caps_power_containment = 1;
 VAR_9->caps_cac = 1;
 VAR_9->enable_didt = 0;
 if (VAR_9->enable_didt) {
  VAR_9->caps_sq_ramping = 1;
  VAR_9->caps_db_ramping = 1;
  VAR_9->caps_td_ramping = 1;
  VAR_9->caps_tcp_ramping = 1;
 }

 VAR_9->caps_sclk_ds = 1;
 VAR_9->enable_auto_thermal_throttling = 1;
 VAR_9->disable_nb_ps3_in_battery = 0;
 if (VAR_7 == -1) {

  if (VAR_8->family == VAR_0 || VAR_8->family == VAR_1)
   VAR_9->bapm_enable = 1;
  else
   VAR_9->bapm_enable = 0;
 } else if (VAR_7 == 0) {
  VAR_9->bapm_enable = 0;
 } else {
  VAR_9->bapm_enable = 1;
 }
 VAR_9->voltage_drop_t = 0;
 VAR_9->caps_sclk_throttle_low_notification = 0;
 VAR_9->caps_fps = 0;
 VAR_9->caps_uvd_pg = 1;
 VAR_9->caps_uvd_dpm = 1;
 VAR_9->caps_vce_pg = 0;
 VAR_9->caps_samu_pg = 0;
 VAR_9->caps_acp_pg = 0;
 VAR_9->caps_stable_p_state = 0;

 VAR_10 = FUNC_2(VAR_8);
 if (VAR_10)
  return VAR_10;

 FUNC_3(VAR_8);
 FUNC_0(VAR_8);

 VAR_10 = FUNC_1(VAR_8);
 if (VAR_10)
  return VAR_10;

 VAR_9->enable_dpm = 1;

 return 0;
}
