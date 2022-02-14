
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct resource_context {struct pipe_ctx* pipe_ctx; } ;
struct TYPE_7__ {int dpp; int ipp; int xfm; int hubp; int mi; } ;
struct pipe_ctx {TYPE_3__ plane_res; int plane_state; struct dc_stream_state* stream; } ;
struct dc_cursor_position {int dummy; } ;
struct dc_stream_state {struct dc_cursor_position cursor_position; TYPE_1__* ctx; } ;
struct TYPE_8__ {int (* pipe_control_lock ) (struct dc*,struct pipe_ctx*,int) ;int (* set_cursor_position ) (struct pipe_ctx*) ;} ;
struct dc {TYPE_4__ hwss; TYPE_2__* current_state; } ;
struct TYPE_6__ {struct resource_context res_ctx; } ;
struct TYPE_5__ {struct dc* dc; } ;


 int VAR_0 ;
 int FUNC_0 (struct pipe_ctx*,struct dc*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct dc*,struct pipe_ctx*,int) ;
 int FUNC_3 (struct pipe_ctx*) ;
 int FUNC_4 (struct dc*,struct pipe_ctx*,int) ;

bool FUNC_5(
 struct dc_stream_state *VAR_1,
 const struct dc_cursor_position *VAR_2)
{
 int VAR_3;
 struct dc *VAR_4;
 struct resource_context *VAR_5;
 struct pipe_ctx *VAR_6 = ((void*)0);

 if (((void*)0) == VAR_1) {
  FUNC_1("DC: dc_stream is NULL!\n");
  return 0;
 }

 if (((void*)0) == VAR_2) {
  FUNC_1("DC: cursor position is NULL!\n");
  return 0;
 }

 VAR_4 = VAR_1->ctx->dc;
 VAR_5 = &VAR_4->current_state->res_ctx;
 VAR_1->cursor_position = *VAR_2;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  struct pipe_ctx *VAR_7 = &VAR_5->pipe_ctx[VAR_3];

  if (VAR_7->stream != VAR_1 ||
    (!VAR_7->plane_res.mi && !VAR_7->plane_res.hubp) ||
    !VAR_7->plane_state ||
    (!VAR_7->plane_res.xfm && !VAR_7->plane_res.dpp) ||
    (!VAR_7->plane_res.ipp && !VAR_7->plane_res.dpp))
   continue;

  if (!VAR_6) {
   VAR_6 = VAR_7;

   FUNC_0(VAR_7, VAR_4);
   VAR_4->hwss.pipe_control_lock(VAR_4, VAR_6, 1);
  }

  VAR_4->hwss.set_cursor_position(VAR_7);
 }

 if (VAR_6)
  VAR_4->hwss.pipe_control_lock(VAR_4, VAR_6, 0);

 return 1;
}
