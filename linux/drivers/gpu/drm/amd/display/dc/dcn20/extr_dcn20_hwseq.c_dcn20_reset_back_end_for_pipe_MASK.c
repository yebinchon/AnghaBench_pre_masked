
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
typedef struct TYPE_19__ TYPE_12__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


struct TYPE_27__ {TYPE_12__* tg; scalar_t__ dsc; TYPE_11__* audio; int * stream_enc; } ;
struct pipe_ctx {TYPE_8__ stream_res; int pipe_idx; TYPE_7__* stream; int * top_pipe; } ;
struct dc_state {int dummy; } ;
struct TYPE_23__ {int dynamic_audio; } ;
struct TYPE_21__ {int (* disable_audio_stream ) (struct pipe_ctx*) ;} ;
struct dc {TYPE_10__* res_pool; TYPE_6__* current_state; TYPE_4__ caps; TYPE_2__ hwss; TYPE_1__* ctx; } ;
struct TYPE_28__ {struct pipe_ctx* pipe_ctx; } ;
struct TYPE_26__ {int timing; int dpms_off; } ;
struct TYPE_25__ {TYPE_9__ res_ctx; } ;
struct TYPE_24__ {int (* set_drr ) (TYPE_12__*,int *) ;int (* set_odm_bypass ) (TYPE_12__*,int *) ;int (* enable_optc_clock ) (TYPE_12__*,int) ;int (* disable_crtc ) (TYPE_12__*) ;} ;
struct TYPE_22__ {int (* az_disable ) (TYPE_11__*) ;} ;
struct TYPE_20__ {int dce_environment; int logger; } ;
struct TYPE_19__ {int inst; TYPE_5__* funcs; } ;
struct TYPE_18__ {TYPE_3__* funcs; } ;
struct TYPE_17__ {int pipe_count; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct pipe_ctx*) ;
 int FUNC_4 (struct pipe_ctx*,int) ;
 int FUNC_5 (struct pipe_ctx*) ;
 int FUNC_6 (TYPE_11__*) ;
 int FUNC_7 (TYPE_12__*) ;
 int FUNC_8 (TYPE_12__*,int) ;
 int FUNC_9 (TYPE_12__*,int *) ;
 int FUNC_10 (TYPE_12__*,int *) ;
 int FUNC_11 (TYPE_9__*,TYPE_10__*,TYPE_11__*,int) ;

__attribute__((used)) static void FUNC_12(
  struct dc *VAR_0,
  struct pipe_ctx *VAR_1,
  struct dc_state *VAR_2)
{
 int VAR_3;
 FUNC_0(VAR_0->ctx->logger);
 if (VAR_1->stream_res.stream_enc == ((void*)0)) {
  VAR_1->stream = ((void*)0);
  return;
 }

 if (!FUNC_2(VAR_0->ctx->dce_environment)) {

  if (!VAR_1->stream->dpms_off)
   FUNC_3(VAR_1);
  else if (VAR_1->stream_res.audio)
   VAR_0->hwss.disable_audio_stream(VAR_1);


  if (VAR_1->stream_res.audio) {

   VAR_1->stream_res.audio->funcs->az_disable(VAR_1->stream_res.audio);


   if (VAR_0->caps.dynamic_audio == 1) {


    FUNC_11(&VAR_0->current_state->res_ctx, VAR_0->res_pool,
      VAR_1->stream_res.audio, 0);
    VAR_1->stream_res.audio = ((void*)0);
   }
  }
 }
 if (VAR_1->top_pipe == ((void*)0)) {
  VAR_1->stream_res.tg->funcs->disable_crtc(VAR_1->stream_res.tg);

  VAR_1->stream_res.tg->funcs->enable_optc_clock(VAR_1->stream_res.tg, 0);
  if (VAR_1->stream_res.tg->funcs->set_odm_bypass)
   VAR_1->stream_res.tg->funcs->set_odm_bypass(
     VAR_1->stream_res.tg, &VAR_1->stream->timing);

  if (VAR_1->stream_res.tg->funcs->set_drr)
   VAR_1->stream_res.tg->funcs->set_drr(
     VAR_1->stream_res.tg, ((void*)0));
 }

 for (VAR_3 = 0; VAR_3 < VAR_0->res_pool->pipe_count; VAR_3++)
  if (&VAR_0->current_state->res_ctx.pipe_ctx[VAR_3] == VAR_1)
   break;

 if (VAR_3 == VAR_0->res_pool->pipe_count)
  return;

 VAR_1->stream = ((void*)0);
 FUNC_1("Reset back end for pipe %d, tg:%d\n",
     VAR_1->pipe_idx, VAR_1->stream_res.tg->inst);
}
