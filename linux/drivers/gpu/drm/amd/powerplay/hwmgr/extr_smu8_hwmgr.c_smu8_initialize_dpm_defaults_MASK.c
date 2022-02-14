
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cpu_cc6_disable; int cpu_pstate_disable; int nb_pstate_switch_disable; scalar_t__ cpu_pstate_separation_time; } ;
struct smu8_hwmgr {int gfx_ramp_step; int gfx_ramp_delay; int mgcg_cgtt_local0; int mgcg_cgtt_local1; int clock_slow_down_freq; int skip_clock_slow_down; int enable_nb_ps_policy; int voting_rights_clients; int static_screen_threshold; int bapm_enabled; int gfx_power_gating_threshold; int vce_slow_sclk_threshold; int dce_slow_sclk_threshold; int disable_driver_thermal_policy; int override_dynamic_mgpg; TYPE_1__ cc6_settings; scalar_t__ disable_gfx_power_gating_in_uvd; scalar_t__ tdr_clock; scalar_t__ thermal_auto_throttling_treshold; scalar_t__ disable_nb_ps3_in_battery; scalar_t__ voltage_drop_threshold; scalar_t__ ddi_power_gating_disabled; scalar_t__ voltage_drop_in_dce_power_gating; } ;
struct TYPE_4__ {int platformCaps; } ;
struct pp_hwmgr {TYPE_2__ platform_descriptor; struct amdgpu_device* adev; struct smu8_hwmgr* backend; } ;
struct amdgpu_device {int pg_flags; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct pp_hwmgr *VAR_12)
{
 struct smu8_hwmgr *VAR_13 = VAR_12->backend;
 struct amdgpu_device *VAR_14 = VAR_12->adev;

 VAR_13->gfx_ramp_step = 256*25/100;
 VAR_13->gfx_ramp_delay = 1;

 VAR_13->mgcg_cgtt_local0 = 0x00000000;
 VAR_13->mgcg_cgtt_local1 = 0x00000000;
 VAR_13->clock_slow_down_freq = 25000;
 VAR_13->skip_clock_slow_down = 1;
 VAR_13->enable_nb_ps_policy = 1;
 VAR_13->voltage_drop_in_dce_power_gating = 0;
 VAR_13->voting_rights_clients = 0x00C00033;
 VAR_13->static_screen_threshold = 8;
 VAR_13->ddi_power_gating_disabled = 0;
 VAR_13->bapm_enabled = 1;
 VAR_13->voltage_drop_threshold = 0;
 VAR_13->gfx_power_gating_threshold = 500;
 VAR_13->vce_slow_sclk_threshold = 20000;
 VAR_13->dce_slow_sclk_threshold = 30000;
 VAR_13->disable_driver_thermal_policy = 1;
 VAR_13->disable_nb_ps3_in_battery = 0;

 FUNC_1(VAR_12->platform_descriptor.platformCaps,
       VAR_2);

 FUNC_0(VAR_12->platform_descriptor.platformCaps,
        VAR_7);

 FUNC_1(VAR_12->platform_descriptor.platformCaps,
     VAR_4);

 VAR_13->override_dynamic_mgpg = 1;

 FUNC_0(VAR_12->platform_descriptor.platformCaps,
      VAR_5);

 VAR_13->thermal_auto_throttling_treshold = 0;
 VAR_13->tdr_clock = 0;
 VAR_13->disable_gfx_power_gating_in_uvd = 0;

 FUNC_0(VAR_12->platform_descriptor.platformCaps,
     VAR_6);

 FUNC_0(VAR_12->platform_descriptor.platformCaps,
   VAR_8);
 FUNC_0(VAR_12->platform_descriptor.platformCaps,
   VAR_10);

 VAR_13->cc6_settings.cpu_cc6_disable = 0;
 VAR_13->cc6_settings.cpu_pstate_disable = 0;
 VAR_13->cc6_settings.nb_pstate_switch_disable = 0;
 VAR_13->cc6_settings.cpu_pstate_separation_time = 0;

 FUNC_0(VAR_12->platform_descriptor.platformCaps,
       VAR_3);

 FUNC_1(VAR_12->platform_descriptor.platformCaps,
        VAR_9);
 FUNC_1(VAR_12->platform_descriptor.platformCaps,
        VAR_11);

 if (VAR_14->pg_flags & VAR_0)
  FUNC_0(VAR_12->platform_descriptor.platformCaps,
         VAR_9);
 if (VAR_14->pg_flags & VAR_1)
  FUNC_0(VAR_12->platform_descriptor.platformCaps,
         VAR_11);


 return 0;
}
