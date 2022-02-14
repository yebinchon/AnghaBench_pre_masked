
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct dmcu {TYPE_8__* funcs; } ;
struct dc_clocks {scalar_t__ phyclk_khz; scalar_t__ dcfclk_khz; scalar_t__ dcfclk_deep_sleep_khz; scalar_t__ dppclk_khz; scalar_t__ dispclk_khz; } ;
struct TYPE_10__ {struct dc_clocks clk; } ;
struct TYPE_11__ {TYPE_1__ dcn; } ;
struct TYPE_12__ {TYPE_2__ bw; } ;
struct dc_state {TYPE_3__ bw_ctx; } ;
struct dc {TYPE_4__* res_pool; } ;
struct TYPE_15__ {scalar_t__ dppclk_khz; } ;
struct TYPE_16__ {TYPE_6__ clks; } ;
struct clk_mgr_internal {TYPE_7__ base; } ;
struct TYPE_18__ {scalar_t__ phyclk_khz; scalar_t__ dcfclk_khz; scalar_t__ dcfclk_deep_sleep_khz; scalar_t__ dppclk_khz; scalar_t__ dispclk_khz; } ;
struct clk_mgr {TYPE_9__ clks; TYPE_5__* ctx; } ;
struct TYPE_17__ {int (* set_psr_wait_loop ) (struct dmcu*,int) ;scalar_t__ (* is_dmcu_initialized ) (struct dmcu*) ;} ;
struct TYPE_14__ {struct dc* dc; } ;
struct TYPE_13__ {struct dmcu* dmcu; } ;


 struct clk_mgr_internal* FUNC_0 (struct clk_mgr*) ;
 int FUNC_1 (struct dc*,struct dc_state*) ;
 int FUNC_2 (struct clk_mgr_internal*,struct dc_state*) ;
 int FUNC_3 (struct clk_mgr_internal*,scalar_t__) ;
 int FUNC_4 (struct clk_mgr_internal*,int) ;
 int FUNC_5 (struct clk_mgr_internal*,scalar_t__) ;
 int FUNC_6 (struct clk_mgr_internal*,scalar_t__) ;
 int FUNC_7 (struct clk_mgr_internal*,scalar_t__) ;
 int FUNC_8 (struct clk_mgr_internal*,scalar_t__) ;
 scalar_t__ FUNC_9 (int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_10 (struct dmcu*) ;
 int FUNC_11 (struct dmcu*,int) ;

void FUNC_12(struct clk_mgr *VAR_0,
   struct dc_state *VAR_1,
   bool VAR_2)
{
 struct clk_mgr_internal *VAR_3 = FUNC_0(VAR_0);
 struct dc_clocks *VAR_4 = &VAR_1->bw_ctx.bw.dcn.clk;
 struct dc *VAR_5 = VAR_0->ctx->dc;
 int VAR_6;
 bool VAR_7 = 0;
 bool VAR_8 = 0;
 bool VAR_9 = 0;
 bool VAR_10 = 0;
 struct dmcu *VAR_11 = VAR_0->ctx->dc->res_pool->dmcu;

 VAR_6 = FUNC_1(VAR_5, VAR_1);

 if (VAR_6 == 0)
  VAR_9 = 1;

 if (VAR_9 == VAR_2) {
  FUNC_4(VAR_3, VAR_6);
 }

 if (FUNC_9(VAR_2, VAR_4->phyclk_khz, VAR_0->clks.phyclk_khz)) {
  VAR_0->clks.phyclk_khz = VAR_4->phyclk_khz;
  FUNC_8(VAR_3, VAR_0->clks.phyclk_khz);
 }

 if (FUNC_9(VAR_2, VAR_4->dcfclk_khz, VAR_0->clks.dcfclk_khz)) {
  VAR_0->clks.dcfclk_khz = VAR_4->dcfclk_khz;
  FUNC_6(VAR_3, VAR_0->clks.dcfclk_khz);
 }

 if (FUNC_9(VAR_2,
   VAR_4->dcfclk_deep_sleep_khz, VAR_0->clks.dcfclk_deep_sleep_khz)) {
  VAR_0->clks.dcfclk_deep_sleep_khz = VAR_4->dcfclk_deep_sleep_khz;
  FUNC_7(VAR_3, VAR_0->clks.dcfclk_deep_sleep_khz);
 }

 if (FUNC_9(VAR_2, VAR_4->dppclk_khz, VAR_3->base.clks.dppclk_khz)) {
  if (VAR_3->base.clks.dppclk_khz > VAR_4->dppclk_khz)
   VAR_10 = 1;
  VAR_0->clks.dppclk_khz = VAR_4->dppclk_khz;
  VAR_7 = 1;
 }

 if (FUNC_9(VAR_2, VAR_4->dispclk_khz, VAR_0->clks.dispclk_khz)) {
  VAR_0->clks.dispclk_khz = VAR_4->dispclk_khz;
  FUNC_3(VAR_3, VAR_0->clks.dispclk_khz);

  VAR_8 = 1;
 }

 if (VAR_10) {

  FUNC_2(VAR_3, VAR_1);
  FUNC_5(VAR_3, VAR_0->clks.dppclk_khz);
 } else {

  if (VAR_7 || VAR_8)
   FUNC_5(VAR_3, VAR_0->clks.dppclk_khz);
  if (VAR_7)
   FUNC_2(VAR_3, VAR_1);
 }

 if (VAR_8 &&
   VAR_11 && VAR_11->funcs->is_dmcu_initialized(VAR_11)) {

  VAR_11->funcs->set_psr_wait_loop(VAR_11,
   VAR_0->clks.dispclk_khz / 1000 / 7);
 }
}
