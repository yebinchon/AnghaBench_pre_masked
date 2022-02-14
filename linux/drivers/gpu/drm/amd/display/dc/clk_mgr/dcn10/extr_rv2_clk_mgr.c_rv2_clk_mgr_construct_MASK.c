
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pp_smu_funcs {int dummy; } ;
struct dc_context {int dummy; } ;
struct clk_mgr_internal {int * funcs; } ;


 int FUNC_0 (struct dc_context*,struct clk_mgr_internal*,struct pp_smu_funcs*) ;
 int VAR_0 ;

void FUNC_1(struct dc_context *VAR_1, struct clk_mgr_internal *VAR_2, struct pp_smu_funcs *VAR_3)

{
 FUNC_0(VAR_1, VAR_2, VAR_3);

 VAR_2->funcs = &VAR_0;
}
