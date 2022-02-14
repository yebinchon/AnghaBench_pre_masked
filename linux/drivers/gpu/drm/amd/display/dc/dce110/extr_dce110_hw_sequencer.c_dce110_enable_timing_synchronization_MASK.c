
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__* tg; } ;
struct pipe_ctx {TYPE_2__ stream_res; } ;
struct dcp_gsl_params {scalar_t__ gsl_group; int gsl_master; int member_0; } ;
struct dc_context {int dummy; } ;
struct dc {struct dc_context* ctx; } ;
struct TYPE_10__ {TYPE_1__* funcs; int inst; } ;
struct TYPE_8__ {int (* tear_down_global_swap_lock ) (TYPE_3__*) ;int (* disable_reset_trigger ) (TYPE_3__*) ;int (* enable_reset_trigger ) (TYPE_3__*,scalar_t__) ;int (* setup_global_swap_lock ) (TYPE_3__*,struct dcp_gsl_params*) ;} ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_3__*,struct dcp_gsl_params*) ;
 int FUNC_2 (TYPE_3__*,scalar_t__) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (struct dc_context*,TYPE_3__*) ;

__attribute__((used)) static void FUNC_6(
  struct dc *VAR_0,
  int VAR_1,
  int VAR_2,
  struct pipe_ctx *VAR_3[])
{
 struct dc_context *VAR_4 = VAR_0->ctx;
 struct dcp_gsl_params VAR_5 = { 0 };
 int VAR_6;

 FUNC_0("GSL: Setting-up...\n");




 VAR_5.gsl_group = 0;
 VAR_5.gsl_master = VAR_3[0]->stream_res.tg->inst;

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
  VAR_3[VAR_6]->stream_res.tg->funcs->setup_global_swap_lock(
     VAR_3[VAR_6]->stream_res.tg, &VAR_5);


 FUNC_0("GSL: enabling trigger-reset\n");

 for (VAR_6 = 1 ; VAR_6 < VAR_2; VAR_6++)
  VAR_3[VAR_6]->stream_res.tg->funcs->enable_reset_trigger(
    VAR_3[VAR_6]->stream_res.tg,
    VAR_5.gsl_group);

 for (VAR_6 = 1 ; VAR_6 < VAR_2; VAR_6++) {
  FUNC_0("GSL: waiting for reset to occur.\n");
  FUNC_5(VAR_4, VAR_3[VAR_6]->stream_res.tg);
  VAR_3[VAR_6]->stream_res.tg->funcs->disable_reset_trigger(
    VAR_3[VAR_6]->stream_res.tg);
 }



 FUNC_0("GSL: Restoring register states.\n");
 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
  VAR_3[VAR_6]->stream_res.tg->funcs->tear_down_global_swap_lock(VAR_3[VAR_6]->stream_res.tg);

 FUNC_0("GSL: Set-up complete.\n");
}
