
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_12__ ;
typedef struct TYPE_15__ TYPE_11__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct timing_generator {TYPE_6__* funcs; } ;
struct TYPE_23__ {TYPE_12__* hubp; } ;
struct TYPE_20__ {struct timing_generator* tg; int gsl_group; } ;
struct pipe_ctx {TYPE_7__ plane_res; TYPE_10__* plane_state; int ttu_regs; int dlg_regs; struct dc_stream_state const* stream; int pipe_idx; TYPE_4__ stream_res; } ;
struct dc_stream_state {scalar_t__ num_wb_info; } ;
struct TYPE_25__ {struct pipe_ctx* pipe_ctx; } ;
struct dc_state {TYPE_9__ res_ctx; } ;
struct TYPE_21__ {int (* program_all_writeback_pipes_in_tree ) (struct dc*,struct dc_stream_state const*,struct dc_state*) ;int (* plane_atomic_disconnect ) (struct dc*,struct pipe_ctx*) ;int (* disable_plane ) (struct dc*,struct pipe_ctx*) ;int (* blank_pixel_data ) (struct dc*,struct pipe_ctx*,int) ;} ;
struct dc {struct dc_state* current_state; TYPE_8__* res_pool; TYPE_5__ hwss; TYPE_1__* ctx; } ;
struct TYPE_24__ {int pipe_count; } ;
struct TYPE_22__ {int (* is_tg_enabled ) (struct timing_generator*) ;} ;
struct TYPE_18__ {scalar_t__ full_update; } ;
struct TYPE_19__ {TYPE_2__ bits; } ;
struct TYPE_17__ {int logger; } ;
struct TYPE_16__ {scalar_t__ opp_id; TYPE_11__* funcs; } ;
struct TYPE_15__ {scalar_t__ (* hubp_is_flip_pending ) (TYPE_12__*) ;int (* hubp_setup_interdependent ) (TYPE_12__*,int *,int *) ;} ;
struct TYPE_14__ {TYPE_3__ update_flags; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct dc*,struct pipe_ctx*) ;
 int FUNC_3 (struct dc*,struct pipe_ctx*,int) ;
 int FUNC_4 (struct dc*,struct pipe_ctx*,struct dc_state*) ;
 struct pipe_ctx* FUNC_5 (struct dc*,struct dc_state*,struct dc_stream_state const*) ;
 int FUNC_6 (struct dc*,struct dc_state*,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct dc*,struct pipe_ctx*,int) ;
 int FUNC_9 (struct dc*,struct pipe_ctx*) ;
 int FUNC_10 (struct dc*,struct pipe_ctx*) ;
 int FUNC_11 (struct dc*,struct dc_stream_state const*,struct dc_state*) ;
 int FUNC_12 (struct timing_generator*) ;
 int FUNC_13 (TYPE_12__*,int *,int *) ;
 scalar_t__ FUNC_14 (TYPE_12__*) ;

__attribute__((used)) static void FUNC_15(
  struct dc *VAR_1,
  const struct dc_stream_state *VAR_2,
  int VAR_3,
  struct dc_state *VAR_4)
{
 const unsigned int VAR_5 = 100;
 int VAR_6;
 struct timing_generator *VAR_7;
 bool VAR_8[6] = { 0 };
 bool VAR_9 = 0;
 struct pipe_ctx *VAR_10 =
   FUNC_5(VAR_1, VAR_4, VAR_2);
 struct pipe_ctx *VAR_11 =
   FUNC_5(VAR_1, VAR_1->current_state, VAR_2);
 FUNC_0(VAR_1->ctx->logger);

 if (!VAR_10)
  return;


 for (VAR_6 = 0; VAR_6 < VAR_1->res_pool->pipe_count; VAR_6++) {
  struct pipe_ctx *VAR_12 = &VAR_4->res_ctx.pipe_ctx[VAR_6];
  struct pipe_ctx *VAR_13 =
   &VAR_1->current_state->res_ctx.pipe_ctx[VAR_6];

  if (VAR_12->stream == VAR_2 &&
      VAR_12->stream == VAR_13->stream)
   VAR_12->stream_res.gsl_group =
    VAR_13->stream_res.gsl_group;
 }

 VAR_7 = VAR_10->stream_res.tg;

 VAR_9 = VAR_10->plane_state &&
  VAR_10->plane_state->update_flags.bits.full_update;

 if (VAR_9)
  FUNC_6(VAR_1, VAR_4, 1);
 else
  FUNC_3(VAR_1, VAR_10, 1);

 if (VAR_3 == 0) {

  VAR_1->hwss.blank_pixel_data(VAR_1, VAR_10, 1);
 }


 for (VAR_6 = 0; VAR_6 < VAR_1->res_pool->pipe_count; VAR_6++) {
  struct pipe_ctx *VAR_14 = &VAR_4->res_ctx.pipe_ctx[VAR_6];
  struct pipe_ctx *VAR_15 =
    &VAR_1->current_state->res_ctx.pipe_ctx[VAR_6];






  if (VAR_14->plane_state && !VAR_15->plane_state) {
   if (VAR_15->stream_res.tg == VAR_7 &&
       VAR_15->plane_res.hubp &&
       VAR_15->plane_res.hubp->opp_id != VAR_0)
    VAR_1->hwss.disable_plane(VAR_1, VAR_15);
  }

  if ((!VAR_14->plane_state ||
       VAR_14->stream_res.tg != VAR_15->stream_res.tg) &&
       VAR_15->plane_state &&
       VAR_15->stream_res.tg == VAR_7) {

   VAR_1->hwss.plane_atomic_disconnect(VAR_1, VAR_15);
   VAR_8[VAR_6] = 1;

   FUNC_1("Reset mpcc for pipe %d\n",
     VAR_15->pipe_idx);
  }
 }

 if (VAR_3 > 0)
  FUNC_4(VAR_1, VAR_10, VAR_4);


 if ((VAR_2->num_wb_info > 0) && (VAR_1->hwss.program_all_writeback_pipes_in_tree))
  VAR_1->hwss.program_all_writeback_pipes_in_tree(VAR_1, VAR_2, VAR_4);

 if (VAR_9)
  for (VAR_6 = 0; VAR_6 < VAR_1->res_pool->pipe_count; VAR_6++) {
   struct pipe_ctx *VAR_16 = &VAR_4->res_ctx.pipe_ctx[VAR_6];


   if (!VAR_16->stream || VAR_16->stream == VAR_2 ||
       !VAR_16->plane_state || !VAR_7->funcs->is_tg_enabled(VAR_7))
    continue;

   VAR_16->plane_res.hubp->funcs->hubp_setup_interdependent(
    VAR_16->plane_res.hubp,
    &VAR_16->dlg_regs,
    &VAR_16->ttu_regs);
  }

 if (VAR_9)
  FUNC_6(VAR_1, VAR_4, 0);
 else
  FUNC_3(VAR_1, VAR_10, 0);

 for (VAR_6 = 0; VAR_6 < VAR_1->res_pool->pipe_count; VAR_6++)
  if (VAR_8[VAR_6])
   FUNC_2(VAR_1, &VAR_1->current_state->res_ctx.pipe_ctx[VAR_6]);







 VAR_6 = 0;
 if (VAR_3 > 0 && VAR_10 &&
   (VAR_11 == ((void*)0) || VAR_11->plane_state == ((void*)0))) {
  while (VAR_6 < VAR_5 &&
    VAR_10->plane_res.hubp->funcs->hubp_is_flip_pending(VAR_10->plane_res.hubp)) {
   VAR_6 += 1;
   FUNC_7(1);
  }
 }
}
