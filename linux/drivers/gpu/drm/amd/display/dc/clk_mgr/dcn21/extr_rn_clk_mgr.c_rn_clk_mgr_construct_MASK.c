
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pp_smu_wm_range_sets {int member_0; } ;
struct TYPE_6__ {int pp_smu; int (* set_wm_ranges ) (int *,struct pp_smu_wm_range_sets*) ;int (* get_dpm_clock_table ) (int *,struct dpm_clocks*) ;} ;
struct pp_smu_funcs {TYPE_2__ rn_funcs; } ;
struct dpm_clocks {int member_0; } ;
struct dccg {int dummy; } ;
struct dc_debug_options {int disable_48mhz_pwrdwn; int disable_pplib_wm_range; } ;
struct dc_context {int asic_id; int dce_environment; TYPE_1__* dc; } ;
struct clk_state_registers_and_bypass {int dprefclk; int member_0; } ;
struct TYPE_7__ {int dprefclk_khz; int * bw_params; TYPE_4__* funcs; struct dc_context* ctx; } ;
struct clk_mgr_internal {int dprefclk_ss_divider; int ss_on_dprefclk; int dfs_ref_freq_khz; int dentist_vco_freq_khz; TYPE_3__ base; int smu_ver; scalar_t__ dprefclk_ss_percentage; scalar_t__ dfs_bypass_disp_clk; struct dccg* dccg; struct pp_smu_funcs* pp_smu; } ;
struct clk_log_info {int member_0; } ;
struct TYPE_8__ {int update_clocks; } ;
struct TYPE_5__ {struct dc_debug_options debug; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,struct pp_smu_wm_range_sets*) ;
 int FUNC_3 (int *,struct dpm_clocks*,int *) ;
 int FUNC_4 (struct clk_mgr_internal*) ;
 TYPE_4__ VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (struct clk_mgr_internal*) ;
 int VAR_2 ;
 int FUNC_6 (struct clk_state_registers_and_bypass*,TYPE_3__*,struct clk_log_info*) ;
 int FUNC_7 (struct clk_mgr_internal*) ;
 int FUNC_8 (struct clk_mgr_internal*) ;
 int FUNC_9 (int *,struct dpm_clocks*) ;
 int FUNC_10 (int *,struct pp_smu_wm_range_sets*) ;

void FUNC_11(
  struct dc_context *VAR_3,
  struct clk_mgr_internal *VAR_4,
  struct pp_smu_funcs *VAR_5,
  struct dccg *VAR_6)
{
 struct dc_debug_options *VAR_7 = &VAR_3->dc->debug;
 struct dpm_clocks VAR_8 = { 0 };
 struct clk_state_registers_and_bypass VAR_9 = { 0 };

 VAR_4->base.ctx = VAR_3;
 VAR_4->base.funcs = &VAR_0;

 VAR_4->pp_smu = VAR_5;

 VAR_4->dccg = VAR_6;
 VAR_4->dfs_bypass_disp_clk = 0;

 VAR_4->dprefclk_ss_percentage = 0;
 VAR_4->dprefclk_ss_divider = 1000;
 VAR_4->ss_on_dprefclk = 0;
 VAR_4->dfs_ref_freq_khz = 48000;

 VAR_4->smu_ver = FUNC_8(VAR_4);

 if (FUNC_1(VAR_3->dce_environment)) {
  VAR_0.update_clocks = VAR_1;
  VAR_4->dentist_vco_freq_khz = 3600000;
  VAR_4->base.dprefclk_khz = 600000;
 } else {
  struct clk_log_info VAR_10 = {0};


  VAR_4->dentist_vco_freq_khz = FUNC_5(VAR_4);


  if (VAR_4->dentist_vco_freq_khz == 0)
   VAR_4->dentist_vco_freq_khz = 3600000;

  FUNC_6(&VAR_9, &VAR_4->base, &VAR_10);
  VAR_4->base.dprefclk_khz = VAR_9.dprefclk;

  if (VAR_4->base.dprefclk_khz != 600000) {
   VAR_4->base.dprefclk_khz = 600000;
   FUNC_0(1);
  }


  if (VAR_4->base.dprefclk_khz == 0)
   VAR_4->base.dprefclk_khz = 600000;
 }

 FUNC_4(VAR_4);

 VAR_4->base.bw_params = &VAR_2;

 if (VAR_5) {
  VAR_5->rn_funcs.get_dpm_clock_table(&VAR_5->rn_funcs.pp_smu, &VAR_8);
  FUNC_3(VAR_4->base.bw_params, &VAR_8, &VAR_3->asic_id);
 }






 if (!VAR_7->disable_pplib_wm_range) {
  struct pp_smu_wm_range_sets VAR_11 = {0};

  FUNC_2(VAR_4->base.bw_params, &VAR_11);


  if (VAR_5 && VAR_5->rn_funcs.set_wm_ranges)
   VAR_5->rn_funcs.set_wm_ranges(&VAR_5->rn_funcs.pp_smu, &VAR_11);
 }


 if (!VAR_7->disable_48mhz_pwrdwn)
  FUNC_7(VAR_4);
}
