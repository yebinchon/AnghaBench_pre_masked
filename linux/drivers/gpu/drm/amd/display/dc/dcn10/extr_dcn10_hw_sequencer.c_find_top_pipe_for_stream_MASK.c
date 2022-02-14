
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pipe_ctx {int prev_odm_pipe; int top_pipe; struct dc_stream_state const* stream; int plane_state; } ;
struct dc_stream_state {int dummy; } ;
struct TYPE_5__ {struct pipe_ctx* pipe_ctx; } ;
struct dc_state {TYPE_1__ res_ctx; } ;
struct dc {TYPE_3__* current_state; TYPE_4__* res_pool; } ;
struct TYPE_8__ {int pipe_count; } ;
struct TYPE_6__ {struct pipe_ctx* pipe_ctx; } ;
struct TYPE_7__ {TYPE_2__ res_ctx; } ;



struct pipe_ctx *FUNC_0(
  struct dc *VAR_0,
  struct dc_state *VAR_1,
  const struct dc_stream_state *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->res_pool->pipe_count; VAR_3++) {
  struct pipe_ctx *VAR_4 = &VAR_1->res_ctx.pipe_ctx[VAR_3];
  struct pipe_ctx *VAR_5 =
    &VAR_0->current_state->res_ctx.pipe_ctx[VAR_3];

  if (!VAR_4->plane_state && !VAR_5->plane_state)
   continue;

  if (VAR_4->stream != VAR_2)
   continue;

  if (!VAR_4->top_pipe && !VAR_4->prev_odm_pipe)
   return VAR_4;
 }
 return ((void*)0);
}
