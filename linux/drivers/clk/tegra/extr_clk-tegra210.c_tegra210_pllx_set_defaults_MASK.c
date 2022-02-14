
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tegra_clk_pll {TYPE_1__* params; int hw; } ;
struct TYPE_2__ {int defaults_set; scalar_t__* ext_misc_reg; scalar_t__ base_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (struct tegra_clk_pll*) ;
 int FUNC_1 (int *,int*,int*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct tegra_clk_pll *VAR_13)
{
 u32 VAR_14;
 u32 VAR_15, VAR_16;

 VAR_13->params->defaults_set = 1;


 FUNC_1(&VAR_13->hw, &VAR_15, &VAR_16);
 VAR_14 = VAR_3 & (~VAR_4) &
  (~VAR_6);
 VAR_14 |= VAR_15 << VAR_5;
 VAR_14 |= VAR_16 << VAR_7;

 if (FUNC_3(VAR_12 + VAR_13->params->base_reg) & VAR_11) {





  FUNC_0(VAR_13);

  if (!VAR_13->params->defaults_set)
   FUNC_2("PLL_X already enabled. Postponing set full defaults\n");

  FUNC_5(VAR_14, VAR_12 + VAR_13->params->ext_misc_reg[2]);


  VAR_14 = FUNC_3(VAR_12 + VAR_13->params->ext_misc_reg[0]);
  VAR_14 &= ~VAR_1;
  VAR_14 |= VAR_0 & VAR_1;
  FUNC_5(VAR_14, VAR_12 + VAR_13->params->ext_misc_reg[0]);
  FUNC_4(1);

  return;
 }


 FUNC_5(VAR_0, VAR_12 +
   VAR_13->params->ext_misc_reg[0]);


 FUNC_5(VAR_2, VAR_12 +
   VAR_13->params->ext_misc_reg[1]);


 FUNC_5(VAR_14, VAR_12 + VAR_13->params->ext_misc_reg[2]);


 FUNC_5(VAR_8, VAR_12 +
   VAR_13->params->ext_misc_reg[3]);


 FUNC_5(VAR_9, VAR_12 +
   VAR_13->params->ext_misc_reg[4]);
 FUNC_5(VAR_10, VAR_12 +
   VAR_13->params->ext_misc_reg[5]);
 FUNC_4(1);
}
