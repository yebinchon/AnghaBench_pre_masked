
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_9__ ;
typedef struct TYPE_33__ TYPE_8__ ;
typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_17__ ;
typedef struct TYPE_24__ TYPE_16__ ;
typedef struct TYPE_23__ TYPE_15__ ;
typedef struct TYPE_22__ TYPE_14__ ;
typedef struct TYPE_21__ TYPE_13__ ;
typedef struct TYPE_20__ TYPE_12__ ;
typedef struct TYPE_19__ TYPE_11__ ;
typedef struct TYPE_18__ TYPE_10__ ;


struct timing_generator {TYPE_9__* funcs; } ;
struct resource_pool {int timing_generator_count; int pipe_count; struct timing_generator** timing_generators; int * mcif_wb; TYPE_2__** dwbc; TYPE_12__* res_cap; TYPE_14__** opps; struct dpp** dpps; struct hubp** hubps; TYPE_15__* mpc; TYPE_16__* dccg; } ;
struct TYPE_30__ {size_t mpcc_inst; struct hubp* hubp; struct dpp* dpp; } ;
struct TYPE_29__ {struct timing_generator* tg; TYPE_14__* opp; } ;
struct pipe_ctx {int pipe_idx; TYPE_5__ plane_res; TYPE_4__ stream_res; } ;
struct hubp {size_t mpcc_id; int power_gated; TYPE_1__* funcs; int opp_id; } ;
struct dpp {size_t inst; TYPE_10__* funcs; } ;
struct dce_hwseq {int dummy; } ;
struct TYPE_28__ {struct pipe_ctx* pipe_ctx; } ;
struct dc_state {TYPE_3__ res_ctx; } ;
struct TYPE_33__ {int (* disable_plane ) (struct dc*,struct pipe_ctx*) ;int (* enable_power_gating_plane ) (struct dce_hwseq*,int) ;} ;
struct dc {struct resource_pool* res_pool; TYPE_8__ hwss; TYPE_17__* clk_mgr; struct dc_state* current_state; struct dce_hwseq* hwseq; } ;
struct TYPE_34__ {int (* tg_init ) (struct timing_generator*) ;int (* unlock ) (struct timing_generator*) ;scalar_t__ (* is_tg_enabled ) (struct timing_generator*) ;int (* lock ) (struct timing_generator*) ;} ;
struct TYPE_32__ {int (* dccg_init ) (TYPE_16__*) ;} ;
struct TYPE_31__ {int (* init_clocks ) (TYPE_17__*) ;} ;
struct TYPE_27__ {int mcif; } ;
struct TYPE_26__ {int (* hubp_init ) (struct hubp*) ;} ;
struct TYPE_25__ {TYPE_6__* funcs; } ;
struct TYPE_24__ {TYPE_7__* funcs; } ;
struct TYPE_23__ {TYPE_11__* funcs; } ;
struct TYPE_21__ {int * opp_list; int opp_id; } ;
struct TYPE_22__ {int* mpcc_disconnect_pending; TYPE_13__ mpc_tree_params; int inst; } ;
struct TYPE_20__ {int num_opp; int num_dwb; } ;
struct TYPE_19__ {int (* mpc_init ) (TYPE_15__*) ;} ;
struct TYPE_18__ {int (* dpp_reset ) (struct dpp*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct dce_hwseq*) ;
 int FUNC_3 (struct dc*,struct timing_generator*) ;
 int FUNC_4 (struct dc*,struct pipe_ctx*) ;
 int FUNC_5 (TYPE_17__*) ;
 scalar_t__ FUNC_6 (struct timing_generator*) ;
 int FUNC_7 (struct timing_generator*) ;
 int FUNC_8 (struct dc*,struct pipe_ctx*) ;
 int FUNC_9 (struct timing_generator*) ;
 int FUNC_10 (TYPE_16__*) ;
 int FUNC_11 (struct dce_hwseq*,int) ;
 scalar_t__ FUNC_12 (struct timing_generator*) ;
 scalar_t__ FUNC_13 (struct timing_generator*) ;
 int FUNC_14 (struct timing_generator*) ;
 int FUNC_15 (struct dpp*) ;
 int FUNC_16 (TYPE_15__*) ;
 int FUNC_17 (struct hubp*) ;

__attribute__((used)) static void FUNC_18(struct dc *VAR_8)
{
 int VAR_9, VAR_10;
 struct dce_hwseq *VAR_11 = VAR_8->hwseq;
 struct resource_pool *VAR_12 = VAR_8->res_pool;
 struct dc_state *VAR_13 = VAR_8->current_state;

 if (VAR_8->clk_mgr && VAR_8->clk_mgr->funcs->init_clocks)
  VAR_8->clk_mgr->funcs->init_clocks(VAR_8->clk_mgr);


 if (VAR_12->dccg->funcs->dccg_init)
  VAR_12->dccg->funcs->dccg_init(VAR_12->dccg);


 VAR_8->hwss.enable_power_gating_plane(VAR_11, 1);


 FUNC_1(VAR_5, 0xFFFFFFFF);
 FUNC_1(VAR_6, 0xFFFFFFFF);

 FUNC_2(VAR_11);

 FUNC_0(VAR_0, VAR_2, 2);
 FUNC_0(VAR_0, VAR_1, 1);
 FUNC_1(VAR_7, 0);




 for (VAR_9 = 0; VAR_9 < VAR_8->res_pool->timing_generator_count; VAR_9++) {
  struct timing_generator *VAR_14 = VAR_8->res_pool->timing_generators[VAR_9];

  if (VAR_14->funcs->is_tg_enabled(VAR_14))
   FUNC_3(VAR_8, VAR_14);
 }

 for (VAR_9 = 0; VAR_9 < VAR_12->timing_generator_count; VAR_9++) {
  struct timing_generator *VAR_15 = VAR_8->res_pool->timing_generators[VAR_9];

  if (VAR_15->funcs->is_tg_enabled(VAR_15))
   VAR_15->funcs->lock(VAR_15);
 }

 for (VAR_9 = 0; VAR_9 < VAR_8->res_pool->pipe_count; VAR_9++) {
  struct dpp *VAR_16 = VAR_12->dpps[VAR_9];

  VAR_16->funcs->dpp_reset(VAR_16);
 }


 VAR_12->mpc->funcs->mpc_init(VAR_12->mpc);


 for (VAR_9 = 0; VAR_9 < VAR_8->res_pool->res_cap->num_opp; VAR_9++) {
  VAR_12->opps[VAR_9]->mpc_tree_params.opp_id = VAR_12->opps[VAR_9]->inst;
  VAR_12->opps[VAR_9]->mpc_tree_params.opp_list = ((void*)0);
  for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++)
   VAR_12->opps[VAR_9]->mpcc_disconnect_pending[VAR_10] = 0;
 }

 for (VAR_9 = 0; VAR_9 < VAR_8->res_pool->pipe_count; VAR_9++) {
  struct timing_generator *VAR_17 = VAR_8->res_pool->timing_generators[VAR_9];
  struct pipe_ctx *VAR_18 = &VAR_13->res_ctx.pipe_ctx[VAR_9];
  struct hubp *VAR_19 = VAR_8->res_pool->hubps[VAR_9];
  struct dpp *VAR_20 = VAR_8->res_pool->dpps[VAR_9];

  VAR_18->stream_res.tg = VAR_17;
  VAR_18->pipe_idx = VAR_9;

  VAR_18->plane_res.hubp = VAR_19;
  VAR_18->plane_res.dpp = VAR_20;
  VAR_18->plane_res.mpcc_inst = VAR_20->inst;
  VAR_19->mpcc_id = VAR_20->inst;
  VAR_19->opp_id = VAR_4;
  VAR_19->power_gated = 0;
  VAR_18->stream_res.opp = ((void*)0);

  VAR_19->funcs->hubp_init(VAR_19);



  VAR_8->res_pool->opps[VAR_9]->mpcc_disconnect_pending[VAR_18->plane_res.mpcc_inst] = 1;
  VAR_18->stream_res.opp = VAR_8->res_pool->opps[VAR_9];

  FUNC_4(VAR_8, VAR_18);
 }


 for (VAR_9 = 0; VAR_9 < VAR_12->res_cap->num_dwb; VAR_9++)
  VAR_12->dwbc[VAR_9]->mcif = VAR_12->mcif_wb[VAR_9];

 for (VAR_9 = 0; VAR_9 < VAR_8->res_pool->timing_generator_count; VAR_9++) {
  struct timing_generator *VAR_21 = VAR_8->res_pool->timing_generators[VAR_9];

  if (VAR_21->funcs->is_tg_enabled(VAR_21))
   VAR_21->funcs->unlock(VAR_21);
 }

 for (VAR_9 = 0; VAR_9 < VAR_8->res_pool->pipe_count; VAR_9++) {
  struct pipe_ctx *VAR_22 = &VAR_13->res_ctx.pipe_ctx[VAR_9];

  VAR_8->hwss.disable_plane(VAR_8, VAR_22);

  VAR_22->stream_res.tg = ((void*)0);
  VAR_22->plane_res.hubp = ((void*)0);
 }

 for (VAR_9 = 0; VAR_9 < VAR_8->res_pool->timing_generator_count; VAR_9++) {
  struct timing_generator *VAR_23 = VAR_8->res_pool->timing_generators[VAR_9];

  VAR_23->funcs->tg_init(VAR_23);
 }
}
