
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_14__ ;
typedef struct TYPE_18__ TYPE_13__ ;
typedef struct TYPE_17__ TYPE_12__ ;
typedef struct TYPE_16__ TYPE_11__ ;
typedef struct TYPE_15__ TYPE_10__ ;


struct timing_generator {TYPE_13__* funcs; } ;
struct TYPE_27__ {size_t mpcc_inst; struct hubp* hubp; struct dpp* dpp; } ;
struct TYPE_28__ {struct timing_generator* tg; TYPE_10__* opp; } ;
struct pipe_ctx {int pipe_idx; TYPE_8__ plane_res; TYPE_9__ stream_res; int * stream; } ;
struct hubp {size_t mpcc_id; int power_gated; int opp_id; } ;
struct dpp {size_t inst; TYPE_6__* funcs; } ;
struct TYPE_22__ {struct pipe_ctx* pipe_ctx; } ;
struct dc_state {int stream_count; TYPE_3__ res_ctx; TYPE_1__** streams; } ;
struct TYPE_17__ {int (* disable_plane ) (struct dc*,struct pipe_ctx*) ;int (* plane_atomic_disconnect ) (struct dc*,struct pipe_ctx*) ;int (* init_blank ) (struct dc*,struct timing_generator*) ;} ;
struct dc {TYPE_12__ hwss; TYPE_11__* res_pool; TYPE_5__* current_state; } ;
struct TYPE_26__ {int * opp_list; int opp_id; } ;
struct TYPE_25__ {int (* dpp_reset ) (struct dpp*) ;} ;
struct TYPE_23__ {struct pipe_ctx* pipe_ctx; } ;
struct TYPE_24__ {TYPE_4__ res_ctx; } ;
struct TYPE_21__ {int (* mpc_init_single_inst ) (TYPE_14__*,int) ;} ;
struct TYPE_20__ {scalar_t__ apply_seamless_boot_optimization; } ;
struct TYPE_19__ {TYPE_2__* funcs; } ;
struct TYPE_18__ {int (* tg_init ) (struct timing_generator*) ;int (* unlock ) (struct timing_generator*) ;scalar_t__ (* is_tg_enabled ) (struct timing_generator*) ;int (* set_blank ) (struct timing_generator*,int) ;int (* lock ) (struct timing_generator*) ;} ;
struct TYPE_16__ {int pipe_count; TYPE_10__** opps; struct dpp** dpps; struct hubp** hubps; struct timing_generator** timing_generators; TYPE_14__* mpc; } ;
struct TYPE_15__ {int* mpcc_disconnect_pending; TYPE_7__ mpc_tree_params; int inst; } ;


 int VAR_0 ;
 int FUNC_0 (struct timing_generator*) ;
 scalar_t__ FUNC_1 (struct timing_generator*) ;
 scalar_t__ FUNC_2 (struct timing_generator*) ;
 int FUNC_3 (struct timing_generator*) ;
 int FUNC_4 (struct dc*,struct pipe_ctx*) ;
 int FUNC_5 (struct timing_generator*) ;
 int FUNC_6 (struct dc*,struct timing_generator*) ;
 int FUNC_7 (struct timing_generator*) ;
 int FUNC_8 (struct timing_generator*) ;
 int FUNC_9 (struct timing_generator*,int) ;
 int FUNC_10 (TYPE_14__*,int) ;
 scalar_t__ FUNC_11 (struct timing_generator*) ;
 int FUNC_12 (struct dpp*) ;
 int FUNC_13 (struct dc*,struct pipe_ctx*) ;

__attribute__((used)) static void FUNC_14(struct dc *VAR_1, struct dc_state *VAR_2)
{
 int VAR_3;
 bool VAR_4 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_2->stream_count; VAR_3++) {
  if (VAR_2->streams[VAR_3]->apply_seamless_boot_optimization) {
   VAR_4 = 1;
   break;
  }
 }

 for (VAR_3 = 0; VAR_3 < VAR_1->res_pool->pipe_count; VAR_3++) {
  struct timing_generator *VAR_5 = VAR_1->res_pool->timing_generators[VAR_3];
  struct pipe_ctx *VAR_6 = &VAR_2->res_ctx.pipe_ctx[VAR_3];





  if (VAR_6->stream != ((void*)0) && VAR_4)
   continue;




  if (VAR_5->funcs->is_tg_enabled(VAR_5)) {
   if (VAR_1->hwss.init_blank != ((void*)0)) {
    VAR_1->hwss.init_blank(VAR_1, VAR_5);
    VAR_5->funcs->lock(VAR_5);
   } else {
    VAR_5->funcs->lock(VAR_5);
    VAR_5->funcs->set_blank(VAR_5, 1);
    FUNC_0(VAR_5);
   }
  }
 }

 for (VAR_3 = 0; VAR_3 < VAR_1->res_pool->pipe_count; VAR_3++) {
  struct pipe_ctx *VAR_7 = &VAR_2->res_ctx.pipe_ctx[VAR_3];


  if (VAR_7->stream != ((void*)0) && VAR_4)
   continue;

  VAR_1->res_pool->mpc->funcs->mpc_init_single_inst(
    VAR_1->res_pool->mpc, VAR_3);
 }

 for (VAR_3 = 0; VAR_3 < VAR_1->res_pool->pipe_count; VAR_3++) {
  struct timing_generator *VAR_8 = VAR_1->res_pool->timing_generators[VAR_3];
  struct hubp *VAR_9 = VAR_1->res_pool->hubps[VAR_3];
  struct dpp *VAR_10 = VAR_1->res_pool->dpps[VAR_3];
  struct pipe_ctx *VAR_11 = &VAR_2->res_ctx.pipe_ctx[VAR_3];





  if (VAR_4 &&
   VAR_11->stream != ((void*)0) &&
   VAR_11->stream_res.tg->funcs->is_tg_enabled(
    VAR_11->stream_res.tg))
   continue;


  VAR_11 = &VAR_1->current_state->res_ctx.pipe_ctx[VAR_3];

  VAR_10->funcs->dpp_reset(VAR_10);

  VAR_11->stream_res.tg = VAR_8;
  VAR_11->pipe_idx = VAR_3;

  VAR_11->plane_res.hubp = VAR_9;
  VAR_11->plane_res.dpp = VAR_10;
  VAR_11->plane_res.mpcc_inst = VAR_10->inst;
  VAR_9->mpcc_id = VAR_10->inst;
  VAR_9->opp_id = VAR_0;
  VAR_9->power_gated = 0;

  VAR_1->res_pool->opps[VAR_3]->mpc_tree_params.opp_id = VAR_1->res_pool->opps[VAR_3]->inst;
  VAR_1->res_pool->opps[VAR_3]->mpc_tree_params.opp_list = ((void*)0);
  VAR_1->res_pool->opps[VAR_3]->mpcc_disconnect_pending[VAR_11->plane_res.mpcc_inst] = 1;
  VAR_11->stream_res.opp = VAR_1->res_pool->opps[VAR_3];

  VAR_1->hwss.plane_atomic_disconnect(VAR_1, VAR_11);

  if (VAR_8->funcs->is_tg_enabled(VAR_8))
   VAR_8->funcs->unlock(VAR_8);

  VAR_1->hwss.disable_plane(VAR_1, VAR_11);

  VAR_11->stream_res.tg = ((void*)0);
  VAR_11->plane_res.hubp = ((void*)0);

  VAR_8->funcs->tg_init(VAR_8);
 }
}
