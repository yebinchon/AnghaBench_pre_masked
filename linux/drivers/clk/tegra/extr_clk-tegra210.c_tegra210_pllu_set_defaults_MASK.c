
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_clk_pll_params {int defaults_set; scalar_t__* ext_misc_reg; scalar_t__ base_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct tegra_clk_pll_params*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct tegra_clk_pll_params *VAR_6)
{
 u32 VAR_7 = FUNC_2(VAR_5 + VAR_6->base_reg);

 VAR_6->defaults_set = 1;

 if (VAR_7 & VAR_4) {





  FUNC_0(VAR_6, 0);
  if (!VAR_6->defaults_set)
   FUNC_1("PLL_U already enabled. Postponing set full defaults\n");


  VAR_7 = FUNC_2(VAR_5 + VAR_6->ext_misc_reg[0]);
  VAR_7 &= ~VAR_1;
  VAR_7 |= VAR_0 & VAR_1;
  FUNC_4(VAR_7, VAR_5 + VAR_6->ext_misc_reg[0]);

  VAR_7 = FUNC_2(VAR_5 + VAR_6->ext_misc_reg[1]);
  VAR_7 &= ~VAR_3;
  VAR_7 |= VAR_2 & VAR_3;
  FUNC_4(VAR_7, VAR_5 + VAR_6->ext_misc_reg[1]);
  FUNC_3(1);

  return;
 }


 FUNC_4(VAR_0,
   VAR_5 + VAR_6->ext_misc_reg[0]);
 FUNC_4(VAR_2,
   VAR_5 + VAR_6->ext_misc_reg[1]);
 FUNC_3(1);
}
