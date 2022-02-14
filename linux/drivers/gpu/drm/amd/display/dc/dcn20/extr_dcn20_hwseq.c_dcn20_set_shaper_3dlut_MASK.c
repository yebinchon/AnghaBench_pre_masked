
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


struct pwl_params {int dummy; } ;
struct TYPE_7__ {struct dpp* dpp; } ;
struct pipe_ctx {TYPE_1__ plane_res; } ;
struct dpp {TYPE_5__* funcs; struct pwl_params shaper_params; } ;
struct dc_plane_state {TYPE_4__* lut3d_func; TYPE_6__* in_shaper_func; } ;
struct TYPE_12__ {scalar_t__ type; struct pwl_params pwl; } ;
struct TYPE_11__ {int (* dpp_program_shaper_lut ) (struct dpp*,struct pwl_params*) ;int (* dpp_program_3dlut ) (struct dpp*,int *) ;int (* dpp_set_hdr_multiplier ) (struct dpp*,int) ;} ;
struct TYPE_8__ {int initialized; } ;
struct TYPE_9__ {TYPE_2__ bits; } ;
struct TYPE_10__ {int hdr_multiplier; TYPE_3__ state; int lut_3d; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_6__*,struct pwl_params*,int) ;
 int FUNC_1 (struct dpp*,struct pwl_params*) ;
 int FUNC_2 (struct dpp*,int *) ;
 int FUNC_3 (struct dpp*,int *) ;
 int FUNC_4 (struct dpp*,int) ;
 int FUNC_5 (struct dpp*,int) ;

__attribute__((used)) static bool FUNC_6(
 struct pipe_ctx *VAR_2, const struct dc_plane_state *VAR_3)
{
 struct dpp *VAR_4 = VAR_2->plane_res.dpp;
 bool VAR_5 = 1;
 struct pwl_params *VAR_6 = ((void*)0);

 if (VAR_3->in_shaper_func) {
  if (VAR_3->in_shaper_func->type == VAR_1)
   VAR_6 = &VAR_3->in_shaper_func->pwl;
  else if (VAR_3->in_shaper_func->type == VAR_0) {
   FUNC_0(
     VAR_3->in_shaper_func,
     &VAR_4->shaper_params, 1);
   VAR_6 = &VAR_4->shaper_params;
  }
 }

 VAR_5 = VAR_4->funcs->dpp_program_shaper_lut(VAR_4, VAR_6);
 if (VAR_3->lut3d_func &&
  VAR_3->lut3d_func->state.bits.initialized == 1)
  VAR_5 = VAR_4->funcs->dpp_program_3dlut(VAR_4,
        &VAR_3->lut3d_func->lut_3d);
 else
  VAR_5 = VAR_4->funcs->dpp_program_3dlut(VAR_4, ((void*)0));

 if (VAR_3->lut3d_func &&
  VAR_3->lut3d_func->state.bits.initialized == 1 &&
  VAR_3->lut3d_func->hdr_multiplier != 0)
  VAR_4->funcs->dpp_set_hdr_multiplier(VAR_4,
    VAR_3->lut3d_func->hdr_multiplier);
 else
  VAR_4->funcs->dpp_set_hdr_multiplier(VAR_4, 0x1f000);

 return VAR_5;
}
