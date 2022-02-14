
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
struct mpc {int dummy; } ;
struct TYPE_10__ {int ctx; } ;
struct dcn20_mpc {TYPE_5__ base; TYPE_4__* mpc_mask; TYPE_2__* mpc_shift; } ;
struct TYPE_8__ {int csc_c12; int csc_c11; } ;
struct TYPE_6__ {int csc_c12; int csc_c11; } ;
struct color_matrices_reg {void* csc_c33_c34; void* csc_c11_c12; TYPE_3__ masks; TYPE_1__ shifts; } ;
typedef enum mpc_output_csc_mode { ____Placeholder_mpc_output_csc_mode } mpc_output_csc_mode ;
struct TYPE_9__ {int MPC_OCSC_C12_A; int MPC_OCSC_C11_A; } ;
struct TYPE_7__ {int MPC_OCSC_C12_A; int MPC_OCSC_C11_A; } ;


 int FUNC_0 () ;
 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int) ;
 struct dcn20_mpc* FUNC_3 (struct mpc*) ;
 int FUNC_4 (int ,int const*,struct color_matrices_reg*) ;

void FUNC_5(
  struct mpc *VAR_8,
  int VAR_9,
  const uint16_t *VAR_10,
  enum mpc_output_csc_mode VAR_11)
{
 struct dcn20_mpc *VAR_12 = FUNC_3(VAR_8);
 struct color_matrices_reg VAR_13;

 FUNC_2(VAR_4[VAR_9], 0, VAR_5, VAR_11);

 if (VAR_11 == VAR_7)
  return;

 if (VAR_10 == ((void*)0)) {
  FUNC_0();
  return;
 }

 VAR_13.shifts.csc_c11 = VAR_12->mpc_shift->MPC_OCSC_C11_A;
 VAR_13.masks.csc_c11 = VAR_12->mpc_mask->MPC_OCSC_C11_A;
 VAR_13.shifts.csc_c12 = VAR_12->mpc_shift->MPC_OCSC_C12_A;
 VAR_13.masks.csc_c12 = VAR_12->mpc_mask->MPC_OCSC_C12_A;

 if (VAR_11 == VAR_6) {
  VAR_13.csc_c11_c12 = FUNC_1(VAR_0[VAR_9]);
  VAR_13.csc_c33_c34 = FUNC_1(VAR_2[VAR_9]);
 } else {
  VAR_13.csc_c11_c12 = FUNC_1(VAR_1[VAR_9]);
  VAR_13.csc_c33_c34 = FUNC_1(VAR_3[VAR_9]);
 }
 FUNC_4(
   VAR_12->base.ctx,
   VAR_10,
   &VAR_13);
}
