
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int alpha_en; int depth; } ;
struct TYPE_12__ {TYPE_3__ lb_params; } ;
struct TYPE_10__ {TYPE_6__ scl_data; TYPE_5__* dpp; } ;
struct pipe_ctx {TYPE_4__ plane_res; scalar_t__ bottom_pipe; TYPE_2__* plane_state; } ;
struct TYPE_11__ {TYPE_1__* funcs; } ;
struct TYPE_8__ {int per_pixel_alpha; } ;
struct TYPE_7__ {int (* dpp_set_scaler ) (TYPE_5__*,TYPE_6__*) ;} ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*,TYPE_6__*) ;

__attribute__((used)) static void FUNC_1(struct pipe_ctx *VAR_1)
{
 bool VAR_2 =
   VAR_1->plane_state->per_pixel_alpha && VAR_1->bottom_pipe;

 VAR_1->plane_res.scl_data.lb_params.alpha_en = VAR_2;
 VAR_1->plane_res.scl_data.lb_params.depth = VAR_0;

 VAR_1->plane_res.dpp->funcs->dpp_set_scaler(
   VAR_1->plane_res.dpp, &VAR_1->plane_res.scl_data);
}
