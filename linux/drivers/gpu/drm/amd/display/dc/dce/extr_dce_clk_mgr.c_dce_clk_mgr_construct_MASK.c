
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_pp_static_clock_info {int max_clocks_state; int member_0; } ;
struct clk_mgr {int * funcs; struct dc_context* ctx; } ;
struct dce_clk_mgr {int dprefclk_ss_divider; int ss_on_dprefclk; int cur_min_clks_state; int max_clks_state; scalar_t__ dprefclk_ss_percentage; scalar_t__ dfs_bypass_disp_clk; struct clk_mgr_mask const* clk_mgr_mask; struct clk_mgr_shift const* clk_mgr_shift; struct clk_mgr_registers const* regs; struct clk_mgr base; } ;
struct dc_context {int dummy; } ;
struct clk_mgr_shift {int dummy; } ;
struct clk_mgr_registers {int dummy; } ;
struct clk_mgr_mask {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dce_clk_mgr*) ;
 int FUNC_1 (struct dce_clk_mgr*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct dc_context*,struct dm_pp_static_clock_info*) ;

__attribute__((used)) static void FUNC_3(
 struct dce_clk_mgr *VAR_3,
 struct dc_context *VAR_4,
 const struct clk_mgr_registers *VAR_5,
 const struct clk_mgr_shift *VAR_6,
 const struct clk_mgr_mask *VAR_7)
{
 struct clk_mgr *VAR_8 = &VAR_3->base;
 struct dm_pp_static_clock_info VAR_9 = {0};

 VAR_8->ctx = VAR_4;
 VAR_8->funcs = &VAR_2;

 VAR_3->regs = VAR_5;
 VAR_3->clk_mgr_shift = VAR_6;
 VAR_3->clk_mgr_mask = VAR_7;

 VAR_3->dfs_bypass_disp_clk = 0;

 VAR_3->dprefclk_ss_percentage = 0;
 VAR_3->dprefclk_ss_divider = 1000;
 VAR_3->ss_on_dprefclk = 0;


 if (FUNC_2(VAR_4, &VAR_9))
  VAR_3->max_clks_state = VAR_9.max_clocks_state;
 else
  VAR_3->max_clks_state = VAR_1;
 VAR_3->cur_min_clks_state = VAR_0;

 FUNC_0(VAR_3);
 FUNC_1(VAR_3);
}
