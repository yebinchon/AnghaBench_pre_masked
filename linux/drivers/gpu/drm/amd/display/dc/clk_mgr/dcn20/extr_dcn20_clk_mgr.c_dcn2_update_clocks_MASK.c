
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_45__ TYPE_9__ ;
typedef struct TYPE_44__ TYPE_8__ ;
typedef struct TYPE_43__ TYPE_7__ ;
typedef struct TYPE_42__ TYPE_6__ ;
typedef struct TYPE_41__ TYPE_5__ ;
typedef struct TYPE_40__ TYPE_4__ ;
typedef struct TYPE_39__ TYPE_3__ ;
typedef struct TYPE_38__ TYPE_2__ ;
typedef struct TYPE_37__ TYPE_22__ ;
typedef struct TYPE_36__ TYPE_21__ ;
typedef struct TYPE_35__ TYPE_20__ ;
typedef struct TYPE_34__ TYPE_1__ ;
typedef struct TYPE_33__ TYPE_19__ ;
typedef struct TYPE_32__ TYPE_18__ ;
typedef struct TYPE_31__ TYPE_17__ ;
typedef struct TYPE_30__ TYPE_16__ ;
typedef struct TYPE_29__ TYPE_15__ ;
typedef struct TYPE_28__ TYPE_14__ ;
typedef struct TYPE_27__ TYPE_13__ ;
typedef struct TYPE_26__ TYPE_12__ ;
typedef struct TYPE_25__ TYPE_11__ ;
typedef struct TYPE_24__ TYPE_10__ ;


struct pp_smu_funcs_nv {int pp_smu; int (* set_hard_min_uclk_by_freq ) (int *,int) ;int (* set_pstate_handshake_support ) (int *,int ) ;int (* set_hard_min_socclk_by_freq ) (int *,int) ;int (* set_min_deep_sleep_dcfclk ) (int *,int) ;int (* set_hard_min_dcfclk_by_freq ) (int *,int) ;int (* set_voltage_by_freq ) (int *,int ,int) ;int (* set_display_count ) (int *,int) ;} ;
struct dmcu {TYPE_12__* funcs; } ;
struct TYPE_24__ {TYPE_9__* pipe_ctx; } ;
struct dc_clocks {int phyclk_khz; int dcfclk_khz; int dcfclk_deep_sleep_khz; int socclk_khz; int dramclk_khz; int dispclk_khz; scalar_t__ dppclk_khz; int p_state_change_support; } ;
struct TYPE_27__ {struct dc_clocks clk; } ;
struct TYPE_28__ {TYPE_13__ dcn; } ;
struct TYPE_29__ {TYPE_14__ bw; } ;
struct dc_state {TYPE_10__ res_ctx; TYPE_15__ bw_ctx; } ;
struct TYPE_34__ {int forced_clocks; } ;
struct TYPE_35__ {int force_clock_mode; int force_min_dcfclk_mhz; } ;
struct TYPE_31__ {scalar_t__ skip_clock_update; } ;
struct dc {TYPE_1__ config; TYPE_20__ debug; TYPE_19__* res_pool; TYPE_17__ work_arounds; } ;
struct TYPE_41__ {TYPE_4__* ctx; } ;
struct clk_mgr_internal {TYPE_22__* dccg; TYPE_5__ base; } ;
struct TYPE_36__ {int dispclk_khz; int phyclk_khz; int dcfclk_khz; int dcfclk_deep_sleep_khz; int socclk_khz; int dramclk_khz; scalar_t__ dppclk_khz; int p_state_change_support; int prev_p_state_change_support; } ;
struct clk_mgr {TYPE_21__ clks; TYPE_16__* ctx; } ;
struct TYPE_43__ {int dppclk_khz; } ;
struct TYPE_44__ {TYPE_7__ bw; TYPE_6__* dpp; } ;
struct TYPE_45__ {TYPE_8__ plane_res; int plane_state; } ;
struct TYPE_42__ {int inst; } ;
struct TYPE_40__ {TYPE_3__* dc; } ;
struct TYPE_39__ {TYPE_2__* res_pool; } ;
struct TYPE_38__ {int pipe_count; } ;
struct TYPE_37__ {TYPE_11__* funcs; } ;
struct TYPE_33__ {TYPE_18__* pp_smu; struct dmcu* dmcu; } ;
struct TYPE_32__ {struct pp_smu_funcs_nv nv_funcs; } ;
struct TYPE_30__ {struct dc* dc; } ;
struct TYPE_26__ {int (* set_psr_wait_loop ) (struct dmcu*,int) ;scalar_t__ (* is_dmcu_initialized ) (struct dmcu*) ;} ;
struct TYPE_25__ {int (* update_dpp_dto ) (TYPE_22__*,int,int,int) ;} ;


 int VAR_0 ;
 struct clk_mgr_internal* FUNC_0 (struct clk_mgr*) ;
 int FUNC_1 (struct dc*,struct dc_state*) ;
 int FUNC_2 (struct clk_mgr*,int) ;
 int FUNC_3 (struct clk_mgr*,scalar_t__) ;
 scalar_t__ FUNC_4 (int,int,int) ;
 scalar_t__ FUNC_5 (int,int ,int ) ;
 int FUNC_6 (int *,int) ;
 scalar_t__ FUNC_7 (struct dmcu*) ;
 int FUNC_8 (struct dmcu*,int) ;
 int FUNC_9 (int *,int ,int) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *,int) ;
 int FUNC_15 (TYPE_22__*,int,int,int) ;
 int FUNC_16 (TYPE_22__*,int,int,int) ;

void FUNC_17(struct clk_mgr *VAR_1,
   struct dc_state *VAR_2,
   bool VAR_3)
{
 struct clk_mgr_internal *VAR_4 = FUNC_0(VAR_1);
 struct dc_clocks *VAR_5 = &VAR_2->bw_ctx.bw.dcn.clk;
 struct dc *VAR_6 = VAR_1->ctx->dc;
 struct pp_smu_funcs_nv *VAR_7 = ((void*)0);
 int VAR_8;
 bool VAR_9 = 0;
 bool VAR_10 = 0;
 struct dmcu *VAR_11 = VAR_1->ctx->dc->res_pool->dmcu;
 bool VAR_12 = 0;
 int VAR_13;

 if (VAR_6->work_arounds.skip_clock_update)
  return;

 if (VAR_1->clks.dispclk_khz == 0 ||
  VAR_6->debug.force_clock_mode & 0x1) {

  VAR_12 = 1;

 }
 VAR_8 = FUNC_1(VAR_6, VAR_2);
 if (VAR_6->res_pool->pp_smu)
  VAR_7 = &VAR_6->res_pool->pp_smu->nv_funcs;

 if (VAR_8 == 0)
  VAR_10 = 1;

 if (VAR_10 == VAR_3) {
  if (VAR_7 && VAR_7->set_display_count)
   VAR_7->set_display_count(&VAR_7->pp_smu, VAR_8);
 }

 if (FUNC_4(VAR_3, VAR_5->phyclk_khz, VAR_1->clks.phyclk_khz)) {
  VAR_1->clks.phyclk_khz = VAR_5->phyclk_khz;
  if (VAR_7 && VAR_7->set_voltage_by_freq)
   VAR_7->set_voltage_by_freq(&VAR_7->pp_smu, VAR_0, VAR_1->clks.phyclk_khz / 1000);
 }


 if (VAR_6->debug.force_min_dcfclk_mhz > 0)
  VAR_5->dcfclk_khz = (VAR_5->dcfclk_khz > (VAR_6->debug.force_min_dcfclk_mhz * 1000)) ?
    VAR_5->dcfclk_khz : (VAR_6->debug.force_min_dcfclk_mhz * 1000);

 if (FUNC_4(VAR_3, VAR_5->dcfclk_khz, VAR_1->clks.dcfclk_khz)) {
  VAR_1->clks.dcfclk_khz = VAR_5->dcfclk_khz;
  if (VAR_7 && VAR_7->set_hard_min_dcfclk_by_freq)
   VAR_7->set_hard_min_dcfclk_by_freq(&VAR_7->pp_smu, VAR_1->clks.dcfclk_khz / 1000);
 }

 if (FUNC_4(VAR_3,
   VAR_5->dcfclk_deep_sleep_khz, VAR_1->clks.dcfclk_deep_sleep_khz)) {
  VAR_1->clks.dcfclk_deep_sleep_khz = VAR_5->dcfclk_deep_sleep_khz;
  if (VAR_7 && VAR_7->set_min_deep_sleep_dcfclk)
   VAR_7->set_min_deep_sleep_dcfclk(&VAR_7->pp_smu, VAR_1->clks.dcfclk_deep_sleep_khz / 1000);
 }

 if (FUNC_4(VAR_3, VAR_5->socclk_khz, VAR_1->clks.socclk_khz)) {
  VAR_1->clks.socclk_khz = VAR_5->socclk_khz;
  if (VAR_7 && VAR_7->set_hard_min_socclk_by_freq)
   VAR_7->set_hard_min_socclk_by_freq(&VAR_7->pp_smu, VAR_1->clks.socclk_khz / 1000);
 }

 if (FUNC_5(VAR_3, VAR_5->p_state_change_support, VAR_1->clks.p_state_change_support)) {
  VAR_1->clks.prev_p_state_change_support = VAR_1->clks.p_state_change_support;

  VAR_1->clks.p_state_change_support = VAR_5->p_state_change_support;
  if (VAR_7 && VAR_7->set_pstate_handshake_support)
   VAR_7->set_pstate_handshake_support(&VAR_7->pp_smu, VAR_1->clks.p_state_change_support);
 }
 VAR_1->clks.prev_p_state_change_support = VAR_1->clks.p_state_change_support;

 if (FUNC_4(VAR_3, VAR_5->dramclk_khz, VAR_1->clks.dramclk_khz)) {
  VAR_1->clks.dramclk_khz = VAR_5->dramclk_khz;
  if (VAR_7 && VAR_7->set_hard_min_uclk_by_freq)
   VAR_7->set_hard_min_uclk_by_freq(&VAR_7->pp_smu, VAR_1->clks.dramclk_khz / 1000);
 }

 if (VAR_6->config.forced_clocks == 0) {

  if (FUNC_4(VAR_3, VAR_5->dispclk_khz, VAR_1->clks.dispclk_khz))
   FUNC_2(VAR_1, VAR_5->dispclk_khz);


  if (!VAR_3) {



   if (VAR_5->dppclk_khz > VAR_1->clks.dppclk_khz)
    FUNC_3(VAR_1, VAR_5->dppclk_khz);


   for (VAR_13 = 0; VAR_13 < VAR_4->base.ctx->dc->res_pool->pipe_count; VAR_13++) {
    int VAR_14, VAR_15;

    if (!VAR_2->res_ctx.pipe_ctx[VAR_13].plane_state)
     continue;

    VAR_14 = VAR_2->res_ctx.pipe_ctx[VAR_13].plane_res.dpp->inst;
    VAR_15 = VAR_2->res_ctx.pipe_ctx[VAR_13].plane_res.bw.dppclk_khz;

    VAR_4->dccg->funcs->update_dpp_dto(VAR_4->dccg, VAR_14, VAR_15, 1);
   }
  } else {


   if (VAR_5->dppclk_khz < VAR_1->clks.dppclk_khz)
    FUNC_3(VAR_1, VAR_5->dppclk_khz);

   for (VAR_13 = 0; VAR_13 < VAR_4->base.ctx->dc->res_pool->pipe_count; VAR_13++) {
    int VAR_16, VAR_17;

    if (!VAR_2->res_ctx.pipe_ctx[VAR_13].plane_state)
     continue;

    VAR_16 = VAR_2->res_ctx.pipe_ctx[VAR_13].plane_res.dpp->inst;
    VAR_17 = VAR_2->res_ctx.pipe_ctx[VAR_13].plane_res.bw.dppclk_khz;

    VAR_4->dccg->funcs->update_dpp_dto(VAR_4->dccg, VAR_16, VAR_17, 0);
   }
  }
 }
 if (VAR_9 &&
   VAR_11 && VAR_11->funcs->is_dmcu_initialized(VAR_11)) {

  VAR_11->funcs->set_psr_wait_loop(VAR_11,
   VAR_1->clks.dispclk_khz / 1000 / 7);
 }
}
