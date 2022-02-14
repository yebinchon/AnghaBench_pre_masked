
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_9__ ;
typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_13__ ;
typedef struct TYPE_22__ TYPE_11__ ;
typedef struct TYPE_21__ TYPE_10__ ;


struct resource_pool {int abm; TYPE_3__* funcs; } ;
struct TYPE_32__ {TYPE_13__* audio; TYPE_11__* stream_enc; TYPE_7__* tg; int abm; } ;
struct pipe_ctx {TYPE_9__ stream_res; TYPE_6__* stream; } ;
struct TYPE_27__ {scalar_t__ all; } ;
struct TYPE_28__ {TYPE_4__ flags; scalar_t__ mode_count; } ;
struct dc_stream_state {int apply_seamless_boot_optimization; TYPE_5__ audio_info; int converter_disable_audio; int timing; int sink; } ;
struct TYPE_21__ {struct pipe_ctx* pipe_ctx; } ;
struct dc_state {int stream_count; TYPE_8__* stream_status; struct dc_stream_state** streams; TYPE_10__ res_ctx; } ;
struct dc_context {struct dc_bios* dc_bios; } ;
struct dc_bios {TYPE_2__* funcs; } ;
struct TYPE_24__ {scalar_t__ allow_seamless_boot_optimization; } ;
struct dc {struct resource_pool* res_pool; TYPE_1__ config; struct dc_context* ctx; } ;
typedef enum dc_status { ____Placeholder_dc_status } dc_status ;
struct TYPE_31__ {int audio_inst; int stream_enc_inst; int primary_otg_inst; } ;
struct TYPE_30__ {int inst; } ;
struct TYPE_29__ {int signal; } ;
struct TYPE_26__ {TYPE_11__* (* find_first_free_match_stream_enc_for_link ) (TYPE_10__*,struct resource_pool const*,struct dc_stream_state*) ;} ;
struct TYPE_25__ {int (* is_accelerated_mode ) (struct dc_bios*) ;} ;
struct TYPE_23__ {int inst; } ;
struct TYPE_22__ {int id; } ;


 int FUNC_0 (char*,struct dc_stream_state*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_10__*,struct resource_pool const*,struct dc_stream_state*) ;
 int FUNC_2 (TYPE_10__*,struct resource_pool const*,struct dc_stream_state*) ;
 int FUNC_3 (TYPE_10__*,struct resource_pool const*,struct dc_stream_state*) ;
 int FUNC_4 (struct dc_stream_state*) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct dc const*,int ,int *) ;
 TYPE_13__* FUNC_8 (TYPE_10__*,struct resource_pool const*,int ) ;
 int FUNC_9 (struct dc_bios*) ;
 TYPE_11__* FUNC_10 (TYPE_10__*,struct resource_pool const*,struct dc_stream_state*) ;
 int FUNC_11 (TYPE_10__*,struct resource_pool const*,TYPE_13__*,int) ;
 int FUNC_12 (TYPE_10__*,struct resource_pool const*,TYPE_11__*,int) ;

enum dc_status FUNC_13(
  const struct dc *VAR_4,
  struct dc_state *VAR_5,
  struct dc_stream_state *VAR_6)
{
 const struct resource_pool *VAR_7 = VAR_4->res_pool;
 int VAR_8;
 struct dc_context *VAR_9 = VAR_4->ctx;
 struct pipe_ctx *VAR_10 = ((void*)0);
 int VAR_11 = -1;
 struct dc_bios *VAR_12 = VAR_4->ctx->dc_bios;
 FUNC_4(VAR_6);


 if (VAR_4->config.allow_seamless_boot_optimization &&
   !VAR_12->funcs->is_accelerated_mode(VAR_12)) {
  if (FUNC_7(VAR_4, VAR_6->sink, &VAR_6->timing))
   VAR_6->apply_seamless_boot_optimization = 1;
 }

 if (VAR_6->apply_seamless_boot_optimization)
  VAR_11 = FUNC_3(
    &VAR_5->res_ctx,
    VAR_7,
    VAR_6);

 if (VAR_11 < 0)

  VAR_11 = FUNC_1(&VAR_5->res_ctx, VAR_7, VAR_6);






 if (VAR_11 < 0 || VAR_5->res_ctx.pipe_ctx[VAR_11].stream_res.tg == ((void*)0))
  return VAR_1;

 VAR_10 = &VAR_5->res_ctx.pipe_ctx[VAR_11];

 VAR_10->stream_res.stream_enc =
  VAR_4->res_pool->funcs->find_first_free_match_stream_enc_for_link(
   &VAR_5->res_ctx, VAR_7, VAR_6);

 if (!VAR_10->stream_res.stream_enc)
  return VAR_2;

 FUNC_12(
  &VAR_5->res_ctx, VAR_7,
  VAR_10->stream_res.stream_enc,
  1);


 if (!VAR_6->converter_disable_audio &&
     FUNC_5(VAR_10->stream->signal) &&
     VAR_6->audio_info.mode_count && VAR_6->audio_info.flags.all) {
  VAR_10->stream_res.audio = FUNC_8(
  &VAR_5->res_ctx, VAR_7, VAR_10->stream_res.stream_enc->id);






  if (VAR_10->stream_res.audio)
   FUNC_11(&VAR_5->res_ctx, VAR_7,
        VAR_10->stream_res.audio, 1);
 }


 if (VAR_10->stream && FUNC_6(VAR_10->stream->signal))
  VAR_10->stream_res.abm = VAR_7->abm;

 for (VAR_8 = 0; VAR_8 < VAR_5->stream_count; VAR_8++)
  if (VAR_5->streams[VAR_8] == VAR_6) {
   VAR_5->stream_status[VAR_8].primary_otg_inst = VAR_10->stream_res.tg->inst;
   VAR_5->stream_status[VAR_8].stream_enc_inst = VAR_10->stream_res.stream_enc->id;
   VAR_5->stream_status[VAR_8].audio_inst =
    VAR_10->stream_res.audio ? VAR_10->stream_res.audio->inst : -1;

   return VAR_3;
  }

 FUNC_0("Stream %p not found in new ctx!\n", VAR_6);
 return VAR_0;
}
