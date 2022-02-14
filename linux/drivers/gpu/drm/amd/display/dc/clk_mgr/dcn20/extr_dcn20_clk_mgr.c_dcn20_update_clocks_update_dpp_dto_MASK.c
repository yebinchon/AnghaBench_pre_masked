
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_22__ {TYPE_8__* pipe_ctx; } ;
struct dc_state {TYPE_9__ res_ctx; } ;
struct TYPE_17__ {TYPE_3__* ctx; } ;
struct clk_mgr_internal {TYPE_11__* dccg; TYPE_4__ base; } ;
struct TYPE_19__ {int dppclk_khz; } ;
struct TYPE_20__ {TYPE_6__ bw; TYPE_5__* dpp; } ;
struct TYPE_21__ {TYPE_7__ plane_res; int plane_state; } ;
struct TYPE_18__ {int inst; } ;
struct TYPE_16__ {TYPE_2__* dc; } ;
struct TYPE_15__ {TYPE_1__* res_pool; } ;
struct TYPE_14__ {int pipe_count; } ;
struct TYPE_13__ {TYPE_10__* funcs; } ;
struct TYPE_12__ {int (* update_dpp_dto ) (TYPE_11__*,int,int,int) ;} ;


 int FUNC_0 (TYPE_11__*,int,int,int) ;

void FUNC_1(struct clk_mgr_internal *VAR_0,
  struct dc_state *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->base.ctx->dc->res_pool->pipe_count; VAR_2++) {
  int VAR_3, VAR_4;

  if (!VAR_1->res_ctx.pipe_ctx[VAR_2].plane_state)
   continue;

  VAR_3 = VAR_1->res_ctx.pipe_ctx[VAR_2].plane_res.dpp->inst;
  VAR_4 = VAR_1->res_ctx.pipe_ctx[VAR_2].plane_res.bw.dppclk_khz;
  VAR_0->dccg->funcs->update_dpp_dto(
    VAR_0->dccg, VAR_3, VAR_4, 0);
 }
}
