
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct dm_pp_clock_for_voltage_req {int clocks_in_khz; int clk_type; int member_0; } ;
struct dce_clk_mgr {scalar_t__ xgmi_enabled; int dfs_bypass_active; } ;
struct TYPE_6__ {int dispclk_khz; } ;
struct TYPE_7__ {TYPE_1__ dce; } ;
struct TYPE_8__ {TYPE_2__ bw; } ;
struct dc_state {TYPE_3__ bw_ctx; } ;
struct TYPE_9__ {int dispclk_khz; int phyclk_khz; } ;
struct clk_mgr {TYPE_5__* ctx; TYPE_4__ clks; } ;
struct TYPE_10__ {int dc; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dce_clk_mgr* FUNC_0 (struct clk_mgr*) ;
 int FUNC_1 (struct dce_clk_mgr*,int) ;
 int FUNC_2 (struct clk_mgr*,int) ;
 int FUNC_3 (int ,struct dc_state*) ;
 int FUNC_4 (TYPE_5__*,struct dm_pp_clock_for_voltage_req*) ;
 int FUNC_5 (struct dc_state*) ;
 scalar_t__ FUNC_6 (int,int,int) ;

__attribute__((used)) static void FUNC_7(struct clk_mgr *VAR_2,
   struct dc_state *VAR_3,
   bool VAR_4)
{
 struct dce_clk_mgr *VAR_5 = FUNC_0(VAR_2);
 struct dm_pp_clock_for_voltage_req VAR_6 = {0};
 int VAR_7 = FUNC_5(VAR_3);
 int VAR_8 = VAR_3->bw_ctx.bw.dce.dispclk_khz;


 if (!VAR_5->dfs_bypass_active)
  VAR_8 = VAR_8 * 115 / 100;

 if (FUNC_6(VAR_4, VAR_8, VAR_2->clks.dispclk_khz)) {
  VAR_6.clk_type = VAR_1;




  if (VAR_5->xgmi_enabled)
   VAR_8 = FUNC_1(
     VAR_5, VAR_8);
  VAR_6.clocks_in_khz = VAR_8;
  VAR_2->clks.dispclk_khz = FUNC_2(VAR_2, VAR_8);

  FUNC_4(VAR_2->ctx, &VAR_6);
 }

 if (FUNC_6(VAR_4, VAR_7, VAR_2->clks.phyclk_khz)) {
  VAR_6.clk_type = VAR_0;
  VAR_6.clocks_in_khz = VAR_7;
  VAR_2->clks.phyclk_khz = VAR_7;

  FUNC_4(VAR_2->ctx, &VAR_6);
 }
 FUNC_3(VAR_2->ctx->dc, VAR_3);
}
