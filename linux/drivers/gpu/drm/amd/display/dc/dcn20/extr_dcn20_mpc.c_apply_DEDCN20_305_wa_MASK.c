
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mpc {TYPE_4__* ctx; } ;
struct dcn20_mpc {int dummy; } ;
typedef enum dc_lut_mode { ____Placeholder_dc_lut_mode } dc_lut_mode ;
struct TYPE_8__ {TYPE_2__* dc; } ;
struct TYPE_7__ {int dedcn20_305_wa; } ;
struct TYPE_5__ {scalar_t__ cm_in_bypass; } ;
struct TYPE_6__ {TYPE_3__ work_arounds; TYPE_1__ debug; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (int ,int ,int *,int) ;
 struct dcn20_mpc* FUNC_1 (struct mpc*) ;

void FUNC_2(
  struct mpc *VAR_3,
  int VAR_4, enum dc_lut_mode VAR_5,
  enum dc_lut_mode VAR_6)
{
 struct dcn20_mpc *VAR_7 = FUNC_1(VAR_3);

 if (VAR_3->ctx->dc->debug.cm_in_bypass) {
  FUNC_0(VAR_2[VAR_4], 0, VAR_2, 0);
  return;
 }

 if (VAR_3->ctx->dc->work_arounds.dedcn20_305_wa == 0) {

  return;
 }
 if (VAR_5 == VAR_0)




  FUNC_0(VAR_2[VAR_4], 0, VAR_2,
   VAR_6 == VAR_1 ? 1:2);
}
