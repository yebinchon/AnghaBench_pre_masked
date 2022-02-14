
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


struct TYPE_12__ {size_t mpcc_inst; TYPE_1__* dpp; struct hubp* hubp; } ;
struct TYPE_10__ {struct output_pixel_processor* opp; } ;
struct pipe_ctx {TYPE_5__ plane_res; TYPE_3__ stream_res; } ;
struct mpc_tree {int dummy; } ;
struct output_pixel_processor {int* mpcc_disconnect_pending; struct mpc_tree mpc_tree_params; } ;
struct mpcc {int dummy; } ;
struct mpc {TYPE_4__* funcs; } ;
struct hubp {TYPE_6__* funcs; } ;
struct TYPE_14__ {scalar_t__ sanity_checks; } ;
struct dc {int optimized_required; TYPE_7__ debug; TYPE_2__* res_pool; } ;
struct TYPE_13__ {int (* hubp_disconnect ) (struct hubp*) ;} ;
struct TYPE_11__ {int (* remove_mpcc ) (struct mpc*,struct mpc_tree*,struct mpcc*) ;struct mpcc* (* get_mpcc_for_dpp ) (struct mpc_tree*,int) ;} ;
struct TYPE_9__ {struct mpc* mpc; } ;
struct TYPE_8__ {int inst; } ;


 int FUNC_0 (struct dc*) ;
 struct mpcc* FUNC_1 (struct mpc_tree*,int) ;
 int FUNC_2 (struct mpc*,struct mpc_tree*,struct mpcc*) ;
 int FUNC_3 (struct hubp*) ;

void FUNC_4(struct dc *VAR_0, struct pipe_ctx *VAR_1)
{
 struct hubp *VAR_2 = VAR_1->plane_res.hubp;
 int VAR_3 = VAR_1->plane_res.dpp->inst;
 struct mpc *VAR_4 = VAR_0->res_pool->mpc;
 struct mpc_tree *VAR_5;
 struct mpcc *VAR_6 = ((void*)0);
 struct output_pixel_processor *VAR_7 = VAR_1->stream_res.opp;

 VAR_5 = &(VAR_7->mpc_tree_params);
 VAR_6 = VAR_4->funcs->get_mpcc_for_dpp(VAR_5, VAR_3);


 if (VAR_6 == ((void*)0))
  return;

 VAR_4->funcs->remove_mpcc(VAR_4, VAR_5, VAR_6);
 if (VAR_7 != ((void*)0))
  VAR_7->mpcc_disconnect_pending[VAR_1->plane_res.mpcc_inst] = 1;

 VAR_0->optimized_required = 1;

 if (VAR_2->funcs->hubp_disconnect)
  VAR_2->funcs->hubp_disconnect(VAR_2);

 if (VAR_0->debug.sanity_checks)
  FUNC_0(VAR_0);
}
