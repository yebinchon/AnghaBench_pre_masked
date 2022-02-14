
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct dc_clocks {int fclk_khz; int phyclk_khz; int dcfclk_khz; int dcfclk_deep_sleep_khz; int socclk_khz; int dramclk_khz; int dppclk_khz; int dispclk_khz; } ;
struct TYPE_5__ {struct dc_clocks clk; } ;
struct TYPE_6__ {TYPE_1__ dcn; } ;
struct TYPE_7__ {TYPE_2__ bw; } ;
struct dc_state {TYPE_3__ bw_ctx; } ;
struct TYPE_8__ {int phyclk_khz; int dcfclk_khz; int dcfclk_deep_sleep_khz; int socclk_khz; int dramclk_khz; int dppclk_khz; int fclk_khz; int dispclk_khz; } ;
struct clk_mgr {TYPE_4__ clks; int ctx; } ;


 int FUNC_0 (int ,TYPE_4__*) ;
 scalar_t__ FUNC_1 (int,int,int) ;

void FUNC_2(struct clk_mgr *VAR_0,
  struct dc_state *VAR_1,
  bool VAR_2)
{
 struct dc_clocks *VAR_3 = &VAR_1->bw_ctx.bw.dcn.clk;

 int VAR_4 = VAR_3->fclk_khz > 1200000 ? VAR_3->fclk_khz : 1200000;

 if (FUNC_1(VAR_2, VAR_3->phyclk_khz, VAR_0->clks.phyclk_khz)) {
  VAR_0->clks.phyclk_khz = VAR_3->phyclk_khz;
 }

 if (FUNC_1(VAR_2, VAR_3->dcfclk_khz, VAR_0->clks.dcfclk_khz)) {
  VAR_0->clks.dcfclk_khz = VAR_3->dcfclk_khz;
 }

 if (FUNC_1(VAR_2,
   VAR_3->dcfclk_deep_sleep_khz, VAR_0->clks.dcfclk_deep_sleep_khz)) {
  VAR_0->clks.dcfclk_deep_sleep_khz = VAR_3->dcfclk_deep_sleep_khz;
 }

 if (FUNC_1(VAR_2, VAR_3->socclk_khz, VAR_0->clks.socclk_khz)) {
  VAR_0->clks.socclk_khz = VAR_3->socclk_khz;
 }

 if (FUNC_1(VAR_2, VAR_3->dramclk_khz, VAR_0->clks.dramclk_khz)) {
  VAR_0->clks.dramclk_khz = VAR_3->dramclk_khz;
 }

 if (FUNC_1(VAR_2, VAR_3->dppclk_khz, VAR_0->clks.dppclk_khz)) {
  VAR_0->clks.dppclk_khz = VAR_3->dppclk_khz;
 }

 if (FUNC_1(VAR_2, VAR_4, VAR_0->clks.fclk_khz)) {
  VAR_0->clks.fclk_khz = VAR_4;
 }

 if (FUNC_1(VAR_2, VAR_3->dispclk_khz, VAR_0->clks.dispclk_khz)) {
  VAR_0->clks.dispclk_khz = VAR_3->dispclk_khz;
 }




 if (VAR_0->clks.fclk_khz > VAR_0->clks.dppclk_khz)
  VAR_0->clks.dppclk_khz = VAR_0->clks.fclk_khz;
 if (VAR_0->clks.dppclk_khz > VAR_0->clks.fclk_khz)
  VAR_0->clks.fclk_khz = VAR_0->clks.dppclk_khz;

 FUNC_0(VAR_0->ctx, &VAR_0->clks);
}
