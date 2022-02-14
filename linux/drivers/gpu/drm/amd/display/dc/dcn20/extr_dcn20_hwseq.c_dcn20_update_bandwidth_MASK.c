
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_12__ ;
typedef struct TYPE_15__ TYPE_11__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct TYPE_15__ {int vupdate_width; int vupdate_offset; int vstartup_start; int vready_offset; } ;
struct TYPE_25__ {TYPE_10__* hubp; } ;
struct TYPE_21__ {TYPE_12__* tg; } ;
struct pipe_ctx {TYPE_11__ pipe_dlg_param; int rq_regs; int ttu_regs; int dlg_regs; TYPE_9__ plane_res; int * prev_odm_pipe; TYPE_6__* stream; TYPE_5__ stream_res; int * top_pipe; int * plane_state; } ;
struct TYPE_19__ {struct pipe_ctx* pipe_ctx; } ;
struct dc_state {TYPE_3__ res_ctx; } ;
struct TYPE_23__ {int (* blank_pixel_data ) (struct dc*,struct pipe_ctx*,int) ;int (* prepare_bandwidth ) (struct dc*,struct dc_state*) ;} ;
struct dc {TYPE_7__ hwss; TYPE_2__* res_pool; } ;
struct TYPE_24__ {int (* hubp_setup ) (TYPE_10__*,int *,int *,int *,TYPE_11__*) ;} ;
struct TYPE_22__ {int timing; } ;
struct TYPE_20__ {int (* set_vtg_params ) (TYPE_12__*,int *) ;int (* program_global_sync ) (TYPE_12__*,int ,int ,int ,int ) ;} ;
struct TYPE_18__ {int pipe_count; TYPE_1__* funcs; } ;
struct TYPE_17__ {int (* validate_bandwidth ) (struct dc*,struct dc_state*,int) ;} ;
struct TYPE_16__ {TYPE_4__* funcs; } ;
struct TYPE_14__ {TYPE_8__* funcs; } ;


 int FUNC_0 (struct pipe_ctx*) ;
 int FUNC_1 (struct dc*,struct dc_state*,int) ;
 int FUNC_2 (struct dc*,struct dc_state*) ;
 int FUNC_3 (TYPE_12__*,int ,int ,int ,int ) ;
 int FUNC_4 (TYPE_12__*,int *) ;
 int FUNC_5 (struct dc*,struct pipe_ctx*,int) ;
 int FUNC_6 (TYPE_10__*,int *,int *,int *,TYPE_11__*) ;

bool FUNC_7(
  struct dc *VAR_0,
  struct dc_state *VAR_1)
{
 int VAR_2;


 if (!VAR_0->res_pool->funcs->validate_bandwidth(VAR_0, VAR_1, 0))
  return 0;


 VAR_0->hwss.prepare_bandwidth(VAR_0, VAR_1);


 for (VAR_2 = 0; VAR_2 < VAR_0->res_pool->pipe_count; VAR_2++) {
  struct pipe_ctx *VAR_3 = &VAR_1->res_ctx.pipe_ctx[VAR_2];

  if (VAR_3->plane_state == ((void*)0))
   continue;

  if (VAR_3->top_pipe == ((void*)0)) {
   bool VAR_4 = !FUNC_0(VAR_3);

   VAR_3->stream_res.tg->funcs->program_global_sync(
     VAR_3->stream_res.tg,
     VAR_3->pipe_dlg_param.vready_offset,
     VAR_3->pipe_dlg_param.vstartup_start,
     VAR_3->pipe_dlg_param.vupdate_offset,
     VAR_3->pipe_dlg_param.vupdate_width);

   VAR_3->stream_res.tg->funcs->set_vtg_params(
     VAR_3->stream_res.tg, &VAR_3->stream->timing);
   if (VAR_3->prev_odm_pipe == ((void*)0))
    VAR_0->hwss.blank_pixel_data(VAR_0, VAR_3, VAR_4);
  }

  VAR_3->plane_res.hubp->funcs->hubp_setup(
    VAR_3->plane_res.hubp,
     &VAR_3->dlg_regs,
     &VAR_3->ttu_regs,
     &VAR_3->rq_regs,
     &VAR_3->pipe_dlg_param);
 }

 return 1;
}
