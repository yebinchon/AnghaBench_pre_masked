
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct dc_context* ctx; int * funcs; } ;
struct dce_mem_input {TYPE_1__ base; } ;
struct dc_context {int dummy; } ;


 int VAR_0 ;

void FUNC_0(
 struct dce_mem_input *VAR_1,
 struct dc_context *VAR_2)
{
 VAR_1->base.funcs = &VAR_0;
 VAR_1->base.ctx = VAR_2;
}
