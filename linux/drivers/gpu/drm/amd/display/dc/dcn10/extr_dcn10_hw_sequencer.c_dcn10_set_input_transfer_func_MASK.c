
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


struct TYPE_7__ {struct dpp* dpp; } ;
struct pipe_ctx {TYPE_1__ plane_res; } ;
struct dpp {int degamma_params; TYPE_5__* funcs; TYPE_4__* ctx; } ;
struct dc_transfer_func {scalar_t__ type; int tf; } ;
struct dc_plane_state {TYPE_6__* gamma_correction; int format; struct dc_transfer_func* in_transfer_func; } ;
struct TYPE_12__ {int is_identity; } ;
struct TYPE_11__ {int (* dpp_program_degamma_pwl ) (struct dpp*,int *) ;int (* dpp_set_degamma ) (struct dpp*,int ) ;int (* dpp_program_input_lut ) (struct dpp*,TYPE_6__*) ;} ;
struct TYPE_10__ {TYPE_3__* dc; } ;
struct TYPE_8__ {int always_use_regamma; } ;
struct TYPE_9__ {TYPE_2__ debug; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;




 int FUNC_0 (struct dc_transfer_func const*,int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct dpp*,TYPE_6__*) ;
 int FUNC_3 (struct dpp*,int ) ;
 int FUNC_4 (struct dpp*,int ) ;
 int FUNC_5 (struct dpp*,int ) ;
 int FUNC_6 (struct dpp*,int ) ;
 int FUNC_7 (struct dpp*,int ) ;
 int FUNC_8 (struct dpp*,int *) ;

__attribute__((used)) static bool FUNC_9(struct pipe_ctx *VAR_5,
       const struct dc_plane_state *VAR_6)
{
 struct dpp *VAR_7 = VAR_5->plane_res.dpp;
 const struct dc_transfer_func *VAR_8 = ((void*)0);
 bool VAR_9 = 1;

 if (VAR_7 == ((void*)0))
  return 0;

 if (VAR_6->in_transfer_func)
  VAR_8 = VAR_6->in_transfer_func;

 if (VAR_6->gamma_correction &&
  !VAR_7->ctx->dc->debug.always_use_regamma
  && !VAR_6->gamma_correction->is_identity
   && FUNC_1(VAR_6->format))
  VAR_7->funcs->dpp_program_input_lut(VAR_7, VAR_6->gamma_correction);

 if (VAR_8 == ((void*)0))
  VAR_7->funcs->dpp_set_degamma(VAR_7, VAR_0);
 else if (VAR_8->type == VAR_4) {
  switch (VAR_8->tf) {
  case 128:
   VAR_7->funcs->dpp_set_degamma(VAR_7, VAR_1);
   break;
  case 131:
   VAR_7->funcs->dpp_set_degamma(VAR_7, VAR_2);
   break;
  case 130:
   VAR_7->funcs->dpp_set_degamma(VAR_7, VAR_0);
   break;
  case 129:
  default:
   VAR_9 = 0;
   break;
  }
 } else if (VAR_8->type == VAR_3) {
  VAR_7->funcs->dpp_set_degamma(VAR_7, VAR_0);
 } else {
  FUNC_0(VAR_8,
     &VAR_7->degamma_params);
  VAR_7->funcs->dpp_program_degamma_pwl(VAR_7,
    &VAR_7->degamma_params);
  VAR_9 = 1;
 }

 return VAR_9;
}
