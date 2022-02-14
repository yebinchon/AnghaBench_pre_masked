
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dcn_hubbub_shift {int dummy; } ;
struct dcn_hubbub_registers {int dummy; } ;
struct dcn_hubbub_mask {int dummy; } ;
struct TYPE_2__ {int * funcs; struct dc_context* ctx; } ;
struct dcn20_hubbub {int debug_test_index_pstate; struct dcn_hubbub_mask const* masks; struct dcn_hubbub_shift const* shifts; struct dcn_hubbub_registers const* regs; TYPE_1__ base; } ;
struct dc_context {int dummy; } ;


 int VAR_0 ;

void FUNC_0(struct dcn20_hubbub *VAR_1,
 struct dc_context *VAR_2,
 const struct dcn_hubbub_registers *VAR_3,
 const struct dcn_hubbub_shift *VAR_4,
 const struct dcn_hubbub_mask *VAR_5)
{
 VAR_1->base.ctx = VAR_2;

 VAR_1->base.funcs = &VAR_0;

 VAR_1->regs = VAR_3;
 VAR_1->shifts = VAR_4;
 VAR_1->masks = VAR_5;

 VAR_1->debug_test_index_pstate = 0xB;
}
