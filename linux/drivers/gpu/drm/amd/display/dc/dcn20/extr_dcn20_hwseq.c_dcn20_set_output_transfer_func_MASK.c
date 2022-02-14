
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


struct pwl_params {int dummy; } ;
struct TYPE_20__ {TYPE_6__* opp; } ;
struct TYPE_15__ {TYPE_1__* hubp; } ;
struct pipe_ctx {TYPE_9__* stream; int * top_pipe; TYPE_7__ stream_res; TYPE_2__ plane_res; } ;
struct mpc {TYPE_10__* funcs; struct pwl_params blender_params; } ;
struct dc_stream_state {TYPE_11__* out_transfer_func; } ;
struct TYPE_22__ {TYPE_8__* out_transfer_func; } ;
struct TYPE_21__ {scalar_t__ type; } ;
struct TYPE_19__ {TYPE_5__* ctx; } ;
struct TYPE_18__ {TYPE_4__* dc; } ;
struct TYPE_17__ {TYPE_3__* res_pool; } ;
struct TYPE_16__ {struct mpc* mpc; } ;
struct TYPE_14__ {int inst; } ;
struct TYPE_13__ {scalar_t__ type; struct pwl_params pwl; } ;
struct TYPE_12__ {int (* set_output_gamma ) (struct mpc*,int,struct pwl_params*) ;int (* power_on_mpc_mem_pwr ) (struct mpc*,int,int) ;} ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_11__*,struct pwl_params*,int) ;
 int FUNC_2 (struct mpc*,int,int) ;
 int FUNC_3 (struct mpc*,int,struct pwl_params*) ;

bool FUNC_4(struct pipe_ctx *VAR_3,
    const struct dc_stream_state *VAR_4)
{
 int VAR_5 = VAR_3->plane_res.hubp->inst;
 struct mpc *VAR_6 = VAR_3->stream_res.opp->ctx->dc->res_pool->mpc;
 struct pwl_params *VAR_7 = ((void*)0);







 if (VAR_6->funcs->power_on_mpc_mem_pwr)
  VAR_6->funcs->power_on_mpc_mem_pwr(VAR_6, VAR_5, 1);
 if (VAR_3->top_pipe == ((void*)0)
   && VAR_6->funcs->set_output_gamma && VAR_4->out_transfer_func) {
  if (VAR_4->out_transfer_func->type == VAR_1)
   VAR_7 = &VAR_4->out_transfer_func->pwl;
  else if (VAR_3->stream->out_transfer_func->type ==
   VAR_0 &&
   FUNC_1(
   VAR_4->out_transfer_func,
   &VAR_6->blender_params, 0))
   VAR_7 = &VAR_6->blender_params;



  if (VAR_4->out_transfer_func->type == VAR_2)
   FUNC_0();
 }



 VAR_6->funcs->set_output_gamma(VAR_6, VAR_5, VAR_7);

 return 1;
}
