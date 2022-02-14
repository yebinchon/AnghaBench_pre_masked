
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pwl_params {int hw_points_num; int rgb_resulted; } ;
struct mpc {TYPE_3__* ctx; } ;
struct dcn20_mpc {int dummy; } ;
typedef enum dc_lut_mode { ____Placeholder_dc_lut_mode } dc_lut_mode ;
struct TYPE_6__ {TYPE_2__* dc; } ;
struct TYPE_4__ {scalar_t__ cm_in_bypass; } ;
struct TYPE_5__ {TYPE_1__ debug; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 (int ,int ,int *,int) ;
 struct dcn20_mpc* FUNC_1 (struct mpc*) ;
 int FUNC_2 (struct mpc*,int,int,int) ;
 int FUNC_3 (struct mpc*,int,int) ;
 int FUNC_4 (struct mpc*,int) ;
 int FUNC_5 (struct mpc*,int,int) ;
 int FUNC_6 (struct mpc*,int,int ,int ) ;
 int FUNC_7 (struct mpc*,int,struct pwl_params const*) ;
 int FUNC_8 (struct mpc*,int,struct pwl_params const*) ;

void FUNC_9(
  struct mpc *VAR_4,
  int VAR_5,
  const struct pwl_params *VAR_6)
{
 enum dc_lut_mode VAR_7;
 enum dc_lut_mode VAR_8;
 struct dcn20_mpc *VAR_9 = FUNC_1(VAR_4);

 if (VAR_4->ctx->dc->debug.cm_in_bypass) {
  FUNC_0(VAR_3[VAR_5], 0, VAR_3, 0);
  return;
 }

 if (VAR_6 == ((void*)0)) {
  FUNC_0(VAR_3[VAR_5], 0, VAR_3, 0);
  return;
 }

 VAR_7 = FUNC_4(VAR_4, VAR_5);
 if (VAR_7 == VAR_0 || VAR_7 == VAR_1)
  VAR_8 = VAR_2;
 else
  VAR_8 = VAR_1;

 FUNC_5(VAR_4, VAR_5, 1);
 FUNC_3(VAR_4, VAR_5, VAR_8 == VAR_1 ? 1:0);

 if (VAR_8 == VAR_1)
  FUNC_7(VAR_4, VAR_5, VAR_6);
 else
  FUNC_8(VAR_4, VAR_5, VAR_6);

 FUNC_2(VAR_4, VAR_5, VAR_7, VAR_8);

 FUNC_6(
   VAR_4, VAR_5, VAR_6->rgb_resulted, VAR_6->hw_points_num);

 FUNC_0(VAR_3[VAR_5], 0, VAR_3,
  VAR_8 == VAR_1 ? 1:2);
}
