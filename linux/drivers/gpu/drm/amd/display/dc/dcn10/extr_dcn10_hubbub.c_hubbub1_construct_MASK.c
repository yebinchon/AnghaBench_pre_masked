
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hubbub {int dummy; } ;
struct dcn_hubbub_shift {int dummy; } ;
struct dcn_hubbub_registers {int dummy; } ;
struct dcn_hubbub_mask {int dummy; } ;
struct TYPE_2__ {int * funcs; struct dc_context* ctx; } ;
struct dcn10_hubbub {int debug_test_index_pstate; struct dcn_hubbub_mask const* masks; struct dcn_hubbub_shift const* shifts; struct dcn_hubbub_registers const* regs; TYPE_1__ base; } ;
struct dc_context {scalar_t__ dce_version; } ;


 scalar_t__ VAR_0 ;
 struct dcn10_hubbub* FUNC_0 (struct hubbub*) ;
 int VAR_1 ;

void FUNC_1(struct hubbub *VAR_2,
 struct dc_context *VAR_3,
 const struct dcn_hubbub_registers *VAR_4,
 const struct dcn_hubbub_shift *VAR_5,
 const struct dcn_hubbub_mask *VAR_6)
{
 struct dcn10_hubbub *VAR_7 = FUNC_0(VAR_2);

 VAR_7->base.ctx = VAR_3;

 VAR_7->base.funcs = &VAR_1;

 VAR_7->regs = VAR_4;
 VAR_7->shifts = VAR_5;
 VAR_7->masks = VAR_6;

 VAR_7->debug_test_index_pstate = 0x7;
 if (VAR_3->dce_version == VAR_0)
  VAR_7->debug_test_index_pstate = 0xB;
}
