
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sclk_dpm_key_disabled; int socclk_dpm_key_disabled; int mclk_dpm_key_disabled; int pcie_dpm_key_disabled; int dcefclk_dpm_key_disabled; int power_containment_support; int enable_pkg_pwr_tracking_feature; int enable_tdc_limit_feature; int clock_stretcher_support; int ulv_support; int sclk_deep_sleep_support; int fan_control_support; int thermal_support; int fw_ctf_enabled; int avfs_support; int led_dpm_enabled; int vr0hot_enabled; int vr1hot_enabled; int regulator_hot_gpio_support; int didt_support; int didt_mode; int sq_ramping_support; int edc_didt_support; scalar_t__ psm_didt_support; scalar_t__ gc_didt_support; scalar_t__ dbr_ramping_support; scalar_t__ tcp_ramping_support; scalar_t__ td_ramping_support; scalar_t__ db_ramping_support; scalar_t__ disable_water_mark; } ;
struct vega10_hwmgr {int gfx_activity_average_alpha; int uclk_average_alpha; int socclk_average_alpha; int gfxclk_average_alpha; void* phy_clk_quad_eqn_c; void* phy_clk_quad_eqn_b; void* phy_clk_quad_eqn_a; void* pixel_clk_quad_eqn_c; void* pixel_clk_quad_eqn_b; void* pixel_clk_quad_eqn_a; void* disp_clk_quad_eqn_c; void* disp_clk_quad_eqn_b; void* disp_clk_quad_eqn_a; void* dcef_clk_quad_eqn_c; void* dcef_clk_quad_eqn_b; void* dcef_clk_quad_eqn_a; int display_voltage_mode; TYPE_1__ registry_data; } ;
struct pp_hwmgr {int feature_mask; struct vega10_hwmgr* backend; } ;


 void* VAR_0 ;
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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

__attribute__((used)) static void FUNC_0(struct pp_hwmgr *VAR_16)
{
 struct vega10_hwmgr *VAR_17 = VAR_16->backend;

 VAR_17->registry_data.sclk_dpm_key_disabled =
   VAR_16->feature_mask & VAR_13 ? 0 : 1;
 VAR_17->registry_data.socclk_dpm_key_disabled =
   VAR_16->feature_mask & VAR_14 ? 0 : 1;
 VAR_17->registry_data.mclk_dpm_key_disabled =
   VAR_16->feature_mask & VAR_9 ? 0 : 1;
 VAR_17->registry_data.pcie_dpm_key_disabled =
   VAR_16->feature_mask & VAR_10 ? 0 : 1;

 VAR_17->registry_data.dcefclk_dpm_key_disabled =
   VAR_16->feature_mask & VAR_8 ? 0 : 1;

 if (VAR_16->feature_mask & VAR_11) {
  VAR_17->registry_data.power_containment_support = 1;
  VAR_17->registry_data.enable_pkg_pwr_tracking_feature = 1;
  VAR_17->registry_data.enable_tdc_limit_feature = 1;
 }

 VAR_17->registry_data.clock_stretcher_support =
   VAR_16->feature_mask & VAR_7 ? 1 : 0;

 VAR_17->registry_data.ulv_support =
   VAR_16->feature_mask & VAR_15 ? 1 : 0;

 VAR_17->registry_data.sclk_deep_sleep_support =
   VAR_16->feature_mask & VAR_12 ? 1 : 0;

 VAR_17->registry_data.disable_water_mark = 0;

 VAR_17->registry_data.fan_control_support = 1;
 VAR_17->registry_data.thermal_support = 1;
 VAR_17->registry_data.fw_ctf_enabled = 1;

 VAR_17->registry_data.avfs_support =
  VAR_16->feature_mask & VAR_6 ? 1 : 0;
 VAR_17->registry_data.led_dpm_enabled = 1;

 VAR_17->registry_data.vr0hot_enabled = 1;
 VAR_17->registry_data.vr1hot_enabled = 1;
 VAR_17->registry_data.regulator_hot_gpio_support = 1;

 VAR_17->registry_data.didt_support = 1;
 if (VAR_17->registry_data.didt_support) {
  VAR_17->registry_data.didt_mode = 6;
  VAR_17->registry_data.sq_ramping_support = 1;
  VAR_17->registry_data.db_ramping_support = 0;
  VAR_17->registry_data.td_ramping_support = 0;
  VAR_17->registry_data.tcp_ramping_support = 0;
  VAR_17->registry_data.dbr_ramping_support = 0;
  VAR_17->registry_data.edc_didt_support = 1;
  VAR_17->registry_data.gc_didt_support = 0;
  VAR_17->registry_data.psm_didt_support = 0;
 }

 VAR_17->display_voltage_mode = VAR_1;
 VAR_17->dcef_clk_quad_eqn_a = VAR_0;
 VAR_17->dcef_clk_quad_eqn_b = VAR_0;
 VAR_17->dcef_clk_quad_eqn_c = VAR_0;
 VAR_17->disp_clk_quad_eqn_a = VAR_0;
 VAR_17->disp_clk_quad_eqn_b = VAR_0;
 VAR_17->disp_clk_quad_eqn_c = VAR_0;
 VAR_17->pixel_clk_quad_eqn_a = VAR_0;
 VAR_17->pixel_clk_quad_eqn_b = VAR_0;
 VAR_17->pixel_clk_quad_eqn_c = VAR_0;
 VAR_17->phy_clk_quad_eqn_a = VAR_0;
 VAR_17->phy_clk_quad_eqn_b = VAR_0;
 VAR_17->phy_clk_quad_eqn_c = VAR_0;

 VAR_17->gfxclk_average_alpha = VAR_3;
 VAR_17->socclk_average_alpha = VAR_4;
 VAR_17->uclk_average_alpha = VAR_5;
 VAR_17->gfx_activity_average_alpha = VAR_2;
}
