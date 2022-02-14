
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct dcn20_opp_shift {int dummy; } ;
struct dcn20_opp_registers {int dummy; } ;
struct dcn20_opp_mask {int dummy; } ;
struct TYPE_2__ {int * funcs; int inst; struct dc_context* ctx; } ;
struct dcn20_opp {struct dcn20_opp_mask const* opp_mask; struct dcn20_opp_shift const* opp_shift; struct dcn20_opp_registers const* regs; TYPE_1__ base; } ;
struct dc_context {int dummy; } ;


 int VAR_0 ;

void FUNC_0(struct dcn20_opp *VAR_1,
 struct dc_context *VAR_2,
 uint32_t VAR_3,
 const struct dcn20_opp_registers *VAR_4,
 const struct dcn20_opp_shift *VAR_5,
 const struct dcn20_opp_mask *VAR_6)
{
 VAR_1->base.ctx = VAR_2;
 VAR_1->base.inst = VAR_3;
 VAR_1->base.funcs = &VAR_0;

 VAR_1->regs = VAR_4;
 VAR_1->opp_shift = VAR_5;
 VAR_1->opp_mask = VAR_6;
}
