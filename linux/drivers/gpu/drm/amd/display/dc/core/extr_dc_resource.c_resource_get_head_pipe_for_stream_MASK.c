
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_context {struct pipe_ctx* pipe_ctx; } ;
struct pipe_ctx {int prev_odm_pipe; int top_pipe; struct dc_stream_state* stream; } ;
struct dc_stream_state {int dummy; } ;


 int VAR_0 ;

struct pipe_ctx *FUNC_0(
  struct resource_context *VAR_1,
  struct dc_stream_state *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_1->pipe_ctx[VAR_3].stream == VAR_2
    && !VAR_1->pipe_ctx[VAR_3].top_pipe
    && !VAR_1->pipe_ctx[VAR_3].prev_odm_pipe)
   return &VAR_1->pipe_ctx[VAR_3];
 }
 return ((void*)0);
}
