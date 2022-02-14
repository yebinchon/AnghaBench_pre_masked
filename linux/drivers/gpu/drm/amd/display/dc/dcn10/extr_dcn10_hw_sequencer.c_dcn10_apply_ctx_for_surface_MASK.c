
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


typedef int uint32_t ;
struct timing_generator {TYPE_8__* funcs; } ;
struct TYPE_18__ {TYPE_17__* hubp; } ;
struct TYPE_30__ {struct timing_generator* tg; } ;
struct pipe_ctx {int ttu_regs; int dlg_regs; TYPE_10__ plane_res; TYPE_7__* plane_state; struct dc_stream_state const* stream; int pipe_idx; TYPE_5__ stream_res; } ;
struct dc_stream_state {scalar_t__ num_wb_info; } ;
struct TYPE_31__ {struct pipe_ctx* pipe_ctx; } ;
struct dc_state {TYPE_6__ res_ctx; } ;
struct TYPE_21__ {int (* optimize_bandwidth ) (struct dc*,struct dc_state*) ;int (* disable_plane ) (struct dc*,struct pipe_ctx*) ;int (* program_all_writeback_pipes_in_tree ) (struct dc*,struct dc_stream_state const*,struct dc_state*) ;int (* plane_atomic_disconnect ) (struct dc*,struct pipe_ctx*) ;int (* blank_pixel_data ) (struct dc*,struct pipe_ctx*,int) ;int (* did_underflow_occur ) (struct dc*,struct pipe_ctx*) ;} ;
struct TYPE_29__ {int underflow_assert_delay_us; } ;
struct dc {TYPE_16__* res_pool; TYPE_15__* hwseq; TYPE_13__ hwss; TYPE_12__* current_state; TYPE_4__ debug; TYPE_1__* ctx; } ;
struct TYPE_34__ {int (* hubp_setup_interdependent ) (TYPE_17__*,int *,int *) ;} ;
struct TYPE_33__ {int (* is_tg_enabled ) (struct timing_generator*) ;} ;
struct TYPE_27__ {scalar_t__ full_update; } ;
struct TYPE_28__ {TYPE_2__ bits; } ;
struct TYPE_32__ {TYPE_3__ update_flags; } ;
struct TYPE_26__ {int logger; } ;
struct TYPE_25__ {scalar_t__ opp_id; TYPE_9__* funcs; } ;
struct TYPE_24__ {int pipe_count; int hubbub; } ;
struct TYPE_22__ {scalar_t__ DEGVIDCN10_254; } ;
struct TYPE_23__ {TYPE_14__ wa; } ;
struct TYPE_19__ {struct pipe_ctx* pipe_ctx; } ;
struct TYPE_20__ {TYPE_11__ res_ctx; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (struct dc*,struct pipe_ctx*,int) ;
 int FUNC_4 (struct dc*,struct dc_stream_state const*,struct timing_generator*) ;
 struct pipe_ctx* FUNC_5 (struct dc*,struct dc_state*,struct dc_stream_state const*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct dc*,struct dc_state*,int) ;
 int FUNC_8 (struct dc*,struct pipe_ctx*,struct dc_state*) ;
 int FUNC_9 (struct dc*,struct pipe_ctx*) ;
 int FUNC_10 (struct dc*,struct dc_state*) ;
 int FUNC_11 (struct dc*,struct pipe_ctx*) ;
 int FUNC_12 (struct dc*,struct pipe_ctx*,int) ;
 int FUNC_13 (struct dc*,struct pipe_ctx*) ;
 int FUNC_14 (struct dc*,struct pipe_ctx*) ;
 int FUNC_15 (struct dc*,struct dc_stream_state const*,struct dc_state*) ;
 int FUNC_16 (struct timing_generator*) ;
 int FUNC_17 (TYPE_17__*,int *,int *) ;
 int FUNC_18 (struct dc*,struct pipe_ctx*) ;
 int FUNC_19 (int) ;

__attribute__((used)) static void FUNC_20(
  struct dc *VAR_1,
  const struct dc_stream_state *VAR_2,
  int VAR_3,
  struct dc_state *VAR_4)
{
 int VAR_5;
 struct timing_generator *VAR_6;
 uint32_t VAR_7;
 bool VAR_8[4] = { 0 };
 bool VAR_9 = 0;
 struct pipe_ctx *VAR_10 =
   FUNC_5(VAR_1, VAR_4, VAR_2);
 FUNC_1(VAR_1->ctx->logger);

 if (!VAR_10)
  return;

 VAR_6 = VAR_10->stream_res.tg;

 VAR_9 = VAR_10->plane_state &&
  VAR_10->plane_state->update_flags.bits.full_update;

 VAR_7 = VAR_1->debug.underflow_assert_delay_us;

 if (VAR_7 != 0xFFFFFFFF && VAR_1->hwss.did_underflow_occur)
  FUNC_0(VAR_1->hwss.did_underflow_occur(VAR_1, VAR_10));

 if (VAR_9)
  FUNC_7(VAR_1, VAR_4, 1);
 else
  FUNC_3(VAR_1, VAR_10, 1);

 if (VAR_7 != 0xFFFFFFFF)
  FUNC_19(VAR_7);

 if (VAR_7 != 0xFFFFFFFF && VAR_1->hwss.did_underflow_occur)
  FUNC_0(VAR_1->hwss.did_underflow_occur(VAR_1, VAR_10));

 if (VAR_3 == 0) {

  VAR_1->hwss.blank_pixel_data(VAR_1, VAR_10, 1);
 }


 for (VAR_5 = 0; VAR_5 < VAR_1->res_pool->pipe_count; VAR_5++) {
  struct pipe_ctx *VAR_11 = &VAR_4->res_ctx.pipe_ctx[VAR_5];
  struct pipe_ctx *VAR_12 =
    &VAR_1->current_state->res_ctx.pipe_ctx[VAR_5];






  if (VAR_11->plane_state && !VAR_12->plane_state) {
   if (VAR_12->stream_res.tg == VAR_6 &&
       VAR_12->plane_res.hubp &&
       VAR_12->plane_res.hubp->opp_id != VAR_0)
    VAR_1->hwss.disable_plane(VAR_1, VAR_12);
  }

  if ((!VAR_11->plane_state ||
       VAR_11->stream_res.tg != VAR_12->stream_res.tg) &&
      VAR_12->plane_state &&
      VAR_12->stream_res.tg == VAR_6) {

   VAR_1->hwss.plane_atomic_disconnect(VAR_1, VAR_12);
   VAR_8[VAR_5] = 1;

   FUNC_2("Reset mpcc for pipe %d\n",
     VAR_12->pipe_idx);
  }
 }

 if (VAR_3 > 0)
  FUNC_8(VAR_1, VAR_10, VAR_4);






 if (VAR_9)
  for (VAR_5 = 0; VAR_5 < VAR_1->res_pool->pipe_count; VAR_5++) {
   struct pipe_ctx *VAR_13 = &VAR_4->res_ctx.pipe_ctx[VAR_5];

   if (!VAR_13->stream || VAR_13->stream == VAR_2 ||
       !VAR_13->plane_state || !VAR_6->funcs->is_tg_enabled(VAR_6))
    continue;

   VAR_13->plane_res.hubp->funcs->hubp_setup_interdependent(
    VAR_13->plane_res.hubp,
    &VAR_13->dlg_regs,
    &VAR_13->ttu_regs);
  }

 if (VAR_9)
  FUNC_7(VAR_1, VAR_4, 0);
 else
  FUNC_3(VAR_1, VAR_10, 0);

 if (VAR_3 == 0)
  FUNC_4(VAR_1, VAR_2, VAR_6);

 for (VAR_5 = 0; VAR_5 < VAR_1->res_pool->pipe_count; VAR_5++)
  if (VAR_8[VAR_5])
   VAR_1->hwss.disable_plane(VAR_1, &VAR_1->current_state->res_ctx.pipe_ctx[VAR_5]);

 for (VAR_5 = 0; VAR_5 < VAR_1->res_pool->pipe_count; VAR_5++)
  if (VAR_8[VAR_5]) {
   VAR_1->hwss.optimize_bandwidth(VAR_1, VAR_4);
   break;
  }

 if (VAR_1->hwseq->wa.DEGVIDCN10_254)
  FUNC_6(VAR_1->res_pool->hubbub);
}
