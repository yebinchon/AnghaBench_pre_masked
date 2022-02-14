
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_6__* tg; } ;
struct TYPE_8__ {int vupdate_width; int vupdate_offset; int vstartup_start; int vready_offset; } ;
struct pipe_ctx {struct pipe_ctx* next_odm_pipe; struct pipe_ctx* bottom_pipe; int * plane_state; TYPE_4__* stream; TYPE_3__ stream_res; TYPE_1__ pipe_dlg_param; int prev_odm_pipe; int * top_pipe; } ;
struct dc_state {int dummy; } ;
struct TYPE_12__ {int (* update_odm ) (struct dc*,struct dc_state*,struct pipe_ctx*) ;int (* blank_pixel_data ) (struct dc*,struct pipe_ctx*,int) ;} ;
struct dc {TYPE_5__ hwss; } ;
struct TYPE_13__ {TYPE_2__* funcs; } ;
struct TYPE_11__ {int timing; } ;
struct TYPE_9__ {int (* set_vtg_params ) (TYPE_6__*,int *) ;int (* program_global_sync ) (TYPE_6__*,int ,int ,int ,int ) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct dc*,struct pipe_ctx*,struct dc_state*) ;
 int FUNC_2 (struct pipe_ctx*) ;
 int FUNC_3 (TYPE_6__*,int ,int ,int ,int ) ;
 int FUNC_4 (TYPE_6__*,int *) ;
 int FUNC_5 (struct dc*,struct pipe_ctx*,int) ;
 int FUNC_6 (struct dc*,struct dc_state*,struct pipe_ctx*) ;

__attribute__((used)) static void FUNC_7(
  struct dc *VAR_0,
  struct pipe_ctx *VAR_1,
  struct dc_state *VAR_2)
{
 if (VAR_1->top_pipe == ((void*)0) && !VAR_1->prev_odm_pipe) {
  bool VAR_3 = !FUNC_2(VAR_1);

  VAR_1->stream_res.tg->funcs->program_global_sync(
    VAR_1->stream_res.tg,
    VAR_1->pipe_dlg_param.vready_offset,
    VAR_1->pipe_dlg_param.vstartup_start,
    VAR_1->pipe_dlg_param.vupdate_offset,
    VAR_1->pipe_dlg_param.vupdate_width);

  VAR_1->stream_res.tg->funcs->set_vtg_params(
    VAR_1->stream_res.tg, &VAR_1->stream->timing);

  VAR_0->hwss.blank_pixel_data(VAR_0, VAR_1, VAR_3);

  if (VAR_0->hwss.update_odm)
   VAR_0->hwss.update_odm(VAR_0, VAR_2, VAR_1);
 }

 if (VAR_1->plane_state != ((void*)0))
  FUNC_1(VAR_0, VAR_1, VAR_2);

 if (VAR_1->bottom_pipe != ((void*)0)) {
  FUNC_0(VAR_1->bottom_pipe != VAR_1);
  FUNC_7(VAR_0, VAR_1->bottom_pipe, VAR_2);
 } else if (VAR_1->next_odm_pipe != ((void*)0)) {
  FUNC_0(VAR_1->next_odm_pipe != VAR_1);
  FUNC_7(VAR_0, VAR_1->next_odm_pipe, VAR_2);
 }
}
