
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int disallowed_features; int thermal_support; int sclk_throttle_low_notification; int stable_pstate_sclk_dpm_percentage; int didt_mode; int sq_ramping_support; int edc_didt_support; int pcie_lane_override; int pcie_speed_override; int pcie_clock_override; int regulator_hot_gpio_support; int zrpm_start_temp; int zrpm_stop_temp; int odn_feature_enable; int perf_ui_tuning_profile_turbo; int perf_ui_tuning_profile_powerSave; int perf_ui_tuning_profile_xl; int fps_support; int disable_auto_wattman; int auto_wattman_sample_period; int auto_wattman_threshold; scalar_t__ auto_wattman_debug; scalar_t__ disable_3d_fs_detection; scalar_t__ force_workload_policy_mask; scalar_t__ disable_workload_policy; scalar_t__ disable_xlpp_tuning; scalar_t__ disable_pp_tuning; scalar_t__ disable_water_mark; scalar_t__ quick_transition_support; scalar_t__ ac_dc_switch_gpio_support; scalar_t__ psm_didt_support; scalar_t__ gc_didt_support; scalar_t__ dbr_ramping_support; scalar_t__ tcp_ramping_support; scalar_t__ td_ramping_support; scalar_t__ db_ramping_support; scalar_t__ didt_support; scalar_t__ force_dpm_high; scalar_t__ log_avfs_param; scalar_t__ skip_baco_hardware; scalar_t__ od_state_in_dc_support; } ;
struct vega12_hwmgr {TYPE_1__ registry_data; void* phy_clk_quad_eqn_c; void* phy_clk_quad_eqn_b; void* phy_clk_quad_eqn_a; void* pixel_clk_quad_eqn_c; void* pixel_clk_quad_eqn_b; void* pixel_clk_quad_eqn_a; void* disp_clk_quad_eqn_c; void* disp_clk_quad_eqn_b; void* disp_clk_quad_eqn_a; void* dcef_clk_quad_eqn_c; void* dcef_clk_quad_eqn_b; void* dcef_clk_quad_eqn_a; int display_voltage_mode; int lowest_uclk_reserved_for_ulv; int gfx_activity_average_alpha; int uclk_average_alpha; int socclk_average_alpha; int gfxclk_average_alpha; } ;
struct pp_hwmgr {scalar_t__ backend; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_0(struct pp_hwmgr *VAR_7)
{
 struct vega12_hwmgr *VAR_8 =
   (struct vega12_hwmgr *)(VAR_7->backend);

 VAR_8->gfxclk_average_alpha = VAR_3;
 VAR_8->socclk_average_alpha = VAR_5;
 VAR_8->uclk_average_alpha = VAR_6;
 VAR_8->gfx_activity_average_alpha = VAR_2;
 VAR_8->lowest_uclk_reserved_for_ulv = VAR_4;

 VAR_8->display_voltage_mode = VAR_1;
 VAR_8->dcef_clk_quad_eqn_a = VAR_0;
 VAR_8->dcef_clk_quad_eqn_b = VAR_0;
 VAR_8->dcef_clk_quad_eqn_c = VAR_0;
 VAR_8->disp_clk_quad_eqn_a = VAR_0;
 VAR_8->disp_clk_quad_eqn_b = VAR_0;
 VAR_8->disp_clk_quad_eqn_c = VAR_0;
 VAR_8->pixel_clk_quad_eqn_a = VAR_0;
 VAR_8->pixel_clk_quad_eqn_b = VAR_0;
 VAR_8->pixel_clk_quad_eqn_c = VAR_0;
 VAR_8->phy_clk_quad_eqn_a = VAR_0;
 VAR_8->phy_clk_quad_eqn_b = VAR_0;
 VAR_8->phy_clk_quad_eqn_c = VAR_0;

 VAR_8->registry_data.disallowed_features = 0x0;
 VAR_8->registry_data.od_state_in_dc_support = 0;
 VAR_8->registry_data.thermal_support = 1;
 VAR_8->registry_data.skip_baco_hardware = 0;

 VAR_8->registry_data.log_avfs_param = 0;
 VAR_8->registry_data.sclk_throttle_low_notification = 1;
 VAR_8->registry_data.force_dpm_high = 0;
 VAR_8->registry_data.stable_pstate_sclk_dpm_percentage = 75;

 VAR_8->registry_data.didt_support = 0;
 if (VAR_8->registry_data.didt_support) {
  VAR_8->registry_data.didt_mode = 6;
  VAR_8->registry_data.sq_ramping_support = 1;
  VAR_8->registry_data.db_ramping_support = 0;
  VAR_8->registry_data.td_ramping_support = 0;
  VAR_8->registry_data.tcp_ramping_support = 0;
  VAR_8->registry_data.dbr_ramping_support = 0;
  VAR_8->registry_data.edc_didt_support = 1;
  VAR_8->registry_data.gc_didt_support = 0;
  VAR_8->registry_data.psm_didt_support = 0;
 }

 VAR_8->registry_data.pcie_lane_override = 0xff;
 VAR_8->registry_data.pcie_speed_override = 0xff;
 VAR_8->registry_data.pcie_clock_override = 0xffffffff;
 VAR_8->registry_data.regulator_hot_gpio_support = 1;
 VAR_8->registry_data.ac_dc_switch_gpio_support = 0;
 VAR_8->registry_data.quick_transition_support = 0;
 VAR_8->registry_data.zrpm_start_temp = 0xffff;
 VAR_8->registry_data.zrpm_stop_temp = 0xffff;
 VAR_8->registry_data.odn_feature_enable = 1;
 VAR_8->registry_data.disable_water_mark = 0;
 VAR_8->registry_data.disable_pp_tuning = 0;
 VAR_8->registry_data.disable_xlpp_tuning = 0;
 VAR_8->registry_data.disable_workload_policy = 0;
 VAR_8->registry_data.perf_ui_tuning_profile_turbo = 0x19190F0F;
 VAR_8->registry_data.perf_ui_tuning_profile_powerSave = 0x19191919;
 VAR_8->registry_data.perf_ui_tuning_profile_xl = 0x00000F0A;
 VAR_8->registry_data.force_workload_policy_mask = 0;
 VAR_8->registry_data.disable_3d_fs_detection = 0;
 VAR_8->registry_data.fps_support = 1;
 VAR_8->registry_data.disable_auto_wattman = 1;
 VAR_8->registry_data.auto_wattman_debug = 0;
 VAR_8->registry_data.auto_wattman_sample_period = 100;
 VAR_8->registry_data.auto_wattman_threshold = 50;
}
