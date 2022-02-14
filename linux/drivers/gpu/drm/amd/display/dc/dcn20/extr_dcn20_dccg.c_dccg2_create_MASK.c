
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dccg {int * funcs; struct dc_context* ctx; } ;
struct dcn_dccg {struct dccg base; struct dccg_mask const* dccg_mask; struct dccg_shift const* dccg_shift; struct dccg_registers const* regs; } ;
struct dccg_shift {int dummy; } ;
struct dccg_registers {int dummy; } ;
struct dccg_mask {int dummy; } ;
struct dc_context {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 struct dcn_dccg* FUNC_1 (int,int ) ;

struct dccg *FUNC_2(
 struct dc_context *VAR_2,
 const struct dccg_registers *VAR_3,
 const struct dccg_shift *VAR_4,
 const struct dccg_mask *VAR_5)
{
 struct dcn_dccg *VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_0);
 struct dccg *VAR_7;

 if (VAR_6 == ((void*)0)) {
  FUNC_0();
  return ((void*)0);
 }

 VAR_7 = &VAR_6->base;
 VAR_7->ctx = VAR_2;
 VAR_7->funcs = &VAR_1;

 VAR_6->regs = VAR_3;
 VAR_6->dccg_shift = VAR_4;
 VAR_6->dccg_mask = VAR_5;

 return &VAR_6->base;
}
