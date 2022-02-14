
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ gsl_group; struct hubp* hubp; struct dpp* dpp; } ;
struct pipe_ctx {int * plane_state; int * bottom_pipe; int * top_pipe; TYPE_4__ plane_res; TYPE_4__ stream_res; int * stream; } ;
struct hubp {int power_gated; TYPE_1__* funcs; } ;
struct dpp {TYPE_2__* funcs; } ;
struct TYPE_7__ {int (* plane_atomic_power_down ) (struct dc*,struct dpp*,struct hubp*) ;int (* set_flip_control_gsl ) (struct pipe_ctx*,int) ;int (* wait_for_mpcc_disconnect ) (struct dc*,int ,struct pipe_ctx*) ;} ;
struct dc {int optimized_required; TYPE_3__ hwss; int res_pool; } ;
struct TYPE_6__ {int (* dpp_dppclk_control ) (struct dpp*,int,int) ;} ;
struct TYPE_5__ {int (* hubp_clk_cntl ) (struct hubp*,int) ;} ;


 int FUNC_0 (struct dc*,struct pipe_ctx*,int) ;
 int FUNC_1 (TYPE_4__*,int ,int) ;
 int FUNC_2 (struct dc*,int ,struct pipe_ctx*) ;
 int FUNC_3 (struct pipe_ctx*,int) ;
 int FUNC_4 (struct hubp*,int) ;
 int FUNC_5 (struct dpp*,int,int) ;
 int FUNC_6 (struct dc*,struct dpp*,struct hubp*) ;

__attribute__((used)) static void FUNC_7(struct dc *VAR_0, struct pipe_ctx *VAR_1)
{
 struct hubp *VAR_2 = VAR_1->plane_res.hubp;
 struct dpp *VAR_3 = VAR_1->plane_res.dpp;

 VAR_0->hwss.wait_for_mpcc_disconnect(VAR_0, VAR_0->res_pool, VAR_1);




 if (VAR_1->stream_res.gsl_group != 0)
  FUNC_0(VAR_0, VAR_1, 0);

 VAR_0->hwss.set_flip_control_gsl(VAR_1, 0);

 VAR_2->funcs->hubp_clk_cntl(VAR_2, 0);

 VAR_3->funcs->dpp_dppclk_control(VAR_3, 0, 0);

 VAR_2->power_gated = 1;
 VAR_0->optimized_required = 0;

 VAR_0->hwss.plane_atomic_power_down(VAR_0,
   VAR_1->plane_res.dpp,
   VAR_1->plane_res.hubp);

 VAR_1->stream = ((void*)0);
 FUNC_1(&VAR_1->stream_res, 0, sizeof(VAR_1->stream_res));
 FUNC_1(&VAR_1->plane_res, 0, sizeof(VAR_1->plane_res));
 VAR_1->top_pipe = ((void*)0);
 VAR_1->bottom_pipe = ((void*)0);
 VAR_1->plane_state = ((void*)0);
}
