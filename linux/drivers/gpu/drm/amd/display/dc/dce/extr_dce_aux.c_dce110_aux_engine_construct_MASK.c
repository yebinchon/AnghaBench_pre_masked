
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint32_t ;
struct dce_aux {void* inst; scalar_t__ max_defer_write_retry; scalar_t__ delay; struct dc_context* ctx; int * ddc; } ;
struct dce110_aux_registers {int dummy; } ;
struct dc_context {int dummy; } ;
struct aux_engine_dce110 {struct dce_aux base; struct dce110_aux_registers const* regs; void* timeout_period; } ;



struct dce_aux *FUNC_0(struct aux_engine_dce110 *VAR_0,
  struct dc_context *VAR_1,
  uint32_t VAR_2,
  uint32_t VAR_3,
  const struct dce110_aux_registers *VAR_4)
{
 VAR_0->base.ddc = ((void*)0);
 VAR_0->base.ctx = VAR_1;
 VAR_0->base.delay = 0;
 VAR_0->base.max_defer_write_retry = 0;
 VAR_0->base.inst = VAR_2;
 VAR_0->timeout_period = VAR_3;
 VAR_0->regs = VAR_4;

 return &VAR_0->base;
}
