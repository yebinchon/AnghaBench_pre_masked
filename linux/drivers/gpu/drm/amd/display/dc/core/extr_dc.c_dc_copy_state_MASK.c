
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pipe_ctx {size_t pipe_idx; struct pipe_ctx* next_odm_pipe; struct pipe_ctx* prev_odm_pipe; struct pipe_ctx* bottom_pipe; struct pipe_ctx* top_pipe; } ;
struct TYPE_3__ {struct pipe_ctx* pipe_ctx; } ;
struct dc_state {int stream_count; int refcount; TYPE_2__* stream_status; int * streams; TYPE_1__ res_ctx; } ;
struct TYPE_4__ {int plane_count; int * plane_states; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 struct dc_state* FUNC_3 (int,int ) ;
 int FUNC_4 (struct dc_state*,struct dc_state*,int) ;

struct dc_state *FUNC_5(struct dc_state *VAR_2)
{
 int VAR_3, VAR_4;
 struct dc_state *VAR_5 = FUNC_3(sizeof(struct dc_state), VAR_0);

 if (!VAR_5)
  return ((void*)0);
 FUNC_4(VAR_5, VAR_2, sizeof(struct dc_state));

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
   struct pipe_ctx *VAR_6 = &VAR_5->res_ctx.pipe_ctx[VAR_3];

   if (VAR_6->top_pipe)
    VAR_6->top_pipe = &VAR_5->res_ctx.pipe_ctx[VAR_6->top_pipe->pipe_idx];

   if (VAR_6->bottom_pipe)
    VAR_6->bottom_pipe = &VAR_5->res_ctx.pipe_ctx[VAR_6->bottom_pipe->pipe_idx];

   if (VAR_6->prev_odm_pipe)
    VAR_6->prev_odm_pipe = &VAR_5->res_ctx.pipe_ctx[VAR_6->prev_odm_pipe->pipe_idx];

   if (VAR_6->next_odm_pipe)
    VAR_6->next_odm_pipe = &VAR_5->res_ctx.pipe_ctx[VAR_6->next_odm_pipe->pipe_idx];

 }

 for (VAR_3 = 0; VAR_3 < VAR_5->stream_count; VAR_3++) {
   FUNC_1(VAR_5->streams[VAR_3]);
   for (VAR_4 = 0; VAR_4 < VAR_5->stream_status[VAR_3].plane_count; VAR_4++)
    FUNC_0(
     VAR_5->stream_status[VAR_3].plane_states[VAR_4]);
 }

 FUNC_2(&VAR_5->refcount);

 return VAR_5;
}
