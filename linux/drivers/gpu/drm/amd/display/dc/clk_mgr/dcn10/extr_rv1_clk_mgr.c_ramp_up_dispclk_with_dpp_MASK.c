
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {TYPE_9__* dpp; } ;
struct pipe_ctx {TYPE_5__ plane_res; int plane_state; } ;
struct dc_clocks {int dispclk_khz; int dppclk_khz; int max_supported_dppclk_khz; } ;
struct dc {TYPE_3__* current_state; TYPE_1__* res_pool; } ;
struct TYPE_16__ {int dispclk_khz; int dppclk_khz; int max_supported_dppclk_khz; } ;
struct TYPE_17__ {TYPE_7__ clks; } ;
struct clk_mgr_internal {TYPE_8__ base; TYPE_6__* funcs; } ;
struct TYPE_18__ {TYPE_4__* funcs; } ;
struct TYPE_15__ {int (* set_dprefclk ) (struct clk_mgr_internal*) ;int (* set_dispclk ) (struct clk_mgr_internal*,int) ;} ;
struct TYPE_13__ {int (* dpp_dppclk_control ) (TYPE_9__*,int,int) ;} ;
struct TYPE_11__ {struct pipe_ctx* pipe_ctx; } ;
struct TYPE_12__ {TYPE_2__ res_ctx; } ;
struct TYPE_10__ {int pipe_count; } ;


 int FUNC_0 (struct clk_mgr_internal*,struct dc_clocks*) ;
 int FUNC_1 (struct clk_mgr_internal*,int) ;
 int FUNC_2 (struct clk_mgr_internal*) ;
 int FUNC_3 (TYPE_9__*,int,int) ;
 int FUNC_4 (struct clk_mgr_internal*,int) ;
 int FUNC_5 (struct clk_mgr_internal*) ;

__attribute__((used)) static void FUNC_6(struct clk_mgr_internal *VAR_0, struct dc *VAR_1, struct dc_clocks *VAR_2)
{
 int VAR_3;
 int VAR_4 = FUNC_0(VAR_0, VAR_2);
 bool VAR_5 = VAR_2->dispclk_khz > VAR_2->dppclk_khz;



 VAR_0->funcs->set_dispclk(VAR_0, VAR_4);
 VAR_0->funcs->set_dprefclk(VAR_0);



 for (VAR_3 = 0; VAR_3 < VAR_1->res_pool->pipe_count; VAR_3++) {
  struct pipe_ctx *VAR_6 = &VAR_1->current_state->res_ctx.pipe_ctx[VAR_3];

  if (!VAR_6->plane_state)
   continue;

  VAR_6->plane_res.dpp->funcs->dpp_dppclk_control(
    VAR_6->plane_res.dpp,
    VAR_5,
    1);
 }


 if (VAR_4 != VAR_2->dispclk_khz) {
  VAR_0->funcs->set_dispclk(VAR_0, VAR_2->dispclk_khz);
  VAR_0->funcs->set_dprefclk(VAR_0);
 }


 VAR_0->base.clks.dispclk_khz = VAR_2->dispclk_khz;
 VAR_0->base.clks.dppclk_khz = VAR_2->dppclk_khz;
 VAR_0->base.clks.max_supported_dppclk_khz = VAR_2->max_supported_dppclk_khz;
}
