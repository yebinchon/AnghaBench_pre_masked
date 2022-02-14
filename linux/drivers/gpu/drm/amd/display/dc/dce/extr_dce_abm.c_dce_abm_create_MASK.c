
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dce_abm_shift {int dummy; } ;
struct dce_abm_registers {int dummy; } ;
struct dce_abm_mask {int dummy; } ;
struct abm {int * funcs; } ;
struct dce_abm {struct abm base; } ;
struct dc_context {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (struct dce_abm*,struct dc_context*,struct dce_abm_registers const*,struct dce_abm_shift const*,struct dce_abm_mask const*) ;
 int VAR_1 ;
 struct dce_abm* FUNC_2 (int,int ) ;

struct abm *FUNC_3(
 struct dc_context *VAR_2,
 const struct dce_abm_registers *VAR_3,
 const struct dce_abm_shift *VAR_4,
 const struct dce_abm_mask *VAR_5)
{
 struct dce_abm *VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_0);

 if (VAR_6 == ((void*)0)) {
  FUNC_0();
  return ((void*)0);
 }

 FUNC_1(VAR_6, VAR_2, VAR_3, VAR_4, VAR_5);

 VAR_6->base.funcs = &VAR_1;

 return &VAR_6->base;
}
