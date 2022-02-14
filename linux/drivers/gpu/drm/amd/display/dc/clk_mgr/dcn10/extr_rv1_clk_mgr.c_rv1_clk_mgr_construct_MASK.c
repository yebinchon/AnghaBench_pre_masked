
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pp_smu_funcs {int dummy; } ;
struct dc_debug_options {int disable_dfs_bypass; } ;
struct dc_context {struct dc_bios* dc_bios; TYPE_1__* dc; } ;
struct TYPE_7__ {int smu_gpu_pll_output_freq; } ;
struct dc_bios {TYPE_4__* integrated_info; TYPE_3__ fw_info; scalar_t__ fw_info_valid; } ;
struct TYPE_6__ {int dprefclk_khz; int * funcs; struct dc_context* ctx; } ;
struct clk_mgr_internal {int dprefclk_ss_divider; int ss_on_dprefclk; int dentist_vco_freq_khz; int dfs_bypass_enabled; TYPE_2__ base; scalar_t__ dprefclk_ss_percentage; scalar_t__ dfs_bypass_disp_clk; int * funcs; struct pp_smu_funcs* pp_smu; } ;
struct TYPE_8__ {int dentist_vco_freq; int gpu_cap_info; } ;
struct TYPE_5__ {struct dc_debug_options debug; } ;


 int VAR_0 ;
 int FUNC_0 (struct clk_mgr_internal*) ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_1(struct dc_context *VAR_3, struct clk_mgr_internal *VAR_4, struct pp_smu_funcs *VAR_5)
{
 struct dc_debug_options *VAR_6 = &VAR_3->dc->debug;
 struct dc_bios *VAR_7 = VAR_3->dc_bios;

 VAR_4->base.ctx = VAR_3;
 VAR_4->pp_smu = VAR_5;
 VAR_4->base.funcs = &VAR_1;
 VAR_4->funcs = &VAR_2;

 VAR_4->dfs_bypass_disp_clk = 0;

 VAR_4->dprefclk_ss_percentage = 0;
 VAR_4->dprefclk_ss_divider = 1000;
 VAR_4->ss_on_dprefclk = 0;
 VAR_4->base.dprefclk_khz = 600000;

 if (VAR_7->integrated_info)
  VAR_4->dentist_vco_freq_khz = VAR_7->integrated_info->dentist_vco_freq;
 if (VAR_7->fw_info_valid && VAR_4->dentist_vco_freq_khz == 0) {
  VAR_4->dentist_vco_freq_khz = VAR_7->fw_info.smu_gpu_pll_output_freq;
  if (VAR_4->dentist_vco_freq_khz == 0)
   VAR_4->dentist_vco_freq_khz = 3600000;
 }

 if (!VAR_6->disable_dfs_bypass && VAR_7->integrated_info)
  if (VAR_7->integrated_info->gpu_cap_info & VAR_0)
   VAR_4->dfs_bypass_enabled = 1;

 FUNC_0(VAR_4);
}
