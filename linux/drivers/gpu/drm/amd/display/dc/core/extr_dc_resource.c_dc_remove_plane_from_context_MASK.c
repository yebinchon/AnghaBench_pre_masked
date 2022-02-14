
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct resource_pool {int pipe_count; } ;
struct pipe_ctx {struct dc_plane_state* plane_state; TYPE_3__* top_pipe; TYPE_2__* bottom_pipe; } ;
struct dc_stream_status {int plane_count; struct dc_plane_state** plane_states; } ;
struct dc_stream_state {int dummy; } ;
struct TYPE_4__ {struct pipe_ctx* pipe_ctx; } ;
struct dc_state {int stream_count; TYPE_1__ res_ctx; struct dc_stream_status* stream_status; struct dc_stream_state** streams; } ;
struct dc_plane_state {int dummy; } ;
struct dc {struct resource_pool* res_pool; } ;
struct TYPE_6__ {TYPE_2__* bottom_pipe; } ;
struct TYPE_5__ {TYPE_3__* top_pipe; } ;


 int FUNC_0 (struct dc_plane_state*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct pipe_ctx*,int ,int) ;

bool FUNC_3(
  const struct dc *VAR_0,
  struct dc_stream_state *VAR_1,
  struct dc_plane_state *VAR_2,
  struct dc_state *VAR_3)
{
 int VAR_4;
 struct dc_stream_status *VAR_5 = ((void*)0);
 struct resource_pool *VAR_6 = VAR_0->res_pool;

 for (VAR_4 = 0; VAR_4 < VAR_3->stream_count; VAR_4++)
  if (VAR_3->streams[VAR_4] == VAR_1) {
   VAR_5 = &VAR_3->stream_status[VAR_4];
   break;
  }

 if (VAR_5 == ((void*)0)) {
  FUNC_1("Existing stream not found; failed to remove plane.\n");
  return 0;
 }


 for (VAR_4 = VAR_6->pipe_count - 1; VAR_4 >= 0; VAR_4--) {
  struct pipe_ctx *VAR_7 = &VAR_3->res_ctx.pipe_ctx[VAR_4];

  if (VAR_7->plane_state == VAR_2) {
   if (VAR_7->top_pipe)
    VAR_7->top_pipe->bottom_pipe = VAR_7->bottom_pipe;





   if (VAR_7->bottom_pipe && VAR_7->top_pipe)
    VAR_7->bottom_pipe->top_pipe = VAR_7->top_pipe;





   if (!VAR_7->top_pipe)
    VAR_7->plane_state = ((void*)0);
   else
    FUNC_2(VAR_7, 0, sizeof(*VAR_7));
  }
 }


 for (VAR_4 = 0; VAR_4 < VAR_5->plane_count; VAR_4++) {
  if (VAR_5->plane_states[VAR_4] == VAR_2) {

   FUNC_0(VAR_5->plane_states[VAR_4]);
   break;
  }
 }

 if (VAR_4 == VAR_5->plane_count) {
  FUNC_1("Existing plane_state not found; failed to detach it!\n");
  return 0;
 }

 VAR_5->plane_count--;


 for (; VAR_4 < VAR_5->plane_count; VAR_4++)
  VAR_5->plane_states[VAR_4] = VAR_5->plane_states[VAR_4 + 1];

 VAR_5->plane_states[VAR_5->plane_count] = ((void*)0);

 return 1;
}
