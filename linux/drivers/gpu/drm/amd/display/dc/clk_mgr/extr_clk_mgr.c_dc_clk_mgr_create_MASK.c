
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pp_smu_funcs {int dummy; } ;
struct hw_asic_id {int chip_family; int hw_internal_rev; } ;
struct dccg {int dummy; } ;
struct dc_context {struct hw_asic_id asic_id; } ;
struct clk_mgr {int dummy; } ;
struct clk_mgr_internal {struct clk_mgr base; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 () ;







 int VAR_0 ;
 int FUNC_13 (struct dc_context*,struct clk_mgr_internal*) ;
 int FUNC_14 (struct dc_context*,struct clk_mgr_internal*) ;
 int FUNC_15 (struct dc_context*,struct clk_mgr_internal*) ;
 int FUNC_16 (struct dc_context*,struct clk_mgr_internal*) ;
 int FUNC_17 (struct dc_context*,struct clk_mgr_internal*) ;
 int FUNC_18 (struct dc_context*,struct clk_mgr_internal*,struct pp_smu_funcs*,struct dccg*) ;
 struct clk_mgr_internal* FUNC_19 (int,int ) ;
 int FUNC_20 (struct dc_context*,struct clk_mgr_internal*,struct pp_smu_funcs*,struct dccg*) ;
 int FUNC_21 (struct dc_context*,struct clk_mgr_internal*,struct pp_smu_funcs*) ;
 int FUNC_22 (struct dc_context*,struct clk_mgr_internal*,struct pp_smu_funcs*) ;

struct clk_mgr *FUNC_23(struct dc_context *VAR_1, struct pp_smu_funcs *VAR_2, struct dccg *VAR_3)
{
 struct hw_asic_id VAR_4 = VAR_1->asic_id;

 struct clk_mgr_internal *VAR_5 = FUNC_19(sizeof(*VAR_5), VAR_0);

 if (VAR_5 == ((void*)0)) {
  FUNC_12();
  return ((void*)0);
 }

 switch (VAR_4.chip_family) {
 case 133:
 case 131:
  FUNC_17(VAR_1, VAR_5);
  break;
 case 132:
  FUNC_13(VAR_1, VAR_5);
  break;
 case 128:
  if (FUNC_9(VAR_4.hw_internal_rev) ||
    FUNC_5(VAR_4.hw_internal_rev)) {
   FUNC_17(VAR_1, VAR_5);
   break;
  }
  if (FUNC_6(VAR_4.hw_internal_rev) ||
    FUNC_7(VAR_4.hw_internal_rev) ||
    FUNC_8(VAR_4.hw_internal_rev)) {
   FUNC_14(VAR_1, VAR_5);
   break;
  }
  if (FUNC_10(VAR_4.hw_internal_rev)) {
   FUNC_14(VAR_1, VAR_5);
   break;
  }
  break;
 case 134:
  if (FUNC_4(VAR_4.hw_internal_rev))
   FUNC_16(VAR_1, VAR_5);
  else
   FUNC_15(VAR_1, VAR_5);
  break;
 default:
  FUNC_11(0);
  break;
 }

 return &VAR_5->base;
}
