
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmcu {int * funcs; } ;
struct dce_dmcu_shift {int dummy; } ;
struct dce_dmcu_registers {int dummy; } ;
struct dce_dmcu_mask {int dummy; } ;
struct dce_dmcu {struct dmcu base; } ;
struct dc_context {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (struct dce_dmcu*,struct dc_context*,struct dce_dmcu_registers const*,struct dce_dmcu_shift const*,struct dce_dmcu_mask const*) ;
 int VAR_1 ;
 struct dce_dmcu* FUNC_2 (int,int ) ;

struct dmcu *FUNC_3(
 struct dc_context *VAR_2,
 const struct dce_dmcu_registers *VAR_3,
 const struct dce_dmcu_shift *VAR_4,
 const struct dce_dmcu_mask *VAR_5)
{
 struct dce_dmcu *VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_0);

 if (VAR_6 == ((void*)0)) {
  FUNC_0();
  return ((void*)0);
 }

 FUNC_1(
  VAR_6, VAR_2, VAR_3, VAR_4, VAR_5);

 VAR_6->base.funcs = &VAR_1;

 return &VAR_6->base;
}
