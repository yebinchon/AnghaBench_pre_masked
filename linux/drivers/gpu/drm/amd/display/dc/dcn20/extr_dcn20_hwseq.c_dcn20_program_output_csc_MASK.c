
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


typedef int uint16_t ;
struct TYPE_9__ {TYPE_2__* hubp; } ;
struct pipe_ctx {TYPE_5__* stream; TYPE_3__ plane_res; } ;
struct mpc {TYPE_6__* funcs; } ;
struct dc {TYPE_1__* res_pool; } ;
typedef enum mpc_output_csc_mode { ____Placeholder_mpc_output_csc_mode } mpc_output_csc_mode ;
typedef enum dc_color_space { ____Placeholder_dc_color_space } dc_color_space ;
struct TYPE_12__ {int (* set_ocsc_default ) (struct mpc*,int,int,int) ;int (* set_output_csc ) (struct mpc*,int,int *,int) ;int (* power_on_mpc_mem_pwr ) (struct mpc*,int,int) ;} ;
struct TYPE_10__ {int enable_adjustment; } ;
struct TYPE_11__ {TYPE_4__ csc_color_matrix; } ;
struct TYPE_8__ {int inst; } ;
struct TYPE_7__ {struct mpc* mpc; } ;


 int VAR_0 ;
 int FUNC_0 (struct mpc*,int,int) ;
 int FUNC_1 (struct mpc*,int,int *,int) ;
 int FUNC_2 (struct mpc*,int,int,int) ;

void FUNC_3(struct dc *VAR_1,
  struct pipe_ctx *VAR_2,
  enum dc_color_space VAR_3,
  uint16_t *VAR_4,
  int VAR_5)
{
 struct mpc *VAR_6 = VAR_1->res_pool->mpc;
 enum mpc_output_csc_mode VAR_7 = VAR_0;
 int VAR_8 = VAR_2->plane_res.hubp->inst;

 if (VAR_6->funcs->power_on_mpc_mem_pwr)
  VAR_6->funcs->power_on_mpc_mem_pwr(VAR_6, VAR_8, 1);

 if (VAR_2->stream->csc_color_matrix.enable_adjustment == 1) {
  if (VAR_6->funcs->set_output_csc != ((void*)0))
   VAR_6->funcs->set_output_csc(VAR_6,
     VAR_5,
     VAR_4,
     VAR_7);
 } else {
  if (VAR_6->funcs->set_ocsc_default != ((void*)0))
   VAR_6->funcs->set_ocsc_default(VAR_6,
     VAR_5,
     VAR_3,
     VAR_7);
 }
}
