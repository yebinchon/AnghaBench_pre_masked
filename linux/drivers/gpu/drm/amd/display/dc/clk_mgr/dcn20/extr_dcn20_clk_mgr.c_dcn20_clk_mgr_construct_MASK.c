
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct pp_smu_funcs {int dummy; } ;
struct fixed31_32 {int value; } ;
struct dccg {int dummy; } ;
struct dc_context {int dce_environment; } ;
struct TYPE_4__ {int dprefclk_khz; TYPE_2__* funcs; struct dc_context* ctx; } ;
struct clk_mgr_internal {int dprefclk_ss_divider; int ss_on_dprefclk; int dentist_vco_freq_khz; int dfs_bypass_enabled; TYPE_1__ base; TYPE_3__* clk_mgr_mask; scalar_t__ dprefclk_ss_percentage; scalar_t__ dfs_bypass_disp_clk; struct dccg* dccg; int * clk_mgr_shift; int * regs; struct pp_smu_funcs* pp_smu; } ;
struct TYPE_6__ {int FbMult_int; int FbMult_frac; } ;
struct TYPE_5__ {int update_clocks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 TYPE_3__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct fixed31_32) ;
 struct fixed31_32 FUNC_3 (int) ;
 struct fixed31_32 FUNC_4 (struct fixed31_32,int) ;
 int FUNC_5 (struct clk_mgr_internal*) ;
 TYPE_2__ VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (int) ;

void FUNC_7(
  struct dc_context *VAR_8,
  struct clk_mgr_internal *VAR_9,
  struct pp_smu_funcs *VAR_10,
  struct dccg *VAR_11)
{
 VAR_9->base.ctx = VAR_8;
 VAR_9->pp_smu = VAR_10;
 VAR_9->base.funcs = &VAR_6;
 VAR_9->regs = &VAR_4;
 VAR_9->clk_mgr_shift = &VAR_5;
 VAR_9->clk_mgr_mask = &VAR_3;

 VAR_9->dccg = VAR_11;
 VAR_9->dfs_bypass_disp_clk = 0;

 VAR_9->dprefclk_ss_percentage = 0;
 VAR_9->dprefclk_ss_divider = 1000;
 VAR_9->ss_on_dprefclk = 0;

 VAR_9->base.dprefclk_khz = 700000;

 if (FUNC_0(VAR_8->dce_environment)) {
  VAR_6.update_clocks = VAR_7;
  VAR_9->dentist_vco_freq_khz = 3850000;

 } else {

  int VAR_12 = FUNC_1(VAR_0);

  int VAR_13 = FUNC_6(VAR_12);


  uint32_t VAR_14 = FUNC_1(VAR_1);
  struct fixed31_32 VAR_15;






  VAR_15 = FUNC_3(VAR_14 & VAR_9->clk_mgr_mask->FbMult_int);
  VAR_15.value |= VAR_14 & VAR_9->clk_mgr_mask->FbMult_frac;


  VAR_15 = FUNC_4(VAR_15, 100000);


  VAR_9->dentist_vco_freq_khz = FUNC_2(VAR_15);


  if (VAR_9->dentist_vco_freq_khz == 0)
   VAR_9->dentist_vco_freq_khz = 3850000;


  VAR_9->base.dprefclk_khz = (VAR_2
   * VAR_9->dentist_vco_freq_khz) / VAR_13;
 }



 VAR_9->dfs_bypass_enabled = 0;

 FUNC_5(VAR_9);
}
