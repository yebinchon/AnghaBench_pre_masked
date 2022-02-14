
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dcn_mpc_shift {int dummy; } ;
struct dcn_mpc_registers {int dummy; } ;
struct dcn_mpc_mask {int dummy; } ;
struct TYPE_2__ {int * mpcc_array; int * funcs; struct dc_context* ctx; } ;
struct dcn10_mpc {int num_mpcc; TYPE_1__ base; scalar_t__ mpcc_in_use_mask; struct dcn_mpc_mask const* mpc_mask; struct dcn_mpc_shift const* mpc_shift; struct dcn_mpc_registers const* mpc_regs; } ;
struct dc_context {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;

void FUNC_1(struct dcn10_mpc *VAR_2,
 struct dc_context *VAR_3,
 const struct dcn_mpc_registers *VAR_4,
 const struct dcn_mpc_shift *VAR_5,
 const struct dcn_mpc_mask *VAR_6,
 int VAR_7)
{
 int VAR_8;

 VAR_2->base.ctx = VAR_3;

 VAR_2->base.funcs = &VAR_1;

 VAR_2->mpc_regs = VAR_4;
 VAR_2->mpc_shift = VAR_5;
 VAR_2->mpc_mask = VAR_6;

 VAR_2->mpcc_in_use_mask = 0;
 VAR_2->num_mpcc = VAR_7;

 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++)
  FUNC_0(&VAR_2->base.mpcc_array[VAR_8], VAR_8);
}
