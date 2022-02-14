
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


struct TYPE_16__ {TYPE_10__* mi; } ;
struct pipe_ctx {scalar_t__ plane_state; int top_pipe; struct dc_stream_state const* stream; TYPE_3__ plane_res; } ;
struct TYPE_17__ {int pix_clk_100hz; int v_total; int h_total; } ;
struct dc_stream_state {TYPE_4__ timing; } ;
struct TYPE_19__ {struct pipe_ctx* pipe_ctx; } ;
struct dc_state {TYPE_6__ res_ctx; int stream_count; } ;
struct TYPE_22__ {int (* pipe_control_lock ) (struct dc*,struct pipe_ctx*,int) ;int (* update_plane_addr ) (struct dc*,struct pipe_ctx*) ;} ;
struct dc {TYPE_11__* fbc_compressor; TYPE_9__ hwss; TYPE_8__* current_state; TYPE_5__* res_pool; } ;
struct TYPE_20__ {struct pipe_ctx* pipe_ctx; } ;
struct TYPE_21__ {TYPE_7__ res_ctx; } ;
struct TYPE_18__ {int pipe_count; } ;
struct TYPE_15__ {int (* allocate_mem_input ) (TYPE_10__*,int ,int ,int,int ) ;} ;
struct TYPE_14__ {int (* disable_fbc ) (TYPE_11__*) ;} ;
struct TYPE_13__ {TYPE_1__* funcs; } ;
struct TYPE_12__ {TYPE_2__* funcs; } ;


 int FUNC_0 (struct dc*,struct pipe_ctx*) ;
 int FUNC_1 (struct dc*,struct dc_state*) ;
 int FUNC_2 (struct dc*,struct pipe_ctx*) ;
 int FUNC_3 (TYPE_11__*) ;
 int FUNC_4 (struct dc*,struct pipe_ctx*,int) ;
 int FUNC_5 (TYPE_10__*,int ,int ,int,int ) ;
 int FUNC_6 (struct dc*,struct pipe_ctx*) ;
 int FUNC_7 (struct dc*,struct pipe_ctx*,int) ;

__attribute__((used)) static void FUNC_8(
  struct dc *VAR_0,
  const struct dc_stream_state *VAR_1,
  int VAR_2,
  struct dc_state *VAR_3)
{
 int VAR_4;

 if (VAR_2 == 0)
  return;

 if (VAR_0->fbc_compressor)
  VAR_0->fbc_compressor->funcs->disable_fbc(VAR_0->fbc_compressor);

 for (VAR_4 = 0; VAR_4 < VAR_0->res_pool->pipe_count; VAR_4++) {
  struct pipe_ctx *VAR_5 = &VAR_3->res_ctx.pipe_ctx[VAR_4];
  struct pipe_ctx *VAR_6 = &VAR_0->current_state->res_ctx.pipe_ctx[VAR_4];

  if (VAR_1 == VAR_5->stream) {
   if (!VAR_5->top_pipe &&
    (VAR_5->plane_state || VAR_6->plane_state))
    VAR_0->hwss.pipe_control_lock(VAR_0, VAR_5, 1);
  }
 }

 for (VAR_4 = 0; VAR_4 < VAR_0->res_pool->pipe_count; VAR_4++) {
  struct pipe_ctx *VAR_7 = &VAR_3->res_ctx.pipe_ctx[VAR_4];

  if (VAR_7->stream != VAR_1)
   continue;


  VAR_7->plane_res.mi->funcs->allocate_mem_input(
    VAR_7->plane_res.mi,
    VAR_7->stream->timing.h_total,
    VAR_7->stream->timing.v_total,
    VAR_7->stream->timing.pix_clk_100hz / 10,
    VAR_3->stream_count);

  FUNC_0(VAR_0, VAR_7);

  VAR_0->hwss.update_plane_addr(VAR_0, VAR_7);

  FUNC_2(VAR_0, VAR_7);

 }

 for (VAR_4 = 0; VAR_4 < VAR_0->res_pool->pipe_count; VAR_4++) {
  struct pipe_ctx *VAR_8 = &VAR_3->res_ctx.pipe_ctx[VAR_4];
  struct pipe_ctx *VAR_9 = &VAR_0->current_state->res_ctx.pipe_ctx[VAR_4];

  if ((VAR_1 == VAR_8->stream) &&
   (!VAR_8->top_pipe) &&
   (VAR_8->plane_state || VAR_9->plane_state))
   VAR_0->hwss.pipe_control_lock(VAR_0, VAR_8, 0);
 }

 if (VAR_0->fbc_compressor)
  FUNC_1(VAR_0, VAR_3);
}
