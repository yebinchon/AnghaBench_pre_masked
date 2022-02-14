
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {struct dpp* dpp; } ;
struct pipe_ctx {TYPE_1__ plane_res; } ;
struct TYPE_11__ {int hw_points_num; } ;
struct dpp {TYPE_3__ regamma_params; TYPE_2__* funcs; } ;
struct dc_stream_state {TYPE_6__* out_transfer_func; int * ctx; } ;
struct TYPE_12__ {scalar_t__ type; scalar_t__ tf; } ;
struct TYPE_10__ {int (* dpp_program_regamma_pwl ) (struct dpp*,TYPE_3__*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_6__*,TYPE_3__*,int) ;
 int FUNC_1 (int *,TYPE_6__*,int ) ;
 int FUNC_2 (struct dpp*,TYPE_3__*,int ) ;
 int FUNC_3 (struct dpp*,TYPE_3__*,int ) ;
 int FUNC_4 (struct dpp*,TYPE_3__*,int ) ;

__attribute__((used)) static bool
FUNC_5(struct pipe_ctx *VAR_6,
          const struct dc_stream_state *VAR_7)
{
 struct dpp *VAR_8 = VAR_6->plane_res.dpp;

 if (VAR_8 == ((void*)0))
  return 0;

 VAR_8->regamma_params.hw_points_num = VAR_0;

 if (VAR_7->out_transfer_func &&
     VAR_7->out_transfer_func->type == VAR_4 &&
     VAR_7->out_transfer_func->tf == VAR_5)
  VAR_8->funcs->dpp_program_regamma_pwl(VAR_8, ((void*)0), VAR_2);




 else if (FUNC_0(
   VAR_7->out_transfer_func,
   &VAR_8->regamma_params, 0)) {
  VAR_8->funcs->dpp_program_regamma_pwl(
    VAR_8,
    &VAR_8->regamma_params, VAR_3);
 } else
  VAR_8->funcs->dpp_program_regamma_pwl(VAR_8, ((void*)0), VAR_1);

 if (VAR_7 != ((void*)0) && VAR_7->ctx != ((void*)0) &&
   VAR_7->out_transfer_func != ((void*)0)) {
  FUNC_1(VAR_7->ctx,
    VAR_7->out_transfer_func,
    VAR_8->regamma_params.hw_points_num);
 }

 return 1;
}
