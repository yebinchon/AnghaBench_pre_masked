
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct dmcu {TYPE_8__* funcs; } ;
struct dc_bios {TYPE_7__* funcs; } ;
struct TYPE_13__ {TYPE_4__* ctx; } ;
struct clk_mgr_internal {int dentist_vco_freq_khz; int dfs_bypass_disp_clk; int cur_min_clks_state; scalar_t__ dfs_bypass_active; TYPE_5__ base; } ;
struct clk_mgr {TYPE_1__* ctx; } ;
struct TYPE_14__ {int SET_DISPCLK_DFS_BYPASS; } ;
struct bp_pixel_clock_parameters {int target_pixel_clock_100hz; int dfs_bypass_display_clock; TYPE_6__ flags; int pll_id; int member_0; } ;
struct TYPE_16__ {int (* set_psr_wait_loop ) (struct dmcu*,int) ;scalar_t__ (* is_dmcu_initialized ) (struct dmcu*) ;} ;
struct TYPE_15__ {int (* program_display_engine_pll ) (struct dc_bios*,struct bp_pixel_clock_parameters*) ;} ;
struct TYPE_12__ {TYPE_3__* dc; } ;
struct TYPE_11__ {TYPE_2__* res_pool; } ;
struct TYPE_10__ {struct dmcu* dmcu; } ;
struct TYPE_9__ {struct dc_bios* dc_bios; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct clk_mgr_internal* FUNC_0 (struct clk_mgr*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct dc_bios*,struct bp_pixel_clock_parameters*) ;
 scalar_t__ FUNC_3 (struct dmcu*) ;
 int FUNC_4 (struct dmcu*,int) ;

int FUNC_5(
 struct clk_mgr *VAR_2,
 int VAR_3)
{
 struct clk_mgr_internal *VAR_4 = FUNC_0(VAR_2);
 struct bp_pixel_clock_parameters VAR_5 = { 0 };
 struct dc_bios *VAR_6 = VAR_2->ctx->dc_bios;
 int VAR_7 = VAR_3;
 struct dmcu *VAR_8 = VAR_4->base.ctx->dc->res_pool->dmcu;


 if (VAR_3 > 0)
  VAR_3 = FUNC_1(VAR_3,
    VAR_4->dentist_vco_freq_khz / 64);


 VAR_5.target_pixel_clock_100hz = VAR_3 * 10;
 VAR_5.pll_id = VAR_0;

 if (VAR_4->dfs_bypass_active)
  VAR_5.flags.SET_DISPCLK_DFS_BYPASS = 1;

 VAR_6->funcs->program_display_engine_pll(VAR_6, &VAR_5);

 if (VAR_4->dfs_bypass_active) {

  VAR_4->dfs_bypass_disp_clk =
   VAR_5.dfs_bypass_display_clock;
  VAR_7 = VAR_5.dfs_bypass_display_clock;
 }



 if (VAR_3 == 0)
  VAR_4->cur_min_clks_state = VAR_1;

 if (VAR_8 && VAR_8->funcs->is_dmcu_initialized(VAR_8))
  VAR_8->funcs->set_psr_wait_loop(VAR_8, VAR_7 / 1000 / 7);

 return VAR_7;
}
