
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pipe_ctx {size_t pipe_idx; struct pipe_ctx* prev_odm_pipe; struct pipe_ctx* next_odm_pipe; struct pipe_ctx* bottom_pipe; struct pipe_ctx* top_pipe; } ;
struct kref {int dummy; } ;
struct TYPE_3__ {struct pipe_ctx* pipe_ctx; } ;
struct dc_state {int stream_count; struct kref refcount; TYPE_2__* stream_status; int * streams; TYPE_1__ res_ctx; } ;
struct TYPE_4__ {int plane_count; int * plane_states; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

void FUNC_2(
  const struct dc_state *VAR_1,
  struct dc_state *VAR_2)
{
 int VAR_3, VAR_4;
 struct kref VAR_5 = VAR_2->refcount;

 *VAR_2 = *VAR_1;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  struct pipe_ctx *VAR_6 = &VAR_2->res_ctx.pipe_ctx[VAR_3];

  if (VAR_6->top_pipe)
   VAR_6->top_pipe = &VAR_2->res_ctx.pipe_ctx[VAR_6->top_pipe->pipe_idx];

  if (VAR_6->bottom_pipe)
   VAR_6->bottom_pipe = &VAR_2->res_ctx.pipe_ctx[VAR_6->bottom_pipe->pipe_idx];

  if (VAR_6->next_odm_pipe)
   VAR_6->next_odm_pipe = &VAR_2->res_ctx.pipe_ctx[VAR_6->next_odm_pipe->pipe_idx];

  if (VAR_6->prev_odm_pipe)
   VAR_6->prev_odm_pipe = &VAR_2->res_ctx.pipe_ctx[VAR_6->prev_odm_pipe->pipe_idx];
 }

 for (VAR_3 = 0; VAR_3 < VAR_2->stream_count; VAR_3++) {
  FUNC_1(VAR_2->streams[VAR_3]);
  for (VAR_4 = 0; VAR_4 < VAR_2->stream_status[VAR_3].plane_count; VAR_4++)
   FUNC_0(
    VAR_2->stream_status[VAR_3].plane_states[VAR_4]);
 }


 VAR_2->refcount = VAR_5;

}
