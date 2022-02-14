
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct dmcu {TYPE_7__* funcs; } ;
struct dc_bios {TYPE_5__* funcs; } ;
struct dc {TYPE_6__* ctx; TYPE_1__* res_pool; } ;
struct clk_mgr_internal {int dentist_vco_freq_khz; int dfs_bypass_disp_clk; int cur_min_clks_state; } ;
struct clk_mgr {TYPE_3__* ctx; } ;
struct TYPE_11__ {int USE_GENLOCK_AS_SOURCE_FOR_DPREFCLK; } ;
struct bp_set_dce_clock_parameters {int target_clock_frequency; scalar_t__ pll_id; TYPE_4__ flags; int clock_type; } ;
typedef int dce_clk_params ;
struct TYPE_14__ {int (* set_psr_wait_loop ) (struct dmcu*,int) ;scalar_t__ (* is_dmcu_initialized ) (struct dmcu*) ;} ;
struct TYPE_13__ {int dce_environment; } ;
struct TYPE_12__ {int (* set_dce_clock ) (struct dc_bios*,struct bp_set_dce_clock_parameters*) ;} ;
struct TYPE_9__ {int hw_internal_rev; } ;
struct TYPE_10__ {TYPE_2__ asic_id; struct dc* dc; struct dc_bios* dc_bios; } ;
struct TYPE_8__ {struct dmcu* dmcu; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 struct clk_mgr_internal* FUNC_2 (struct clk_mgr*) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (struct bp_set_dce_clock_parameters*,int ,int) ;
 int FUNC_5 (struct dc_bios*,struct bp_set_dce_clock_parameters*) ;
 int FUNC_6 (struct dc_bios*,struct bp_set_dce_clock_parameters*) ;
 scalar_t__ FUNC_7 (struct dmcu*) ;
 int FUNC_8 (struct dmcu*,int) ;

int FUNC_9(struct clk_mgr *VAR_5, int VAR_6)
{
 struct clk_mgr_internal *VAR_7 = FUNC_2(VAR_5);
 struct bp_set_dce_clock_parameters VAR_8;
 struct dc_bios *VAR_9 = VAR_5->ctx->dc_bios;
 struct dc *VAR_10 = VAR_5->ctx->dc;
 struct dmcu *VAR_11 = VAR_10->res_pool->dmcu;
 int VAR_12 = VAR_6;

 FUNC_4(&VAR_8, 0, sizeof(VAR_8));


 if (VAR_6 > 0)
  VAR_6 = FUNC_3(VAR_6,
    VAR_7->dentist_vco_freq_khz / 62);

 VAR_8.target_clock_frequency = VAR_6;
 VAR_8.pll_id = VAR_1;
 VAR_8.clock_type = VAR_2;

 VAR_9->funcs->set_dce_clock(VAR_9, &VAR_8);
 VAR_12 = VAR_8.target_clock_frequency;





 if (VAR_6 == 0)
  VAR_7->cur_min_clks_state = VAR_4;



 VAR_8.target_clock_frequency = 0;
 VAR_8.clock_type = VAR_3;
 if (!FUNC_0(VAR_5->ctx->asic_id.hw_internal_rev))
  VAR_8.flags.USE_GENLOCK_AS_SOURCE_FOR_DPREFCLK =
   (VAR_8.pll_id ==
     VAR_0);
 else
  VAR_8.flags.USE_GENLOCK_AS_SOURCE_FOR_DPREFCLK = 0;

 VAR_9->funcs->set_dce_clock(VAR_9, &VAR_8);

 if (!FUNC_1(VAR_10->ctx->dce_environment)) {
  if (VAR_11 && VAR_11->funcs->is_dmcu_initialized(VAR_11)) {
   if (VAR_7->dfs_bypass_disp_clk != VAR_12)
    VAR_11->funcs->set_psr_wait_loop(VAR_11,
      VAR_12 / 1000 / 7);
  }
 }

 VAR_7->dfs_bypass_disp_clk = VAR_12;
 return VAR_12;
}
