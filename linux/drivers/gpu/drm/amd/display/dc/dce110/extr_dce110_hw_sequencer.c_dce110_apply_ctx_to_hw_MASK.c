
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct pipe_ctx {scalar_t__ clock_source; scalar_t__ prev_odm_pipe; scalar_t__ top_pipe; TYPE_8__* stream; } ;
struct TYPE_19__ {struct pipe_ctx* pipe_ctx; } ;
struct dc_state {scalar_t__ stream_count; TYPE_6__ res_ctx; } ;
struct dc_bios {TYPE_9__* funcs; } ;
struct TYPE_14__ {int (* enable_display_power_gating ) (struct dc*,int,struct dc_bios*,int ) ;int (* reset_hw_ctx_wrap ) (struct dc*,struct dc_state*) ;} ;
struct dc {TYPE_11__* current_state; TYPE_10__* fbc_compressor; TYPE_4__* res_pool; TYPE_2__* ctx; TYPE_1__ hwss; int hwseq; } ;
typedef enum dc_status { ____Placeholder_dc_status } dc_status ;
struct TYPE_22__ {int (* set_scratch_critical_state ) (struct dc_bios*,int) ;} ;
struct TYPE_21__ {TYPE_7__* link; } ;
struct TYPE_20__ {scalar_t__ link_state_valid; } ;
struct TYPE_18__ {struct pipe_ctx* pipe_ctx; } ;
struct TYPE_17__ {int pipe_count; } ;
struct TYPE_16__ {int (* disable_fbc ) (TYPE_10__*) ;} ;
struct TYPE_15__ {struct dc_bios* dc_bios; } ;
struct TYPE_13__ {TYPE_5__ res_ctx; } ;
struct TYPE_12__ {TYPE_3__* funcs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pipe_ctx*,struct dc_state*,struct dc*) ;
 int FUNC_1 (struct dc*,struct dc_state*) ;
 int FUNC_2 (int ,scalar_t__,int) ;
 int FUNC_3 (struct dc*,TYPE_11__*) ;
 int FUNC_4 (struct pipe_ctx*,struct pipe_ctx*) ;
 int FUNC_5 (struct dc*,struct dc_state*) ;
 int FUNC_6 (struct dc_bios*,int) ;
 int FUNC_7 (struct dc*,int,struct dc_bios*,int ) ;
 int FUNC_8 (TYPE_10__*) ;
 int FUNC_9 (struct dc_bios*,int) ;

enum dc_status FUNC_10(
  struct dc *VAR_2,
  struct dc_state *VAR_3)
{
 struct dc_bios *VAR_4 = VAR_2->ctx->dc_bios;
 enum dc_status VAR_5;
 int VAR_6;



 VAR_2->hwss.reset_hw_ctx_wrap(VAR_2, VAR_3);


 if (VAR_3->stream_count <= 0)
  return VAR_0;


 VAR_4->funcs->set_scratch_critical_state(VAR_4, 1);


 for (VAR_6 = 0; VAR_6 < VAR_2->res_pool->pipe_count; VAR_6++) {
  struct pipe_ctx *VAR_7 =
     &VAR_2->current_state->res_ctx.pipe_ctx[VAR_6];
  struct pipe_ctx *VAR_8 = &VAR_3->res_ctx.pipe_ctx[VAR_6];

  if (VAR_8->stream == ((void*)0) || VAR_8->top_pipe)
   continue;

  if (VAR_8->stream == VAR_7->stream) {
   if (VAR_7->clock_source != VAR_8->clock_source)
    FUNC_2(VAR_2->hwseq,
      VAR_8->clock_source, VAR_6);
   continue;
  }

  VAR_2->hwss.enable_display_power_gating(
    VAR_2, VAR_6, VAR_2->ctx->dc_bios,
    VAR_1);
 }

 if (VAR_2->fbc_compressor)
  VAR_2->fbc_compressor->funcs->disable_fbc(VAR_2->fbc_compressor);

 FUNC_1(VAR_2, VAR_3);

 for (VAR_6 = 0; VAR_6 < VAR_2->res_pool->pipe_count; VAR_6++) {
  struct pipe_ctx *VAR_9 =
     &VAR_2->current_state->res_ctx.pipe_ctx[VAR_6];
  struct pipe_ctx *VAR_10 = &VAR_3->res_ctx.pipe_ctx[VAR_6];

  if (VAR_10->stream == ((void*)0))
   continue;

  if (VAR_10->stream == VAR_9->stream &&
   VAR_10->stream->link->link_state_valid) {
   continue;
  }

  if (VAR_9->stream && !FUNC_4(VAR_9, VAR_10))
   continue;

  if (VAR_10->top_pipe || VAR_10->prev_odm_pipe)
   continue;

  VAR_5 = FUNC_0(
    VAR_10,
    VAR_3,
    VAR_2);

  if (VAR_0 != VAR_5)
   return VAR_5;
 }

 if (VAR_2->fbc_compressor)
  FUNC_3(VAR_2, VAR_2->current_state);

 VAR_4->funcs->set_scratch_critical_state(VAR_4, 0);

 return VAR_0;
}
