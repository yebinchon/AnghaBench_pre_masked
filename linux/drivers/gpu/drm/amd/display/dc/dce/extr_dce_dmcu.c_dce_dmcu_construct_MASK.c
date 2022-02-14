
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmcu {scalar_t__ cached_wait_loop_number; int * funcs; struct dc_context* ctx; } ;
struct dce_dmcu_shift {int dummy; } ;
struct dce_dmcu_registers {int dummy; } ;
struct dce_dmcu_mask {int dummy; } ;
struct dce_dmcu {struct dce_dmcu_mask const* dmcu_mask; struct dce_dmcu_shift const* dmcu_shift; struct dce_dmcu_registers const* regs; struct dmcu base; } ;
struct dc_context {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(
 struct dce_dmcu *VAR_1,
 struct dc_context *VAR_2,
 const struct dce_dmcu_registers *VAR_3,
 const struct dce_dmcu_shift *VAR_4,
 const struct dce_dmcu_mask *VAR_5)
{
 struct dmcu *VAR_6 = &VAR_1->base;

 VAR_6->ctx = VAR_2;
 VAR_6->funcs = &VAR_0;
 VAR_6->cached_wait_loop_number = 0;

 VAR_1->regs = VAR_3;
 VAR_1->dmcu_shift = VAR_4;
 VAR_1->dmcu_mask = VAR_5;
}
