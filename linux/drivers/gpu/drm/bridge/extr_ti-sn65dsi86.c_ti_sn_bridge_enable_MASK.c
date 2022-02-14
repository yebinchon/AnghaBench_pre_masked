
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ti_sn_bridge {int panel; int regmap; int aux; TYPE_1__* dsi; } ;
struct drm_bridge {int dummy; } ;
struct TYPE_2__ {scalar_t__ lanes; } ;


 unsigned int FUNC_0 (scalar_t__) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_1 (scalar_t__) ;
 unsigned int VAR_4 ;
 int FUNC_2 (char*,...) ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 unsigned int VAR_13 ;
 struct ti_sn_bridge* FUNC_3 (struct drm_bridge*) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,unsigned int,int,int,int) ;
 int FUNC_7 (int ,int ,unsigned int,unsigned int) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (struct ti_sn_bridge*) ;
 int FUNC_10 (struct ti_sn_bridge*) ;

__attribute__((used)) static void FUNC_11(struct drm_bridge *VAR_14)
{
 struct ti_sn_bridge *VAR_15 = FUNC_3(VAR_14);
 unsigned int VAR_16;
 int VAR_17;


 VAR_16 = FUNC_0(4 - VAR_15->dsi->lanes);
 FUNC_7(VAR_15->regmap, VAR_8,
      VAR_0, VAR_16);


 VAR_16 = FUNC_1(VAR_15->dsi->lanes - 1);
 FUNC_7(VAR_15->regmap, VAR_12, VAR_4,
      VAR_16);


 FUNC_9(VAR_15);


 FUNC_8(VAR_15->regmap, VAR_11, 1);

 VAR_17 = FUNC_6(VAR_15->regmap, VAR_7, VAR_16,
           VAR_16 & VAR_1, 1000,
           50 * 1000);
 if (VAR_17) {
  FUNC_2("DP_PLL_LOCK polling failed (%d)\n", VAR_17);
  return;
 }







 FUNC_4(&VAR_15->aux, VAR_3,
      VAR_2);


 FUNC_8(VAR_15->regmap, VAR_10, 0x0A);
 VAR_17 = FUNC_6(VAR_15->regmap, VAR_10, VAR_16,
           VAR_16 == VAR_5 ||
           VAR_16 == VAR_6, 1000,
           500 * 1000);
 if (VAR_17) {
  FUNC_2("Training complete polling failed (%d)\n", VAR_17);
  return;
 } else if (VAR_16 == VAR_5) {
  FUNC_2("Link training failed, link is off\n");
  return;
 }


 FUNC_10(VAR_15);


 FUNC_7(VAR_15->regmap, VAR_9, VAR_13,
      VAR_13);

 FUNC_5(VAR_15->panel);
}
