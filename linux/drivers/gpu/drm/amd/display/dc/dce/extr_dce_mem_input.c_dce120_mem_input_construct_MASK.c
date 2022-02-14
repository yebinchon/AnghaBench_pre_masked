
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dce_mem_input_shift {int dummy; } ;
struct dce_mem_input_registers {int dummy; } ;
struct dce_mem_input_mask {int dummy; } ;
struct TYPE_2__ {int * funcs; } ;
struct dce_mem_input {TYPE_1__ base; } ;
struct dc_context {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dce_mem_input*,struct dc_context*,int,struct dce_mem_input_registers const*,struct dce_mem_input_shift const*,struct dce_mem_input_mask const*) ;

void FUNC_1(
 struct dce_mem_input *VAR_1,
 struct dc_context *VAR_2,
 int VAR_3,
 const struct dce_mem_input_registers *VAR_4,
 const struct dce_mem_input_shift *VAR_5,
 const struct dce_mem_input_mask *VAR_6)
{
 FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 VAR_1->base.funcs = &VAR_0;
}
