
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tegra_clk_pll {TYPE_1__* params; } ;
struct TYPE_2__ {int defaults_set; scalar_t__* ext_misc_reg; scalar_t__ base_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct tegra_clk_pll*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct tegra_clk_pll *VAR_8)
{
 u32 VAR_9;
 u32 VAR_10 = FUNC_2(VAR_7 + VAR_8->params->base_reg);

 VAR_8->params->defaults_set = 1;

 if (VAR_10 & VAR_6) {





  FUNC_0(VAR_8, 1);
  if (!VAR_8->params->defaults_set)
   FUNC_1("PLL_P already enabled. Postponing set full defaults\n");


  VAR_10 = FUNC_2(VAR_7 + VAR_8->params->ext_misc_reg[0]);
  VAR_9 = VAR_1 | VAR_2;
  VAR_10 &= ~VAR_9;
  VAR_10 |= VAR_0 & VAR_9;
  FUNC_4(VAR_10, VAR_7 + VAR_8->params->ext_misc_reg[0]);
  FUNC_3(1);

  return;
 }


 FUNC_4(VAR_0,
   VAR_7 + VAR_8->params->ext_misc_reg[0]);


 VAR_10 = FUNC_2(VAR_7 + VAR_8->params->ext_misc_reg[1]);
 VAR_9 = VAR_4 | VAR_5;
 VAR_10 &= VAR_9;
 VAR_10 |= ~VAR_9 & VAR_3;
 FUNC_4(VAR_10, VAR_7 + VAR_8->params->ext_misc_reg[1]);
 FUNC_3(1);
}
