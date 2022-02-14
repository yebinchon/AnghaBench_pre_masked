
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_14__ {struct hubp* hubp; struct dpp* dpp; TYPE_6__* opp; } ;
struct pipe_ctx {int * plane_state; int * bottom_pipe; int * top_pipe; TYPE_7__ plane_res; TYPE_7__ stream_res; int * stream; } ;
struct hubp {int opp_id; int power_gated; TYPE_1__* funcs; } ;
struct dpp {TYPE_2__* funcs; } ;
struct TYPE_12__ {int (* plane_atomic_power_down ) (struct dc*,struct dpp*,struct hubp*) ;int (* wait_for_mpcc_disconnect ) (struct dc*,int ,struct pipe_ctx*) ;} ;
struct dc {int optimized_required; TYPE_5__ hwss; int res_pool; } ;
struct TYPE_10__ {int * opp_list; } ;
struct TYPE_13__ {TYPE_4__* funcs; TYPE_3__ mpc_tree_params; } ;
struct TYPE_11__ {int (* opp_pipe_clock_control ) (TYPE_6__*,int) ;} ;
struct TYPE_9__ {int (* dpp_dppclk_control ) (struct dpp*,int,int) ;} ;
struct TYPE_8__ {int (* hubp_clk_cntl ) (struct hubp*,int) ;} ;


 int FUNC_0 (TYPE_7__*,int ,int) ;
 int FUNC_1 (struct dc*,int ,struct pipe_ctx*) ;
 int FUNC_2 (struct hubp*,int) ;
 int FUNC_3 (struct dpp*,int,int) ;
 int FUNC_4 (TYPE_6__*,int) ;
 int FUNC_5 (struct dc*,struct dpp*,struct hubp*) ;

__attribute__((used)) static void FUNC_6(struct dc *VAR_0, struct pipe_ctx *VAR_1)
{
 struct hubp *VAR_2 = VAR_1->plane_res.hubp;
 struct dpp *VAR_3 = VAR_1->plane_res.dpp;
 int VAR_4 = VAR_2->opp_id;

 VAR_0->hwss.wait_for_mpcc_disconnect(VAR_0, VAR_0->res_pool, VAR_1);

 VAR_2->funcs->hubp_clk_cntl(VAR_2, 0);

 VAR_3->funcs->dpp_dppclk_control(VAR_3, 0, 0);

 if (VAR_4 != 0xf && VAR_1->stream_res.opp->mpc_tree_params.opp_list == ((void*)0))
  VAR_1->stream_res.opp->funcs->opp_pipe_clock_control(
    VAR_1->stream_res.opp,
    0);

 VAR_2->power_gated = 1;
 VAR_0->optimized_required = 0;

 VAR_0->hwss.plane_atomic_power_down(VAR_0,
   VAR_1->plane_res.dpp,
   VAR_1->plane_res.hubp);

 VAR_1->stream = ((void*)0);
 FUNC_0(&VAR_1->stream_res, 0, sizeof(VAR_1->stream_res));
 FUNC_0(&VAR_1->plane_res, 0, sizeof(VAR_1->plane_res));
 VAR_1->top_pipe = ((void*)0);
 VAR_1->bottom_pipe = ((void*)0);
 VAR_1->plane_state = ((void*)0);
}
