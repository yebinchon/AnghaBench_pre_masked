
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dcn20_dwbc_shift {int dummy; } ;
struct dcn20_dwbc_registers {int dummy; } ;
struct dcn20_dwbc_mask {int dummy; } ;
struct TYPE_2__ {int inst; int * funcs; struct dc_context* ctx; } ;
struct dcn20_dwbc {struct dcn20_dwbc_mask const* dwbc_mask; struct dcn20_dwbc_shift const* dwbc_shift; struct dcn20_dwbc_registers const* dwbc_regs; TYPE_1__ base; } ;
struct dc_context {int dummy; } ;


 int VAR_0 ;

void FUNC_0(struct dcn20_dwbc *VAR_1,
  struct dc_context *VAR_2,
  const struct dcn20_dwbc_registers *VAR_3,
  const struct dcn20_dwbc_shift *VAR_4,
  const struct dcn20_dwbc_mask *VAR_5,
  int VAR_6)
{
 VAR_1->base.ctx = VAR_2;

 VAR_1->base.inst = VAR_6;
 VAR_1->base.funcs = &VAR_0;

 VAR_1->dwbc_regs = VAR_3;
 VAR_1->dwbc_shift = VAR_4;
 VAR_1->dwbc_mask = VAR_5;
}
