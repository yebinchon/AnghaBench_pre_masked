
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pwl_params {int dummy; } ;
struct TYPE_5__ {struct dpp* dpp; } ;
struct pipe_ctx {TYPE_2__ plane_res; } ;
struct dpp {TYPE_1__* funcs; struct pwl_params regamma_params; } ;
struct dc_plane_state {TYPE_3__* blend_tf; } ;
struct TYPE_6__ {scalar_t__ type; struct pwl_params pwl; } ;
struct TYPE_4__ {int (* dpp_program_blnd_lut ) (struct dpp*,struct pwl_params*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_3__*,struct pwl_params*,int) ;
 int FUNC_1 (struct dpp*,struct pwl_params*) ;

__attribute__((used)) static bool FUNC_2(
 struct pipe_ctx *VAR_2, const struct dc_plane_state *VAR_3)
{
 struct dpp *VAR_4 = VAR_2->plane_res.dpp;
 bool VAR_5 = 1;
 struct pwl_params *VAR_6 = ((void*)0);

 if (VAR_3->blend_tf) {
  if (VAR_3->blend_tf->type == VAR_1)
   VAR_6 = &VAR_3->blend_tf->pwl;
  else if (VAR_3->blend_tf->type == VAR_0) {
   FUNC_0(
     VAR_3->blend_tf,
     &VAR_4->regamma_params, 0);
   VAR_6 = &VAR_4->regamma_params;
  }
 }
 VAR_5 = VAR_4->funcs->dpp_program_blnd_lut(VAR_4, VAR_6);

 return VAR_5;
}
