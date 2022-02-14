
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int hw_points_num; } ;
struct transform {TYPE_2__* funcs; TYPE_3__ regamma_params; } ;
struct TYPE_6__ {struct transform* xfm; } ;
struct pipe_ctx {TYPE_1__ plane_res; } ;
struct dc_stream_state {TYPE_4__* out_transfer_func; } ;
struct TYPE_9__ {scalar_t__ type; scalar_t__ tf; } ;
struct TYPE_7__ {int (* opp_power_on_regamma_lut ) (struct transform*,int) ;int (* opp_set_regamma_mode ) (struct transform*,int ) ;int (* opp_program_regamma_pwl ) (struct transform*,TYPE_3__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_1 (struct transform*,int) ;
 int FUNC_2 (struct transform*,int ) ;
 int FUNC_3 (struct transform*,TYPE_3__*) ;
 int FUNC_4 (struct transform*,int ) ;
 int FUNC_5 (struct transform*,int ) ;
 int FUNC_6 (struct transform*,int) ;

__attribute__((used)) static bool
FUNC_7(struct pipe_ctx *VAR_6,
    const struct dc_stream_state *VAR_7)
{
 struct transform *VAR_8 = VAR_6->plane_res.xfm;

 VAR_8->funcs->opp_power_on_regamma_lut(VAR_8, 1);
 VAR_8->regamma_params.hw_points_num = VAR_0;

 if (VAR_7->out_transfer_func &&
     VAR_7->out_transfer_func->type == VAR_4 &&
     VAR_7->out_transfer_func->tf == VAR_5) {
  VAR_8->funcs->opp_set_regamma_mode(VAR_8, VAR_2);
 } else if (FUNC_0(VAR_7->out_transfer_func,
        &VAR_8->regamma_params)) {
  VAR_8->funcs->opp_program_regamma_pwl(VAR_8, &VAR_8->regamma_params);
  VAR_8->funcs->opp_set_regamma_mode(VAR_8, VAR_3);
 } else {
  VAR_8->funcs->opp_set_regamma_mode(VAR_8, VAR_1);
 }

 VAR_8->funcs->opp_power_on_regamma_lut(VAR_8, 0);

 return 1;
}
