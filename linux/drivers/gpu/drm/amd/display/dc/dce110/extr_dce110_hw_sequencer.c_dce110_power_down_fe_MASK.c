
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_19__ {TYPE_9__* mi; } ;
struct pipe_ctx {int pipe_idx; TYPE_8__ plane_res; } ;
struct TYPE_15__ {int (* enable_display_power_gating ) (struct dc*,int,int ,int ) ;} ;
struct dc {TYPE_7__* res_pool; TYPE_5__* ctx; TYPE_4__ hwss; TYPE_3__* current_state; } ;
struct TYPE_20__ {int inst; } ;
struct TYPE_18__ {TYPE_10__** transforms; } ;
struct TYPE_17__ {int (* transform_reset ) (TYPE_10__*) ;} ;
struct TYPE_16__ {int dc_bios; } ;
struct TYPE_13__ {TYPE_1__* pipe_ctx; } ;
struct TYPE_14__ {TYPE_2__ res_ctx; } ;
struct TYPE_12__ {scalar_t__ stream; } ;
struct TYPE_11__ {TYPE_6__* funcs; } ;


 int VAR_0 ;
 int FUNC_0 (struct dc*,int,int ,int ) ;
 int FUNC_1 (TYPE_10__*) ;

__attribute__((used)) static void FUNC_2(struct dc *VAR_1, struct pipe_ctx *VAR_2)
{
 int VAR_3 = VAR_2->plane_res.mi ?
  VAR_2->plane_res.mi->inst : VAR_2->pipe_idx;


 if (VAR_1->current_state->res_ctx.pipe_ctx[VAR_3].stream)
  return;

 VAR_1->hwss.enable_display_power_gating(
  VAR_1, VAR_3, VAR_1->ctx->dc_bios, VAR_0);

 VAR_1->res_pool->transforms[VAR_3]->funcs->transform_reset(
    VAR_1->res_pool->transforms[VAR_3]);
}
