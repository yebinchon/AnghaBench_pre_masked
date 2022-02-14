
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int disallowed_features; int thermal_support; int sclk_throttle_low_notification; int stable_pstate_sclk_dpm_percentage; int didt_mode; int sq_ramping_support; int edc_didt_support; int pcie_lane_override; int pcie_speed_override; int pcie_clock_override; int regulator_hot_gpio_support; int zrpm_start_temp; int zrpm_stop_temp; int od8_feature_enable; int perf_ui_tuning_profile_turbo; int perf_ui_tuning_profile_powerSave; int perf_ui_tuning_profile_xl; int fps_support; int disable_auto_wattman; int auto_wattman_sample_period; int auto_wattman_threshold; int gfxoff_controlled_by_driver; scalar_t__ fclk_gfxclk_ratio; scalar_t__ auto_wattman_debug; scalar_t__ disable_3d_fs_detection; scalar_t__ force_workload_policy_mask; scalar_t__ disable_workload_policy; scalar_t__ disable_xlpp_tuning; scalar_t__ disable_pp_tuning; scalar_t__ disable_water_mark; scalar_t__ quick_transition_support; scalar_t__ ac_dc_switch_gpio_support; scalar_t__ psm_didt_support; scalar_t__ gc_didt_support; scalar_t__ dbr_ramping_support; scalar_t__ tcp_ramping_support; scalar_t__ td_ramping_support; scalar_t__ db_ramping_support; scalar_t__ didt_support; scalar_t__ force_dpm_high; scalar_t__ log_avfs_param; scalar_t__ skip_baco_hardware; scalar_t__ od_state_in_dc_support; } ;
struct vega20_hwmgr {int gfxoff_allowed; scalar_t__ counter_gfxoff; TYPE_1__ registry_data; void* phy_clk_quad_eqn_c; void* phy_clk_quad_eqn_b; void* phy_clk_quad_eqn_a; void* pixel_clk_quad_eqn_c; void* pixel_clk_quad_eqn_b; void* pixel_clk_quad_eqn_a; void* disp_clk_quad_eqn_c; void* disp_clk_quad_eqn_b; void* disp_clk_quad_eqn_a; void* dcef_clk_quad_eqn_c; void* dcef_clk_quad_eqn_b; void* dcef_clk_quad_eqn_a; int display_voltage_mode; int lowest_uclk_reserved_for_ulv; int gfx_activity_average_alpha; int uclk_average_alpha; int socclk_average_alpha; int gfxclk_average_alpha; } ;
struct pp_hwmgr {int smu_version; int feature_mask; scalar_t__ backend; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_0 (struct pp_hwmgr*) ;
 int FUNC_1 (struct pp_hwmgr*,int ) ;

__attribute__((used)) static void FUNC_2(struct pp_hwmgr *VAR_23)
{
 struct vega20_hwmgr *VAR_24 =
   (struct vega20_hwmgr *)(VAR_23->backend);

 VAR_24->gfxclk_average_alpha = VAR_12;
 VAR_24->socclk_average_alpha = VAR_14;
 VAR_24->uclk_average_alpha = VAR_15;
 VAR_24->gfx_activity_average_alpha = VAR_11;
 VAR_24->lowest_uclk_reserved_for_ulv = VAR_13;

 VAR_24->display_voltage_mode = VAR_10;
 VAR_24->dcef_clk_quad_eqn_a = VAR_8;
 VAR_24->dcef_clk_quad_eqn_b = VAR_8;
 VAR_24->dcef_clk_quad_eqn_c = VAR_8;
 VAR_24->disp_clk_quad_eqn_a = VAR_8;
 VAR_24->disp_clk_quad_eqn_b = VAR_8;
 VAR_24->disp_clk_quad_eqn_c = VAR_8;
 VAR_24->pixel_clk_quad_eqn_a = VAR_8;
 VAR_24->pixel_clk_quad_eqn_b = VAR_8;
 VAR_24->pixel_clk_quad_eqn_c = VAR_8;
 VAR_24->phy_clk_quad_eqn_a = VAR_8;
 VAR_24->phy_clk_quad_eqn_b = VAR_8;
 VAR_24->phy_clk_quad_eqn_c = VAR_8;
 VAR_24->registry_data.disallowed_features = 0xE0041C00;

 FUNC_1(VAR_23, VAR_9);
 VAR_23->smu_version = FUNC_0(VAR_23);
 if (VAR_23->smu_version < 0x282100)
  VAR_24->registry_data.disallowed_features |= VAR_6;

 if (!(VAR_23->feature_mask & VAR_18))
  VAR_24->registry_data.disallowed_features |= VAR_2;

 if (!(VAR_23->feature_mask & VAR_20))
  VAR_24->registry_data.disallowed_features |= VAR_1;

 if (!(VAR_23->feature_mask & VAR_21))
  VAR_24->registry_data.disallowed_features |= VAR_3;

 if (!(VAR_23->feature_mask & VAR_17))
  VAR_24->registry_data.disallowed_features |= VAR_4;

 if (!(VAR_23->feature_mask & VAR_16))
  VAR_24->registry_data.disallowed_features |= VAR_0;

 if (!(VAR_23->feature_mask & VAR_22))
  VAR_24->registry_data.disallowed_features |= VAR_7;

 if (!(VAR_23->feature_mask & VAR_19))
  VAR_24->registry_data.disallowed_features |= VAR_5;

 VAR_24->registry_data.od_state_in_dc_support = 0;
 VAR_24->registry_data.thermal_support = 1;
 VAR_24->registry_data.skip_baco_hardware = 0;

 VAR_24->registry_data.log_avfs_param = 0;
 VAR_24->registry_data.sclk_throttle_low_notification = 1;
 VAR_24->registry_data.force_dpm_high = 0;
 VAR_24->registry_data.stable_pstate_sclk_dpm_percentage = 75;

 VAR_24->registry_data.didt_support = 0;
 if (VAR_24->registry_data.didt_support) {
  VAR_24->registry_data.didt_mode = 6;
  VAR_24->registry_data.sq_ramping_support = 1;
  VAR_24->registry_data.db_ramping_support = 0;
  VAR_24->registry_data.td_ramping_support = 0;
  VAR_24->registry_data.tcp_ramping_support = 0;
  VAR_24->registry_data.dbr_ramping_support = 0;
  VAR_24->registry_data.edc_didt_support = 1;
  VAR_24->registry_data.gc_didt_support = 0;
  VAR_24->registry_data.psm_didt_support = 0;
 }

 VAR_24->registry_data.pcie_lane_override = 0xff;
 VAR_24->registry_data.pcie_speed_override = 0xff;
 VAR_24->registry_data.pcie_clock_override = 0xffffffff;
 VAR_24->registry_data.regulator_hot_gpio_support = 1;
 VAR_24->registry_data.ac_dc_switch_gpio_support = 0;
 VAR_24->registry_data.quick_transition_support = 0;
 VAR_24->registry_data.zrpm_start_temp = 0xffff;
 VAR_24->registry_data.zrpm_stop_temp = 0xffff;
 VAR_24->registry_data.od8_feature_enable = 1;
 VAR_24->registry_data.disable_water_mark = 0;
 VAR_24->registry_data.disable_pp_tuning = 0;
 VAR_24->registry_data.disable_xlpp_tuning = 0;
 VAR_24->registry_data.disable_workload_policy = 0;
 VAR_24->registry_data.perf_ui_tuning_profile_turbo = 0x19190F0F;
 VAR_24->registry_data.perf_ui_tuning_profile_powerSave = 0x19191919;
 VAR_24->registry_data.perf_ui_tuning_profile_xl = 0x00000F0A;
 VAR_24->registry_data.force_workload_policy_mask = 0;
 VAR_24->registry_data.disable_3d_fs_detection = 0;
 VAR_24->registry_data.fps_support = 1;
 VAR_24->registry_data.disable_auto_wattman = 1;
 VAR_24->registry_data.auto_wattman_debug = 0;
 VAR_24->registry_data.auto_wattman_sample_period = 100;
 VAR_24->registry_data.fclk_gfxclk_ratio = 0;
 VAR_24->registry_data.auto_wattman_threshold = 50;
 VAR_24->registry_data.gfxoff_controlled_by_driver = 1;
 VAR_24->gfxoff_allowed = 0;
 VAR_24->counter_gfxoff = 0;
}
