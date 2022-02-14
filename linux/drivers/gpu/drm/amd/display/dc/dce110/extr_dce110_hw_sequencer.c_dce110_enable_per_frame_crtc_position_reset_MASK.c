
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_4__* tg; } ;
struct pipe_ctx {TYPE_3__ stream_res; TYPE_1__* stream; } ;
struct dcp_gsl_params {scalar_t__ gsl_master; scalar_t__ gsl_group; int member_0; } ;
struct dc_context {int dummy; } ;
struct dc {struct dc_context* ctx; } ;
struct TYPE_11__ {TYPE_2__* funcs; } ;
struct TYPE_9__ {int (* tear_down_global_swap_lock ) (TYPE_4__*) ;int (* enable_crtc_reset ) (TYPE_4__*,scalar_t__,int *) ;int (* setup_global_swap_lock ) (TYPE_4__*,struct dcp_gsl_params*) ;} ;
struct TYPE_8__ {int triggered_crtc_reset; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_4__*,struct dcp_gsl_params*) ;
 int FUNC_2 (TYPE_4__*,scalar_t__,int *) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (struct dc_context*,TYPE_4__*) ;

__attribute__((used)) static void FUNC_5(
  struct dc *VAR_0,
  int VAR_1,
  struct pipe_ctx *VAR_2[])
{
 struct dc_context *VAR_3 = VAR_0->ctx;
 struct dcp_gsl_params VAR_4 = { 0 };
 int VAR_5;

 VAR_4.gsl_group = 0;
 VAR_4.gsl_master = 0;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
  VAR_2[VAR_5]->stream_res.tg->funcs->setup_global_swap_lock(
     VAR_2[VAR_5]->stream_res.tg, &VAR_4);

 FUNC_0("GSL: enabling trigger-reset\n");

 for (VAR_5 = 1; VAR_5 < VAR_1; VAR_5++)
  VAR_2[VAR_5]->stream_res.tg->funcs->enable_crtc_reset(
    VAR_2[VAR_5]->stream_res.tg,
    VAR_4.gsl_master,
    &VAR_2[VAR_5]->stream->triggered_crtc_reset);

 FUNC_0("GSL: waiting for reset to occur.\n");
 for (VAR_5 = 1; VAR_5 < VAR_1; VAR_5++)
  FUNC_4(VAR_3, VAR_2[VAR_5]->stream_res.tg);

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
  VAR_2[VAR_5]->stream_res.tg->funcs->tear_down_global_swap_lock(VAR_2[VAR_5]->stream_res.tg);

}
