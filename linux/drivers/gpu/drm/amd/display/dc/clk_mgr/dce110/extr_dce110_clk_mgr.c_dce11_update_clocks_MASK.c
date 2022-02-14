
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct dm_pp_power_level_change_request {scalar_t__ power_level; } ;
struct TYPE_6__ {int dispclk_khz; } ;
struct TYPE_7__ {TYPE_1__ dce; } ;
struct TYPE_8__ {TYPE_2__ bw; } ;
struct dc_state {TYPE_3__ bw_ctx; } ;
struct clk_mgr_internal {scalar_t__ cur_min_clks_state; int dfs_bypass_active; } ;
struct TYPE_9__ {int dispclk_khz; } ;
struct clk_mgr {TYPE_5__* ctx; TYPE_4__ clks; } ;
struct TYPE_10__ {int dc; } ;


 struct clk_mgr_internal* FUNC_0 (struct clk_mgr*) ;
 int FUNC_1 (int ,struct dc_state*) ;
 scalar_t__ FUNC_2 (struct clk_mgr*,struct dc_state*) ;
 int FUNC_3 (struct clk_mgr*,int) ;
 scalar_t__ FUNC_4 (TYPE_5__*,struct dm_pp_power_level_change_request*) ;
 scalar_t__ FUNC_5 (int,int,int) ;

__attribute__((used)) static void FUNC_6(struct clk_mgr *VAR_0,
   struct dc_state *VAR_1,
   bool VAR_2)
{
 struct clk_mgr_internal *VAR_3 = FUNC_0(VAR_0);
 struct dm_pp_power_level_change_request VAR_4;
 int VAR_5 = VAR_1->bw_ctx.bw.dce.dispclk_khz;


 if (!VAR_3->dfs_bypass_active)
  VAR_5 = VAR_5 * 115 / 100;

 VAR_4.power_level = FUNC_2(VAR_0, VAR_1);

 if ((VAR_4.power_level < VAR_3->cur_min_clks_state && VAR_2)
   || VAR_4.power_level > VAR_3->cur_min_clks_state) {
  if (FUNC_4(VAR_0->ctx, &VAR_4))
   VAR_3->cur_min_clks_state = VAR_4.power_level;
 }

 if (FUNC_5(VAR_2, VAR_5, VAR_0->clks.dispclk_khz)) {
  VAR_1->bw_ctx.bw.dce.dispclk_khz = FUNC_3(VAR_0, VAR_5);
  VAR_0->clks.dispclk_khz = VAR_5;
 }
 FUNC_1(VAR_0->ctx->dc, VAR_1);
}
