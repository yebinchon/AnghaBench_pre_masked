
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct dmcu {TYPE_6__* funcs; } ;
struct dc_bios {TYPE_4__* funcs; } ;
struct dc {TYPE_5__* ctx; TYPE_3__* res_pool; } ;
struct TYPE_8__ {TYPE_1__* ctx; } ;
struct clk_mgr_internal {int dentist_vco_freq_khz; int dfs_bypass_disp_clk; int cur_min_clks_state; TYPE_2__ base; } ;
struct bp_set_dce_clock_parameters {int target_clock_frequency; int clock_type; int pll_id; } ;
typedef int dce_clk_params ;
struct TYPE_12__ {int (* set_psr_wait_loop ) (struct dmcu*,int) ;scalar_t__ (* is_dmcu_initialized ) (struct dmcu*) ;} ;
struct TYPE_11__ {int dce_environment; } ;
struct TYPE_10__ {int (* set_dce_clock ) (struct dc_bios*,struct bp_set_dce_clock_parameters*) ;} ;
struct TYPE_9__ {struct dmcu* dmcu; } ;
struct TYPE_7__ {struct dc* dc; struct dc_bios* dc_bios; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct bp_set_dce_clock_parameters*,int ,int) ;
 int FUNC_3 (struct dc_bios*,struct bp_set_dce_clock_parameters*) ;
 scalar_t__ FUNC_4 (struct dmcu*) ;
 int FUNC_5 (struct dmcu*,int) ;

int FUNC_6(struct clk_mgr_internal *VAR_3, int VAR_4)
{
 struct bp_set_dce_clock_parameters VAR_5;
 struct dc_bios *VAR_6 = VAR_3->base.ctx->dc_bios;
 struct dc *VAR_7 = VAR_3->base.ctx->dc;
 struct dmcu *VAR_8 = VAR_7->res_pool->dmcu;
 int VAR_9 = VAR_4;

 FUNC_2(&VAR_5, 0, sizeof(VAR_5));


 if (VAR_4 > 0)
  VAR_4 = FUNC_1(VAR_4,
    VAR_3->dentist_vco_freq_khz / 62);

 VAR_5.target_clock_frequency = VAR_4;
 VAR_5.pll_id = VAR_0;
 VAR_5.clock_type = VAR_1;

 VAR_6->funcs->set_dce_clock(VAR_6, &VAR_5);
 VAR_9 = VAR_5.target_clock_frequency;





 if (VAR_4 == 0)
  VAR_3->cur_min_clks_state = VAR_2;


 if (!FUNC_0(VAR_7->ctx->dce_environment)) {
  if (VAR_8 && VAR_8->funcs->is_dmcu_initialized(VAR_8)) {
   if (VAR_3->dfs_bypass_disp_clk != VAR_9)
    VAR_8->funcs->set_psr_wait_loop(VAR_8,
      VAR_9 / 1000 / 7);
  }
 }

 VAR_3->dfs_bypass_disp_clk = VAR_9;
 return VAR_9;

}
