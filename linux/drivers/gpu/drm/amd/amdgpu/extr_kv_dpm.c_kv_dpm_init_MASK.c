
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kv_power_info {int enable_nb_dpm; int caps_power_containment; int caps_cac; int enable_didt; int caps_sq_ramping; int caps_db_ramping; int caps_td_ramping; int caps_tcp_ramping; int caps_sclk_ds; int enable_auto_thermal_throttling; int disable_nb_ps3_in_battery; int bapm_enable; int caps_sclk_throttle_low_notification; int caps_fps; int caps_uvd_pg; int caps_uvd_dpm; int caps_vce_pg; int caps_samu_pg; int caps_acp_pg; int caps_stable_p_state; int enable_dpm; scalar_t__ voltage_drop_t; int sram_end; int * at; } ;
struct TYPE_3__ {struct kv_power_info* priv; } ;
struct TYPE_4__ {int pp_feature; TYPE_1__ dpm; } ;
struct amdgpu_device {int pg_flags; TYPE_2__ pm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (struct amdgpu_device*) ;
 int FUNC_5 (struct amdgpu_device*) ;
 struct kv_power_info* FUNC_6 (int,int ) ;

__attribute__((used)) static int FUNC_7(struct amdgpu_device *VAR_11)
{
 struct kv_power_info *VAR_12;
 int VAR_13, VAR_14;

 VAR_12 = FUNC_6(sizeof(struct kv_power_info), VAR_5);
 if (VAR_12 == ((void*)0))
  return -VAR_4;
 VAR_11->pm.dpm.priv = VAR_12;

 VAR_13 = FUNC_0(VAR_11);
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_1(VAR_11);
 if (VAR_13)
  return VAR_13;

 for (VAR_14 = 0; VAR_14 < VAR_8; VAR_14++)
  VAR_12->at[VAR_14] = VAR_9;

 VAR_12->sram_end = VAR_7;

 VAR_12->enable_nb_dpm = 1;

 VAR_12->caps_power_containment = 1;
 VAR_12->caps_cac = 1;
 VAR_12->enable_didt = 0;
 if (VAR_12->enable_didt) {
  VAR_12->caps_sq_ramping = 1;
  VAR_12->caps_db_ramping = 1;
  VAR_12->caps_td_ramping = 1;
  VAR_12->caps_tcp_ramping = 1;
 }

 if (VAR_11->pm.pp_feature & VAR_6)
  VAR_12->caps_sclk_ds = 1;
 else
  VAR_12->caps_sclk_ds = 0;

 VAR_12->enable_auto_thermal_throttling = 1;
 VAR_12->disable_nb_ps3_in_battery = 0;
 if (VAR_10 == 0)
  VAR_12->bapm_enable = 0;
 else
  VAR_12->bapm_enable = 1;
 VAR_12->voltage_drop_t = 0;
 VAR_12->caps_sclk_throttle_low_notification = 0;
 VAR_12->caps_fps = 0;
 VAR_12->caps_uvd_pg = (VAR_11->pg_flags & VAR_2) ? 1 : 0;
 VAR_12->caps_uvd_dpm = 1;
 VAR_12->caps_vce_pg = (VAR_11->pg_flags & VAR_3) ? 1 : 0;
 VAR_12->caps_samu_pg = (VAR_11->pg_flags & VAR_1) ? 1 : 0;
 VAR_12->caps_acp_pg = (VAR_11->pg_flags & VAR_0) ? 1 : 0;
 VAR_12->caps_stable_p_state = 0;

 VAR_13 = FUNC_4(VAR_11);
 if (VAR_13)
  return VAR_13;

 FUNC_5(VAR_11);
 FUNC_2(VAR_11);

 VAR_13 = FUNC_3(VAR_11);
 if (VAR_13)
  return VAR_13;

 VAR_12->enable_dpm = 1;

 return 0;
}
