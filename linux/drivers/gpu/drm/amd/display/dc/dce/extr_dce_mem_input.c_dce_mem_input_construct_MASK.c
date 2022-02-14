
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dce_mem_input_shift {int dummy; } ;
struct dce_mem_input_registers {int dummy; } ;
struct dce_mem_input_mask {int dummy; } ;
struct TYPE_2__ {int inst; int * funcs; struct dc_context* ctx; } ;
struct dce_mem_input {struct dce_mem_input_mask const* masks; struct dce_mem_input_shift const* shifts; struct dce_mem_input_registers const* regs; TYPE_1__ base; } ;
struct dc_context {int dummy; } ;


 int VAR_0 ;

void FUNC_0(
 struct dce_mem_input *VAR_1,
 struct dc_context *VAR_2,
 int VAR_3,
 const struct dce_mem_input_registers *VAR_4,
 const struct dce_mem_input_shift *VAR_5,
 const struct dce_mem_input_mask *VAR_6)
{
 VAR_1->base.ctx = VAR_2;

 VAR_1->base.inst = VAR_3;
 VAR_1->base.funcs = &VAR_0;

 VAR_1->regs = VAR_4;
 VAR_1->shifts = VAR_5;
 VAR_1->masks = VAR_6;
}
