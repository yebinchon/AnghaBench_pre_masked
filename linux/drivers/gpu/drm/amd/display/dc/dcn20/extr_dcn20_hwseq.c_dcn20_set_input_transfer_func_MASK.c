
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct dpp* dpp; } ;
struct pipe_ctx {TYPE_1__ plane_res; } ;
struct dpp {TYPE_2__* funcs; int degamma_params; } ;
struct dc_transfer_func {scalar_t__ type; int tf; int pwl; } ;
struct dc_plane_state {struct dc_transfer_func* in_transfer_func; } ;
struct TYPE_4__ {int (* dpp_set_degamma ) (struct dpp*,int ) ;int (* dpp_program_degamma_pwl ) (struct dpp*,int *) ;} ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;




 int FUNC_1 (struct dc_transfer_func const*,int *) ;
 int FUNC_2 (struct pipe_ctx*,struct dc_plane_state const*) ;
 int FUNC_3 (struct pipe_ctx*,struct dc_plane_state const*) ;
 int FUNC_4 (struct dpp*,int ) ;
 int FUNC_5 (struct dpp*,int *) ;
 int FUNC_6 (struct dpp*,int *) ;
 int FUNC_7 (struct dpp*,int ) ;
 int FUNC_8 (struct dpp*,int ) ;
 int FUNC_9 (struct dpp*,int ) ;
 int FUNC_10 (struct dpp*,int ) ;
 int FUNC_11 (struct dpp*,int ) ;

bool FUNC_12(struct pipe_ctx *VAR_7,
       const struct dc_plane_state *VAR_8)
{
 struct dpp *VAR_9 = VAR_7->plane_res.dpp;
 const struct dc_transfer_func *VAR_10 = ((void*)0);
 bool VAR_11 = 1;
 bool VAR_12 = 0;

 if (VAR_9 == ((void*)0) || VAR_8 == ((void*)0))
  return 0;

 FUNC_3(VAR_7, VAR_8);
 FUNC_2(VAR_7, VAR_8);

 if (VAR_8->in_transfer_func)
  VAR_10 = VAR_8->in_transfer_func;


 if (VAR_10 == ((void*)0)) {
  VAR_9->funcs->dpp_set_degamma(VAR_9,
    VAR_0);
  return 1;
 }

 if (VAR_10->type == VAR_5 || VAR_10->type == VAR_4)
  VAR_12 = 1;

 if (VAR_12 == 1) {
  if (VAR_10->type == VAR_5)
   VAR_9->funcs->dpp_program_degamma_pwl(VAR_9,
     &VAR_10->pwl);
  else if (VAR_10->type == VAR_4) {
   FUNC_1(VAR_10,
     &VAR_9->degamma_params);
   VAR_9->funcs->dpp_program_degamma_pwl(VAR_9,
    &VAR_9->degamma_params);
  }
  return 1;
 }



 if (VAR_10->type == VAR_6) {
  switch (VAR_10->tf) {
  case 128:
   VAR_9->funcs->dpp_set_degamma(VAR_9,
     VAR_1);
   break;
  case 131:
   VAR_9->funcs->dpp_set_degamma(VAR_9,
     VAR_2);
   break;
  case 130:
   VAR_9->funcs->dpp_set_degamma(VAR_9,
     VAR_0);
   break;
  case 129:
  default:
   VAR_11 = 0;
   break;
  }
 } else if (VAR_10->type == VAR_3)
  VAR_9->funcs->dpp_set_degamma(VAR_9,
    VAR_0);
 else {




  FUNC_0();
  VAR_9->funcs->dpp_set_degamma(VAR_9,
    VAR_0);
 }

 return VAR_11;
}
