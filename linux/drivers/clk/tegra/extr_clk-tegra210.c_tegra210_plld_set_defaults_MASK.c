
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
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (scalar_t__,TYPE_1__*,int,int,int) ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct tegra_clk_pll *VAR_11)
{
 u32 VAR_12;
 u32 VAR_13 = 0xffff;

 VAR_11->params->defaults_set = 1;

 if (FUNC_2(VAR_10 + VAR_11->params->base_reg) &
   VAR_9) {





  VAR_12 = VAR_7;
  FUNC_0(VAR_10, VAR_11->params, 1,
    VAR_12, VAR_8);


  VAR_12 = VAR_0 & (~VAR_3);
  VAR_13 |= VAR_1 | VAR_4 |
   VAR_5 | VAR_2;
  FUNC_0(VAR_10, VAR_11->params, 0, VAR_12,
    ~VAR_13 & VAR_6);

  if (!VAR_11->params->defaults_set)
   FUNC_1("PLL_D already enabled. Postponing set full defaults\n");


  VAR_13 = VAR_4 | VAR_5;
  VAR_12 = FUNC_2(VAR_10 + VAR_11->params->ext_misc_reg[0]);
  VAR_12 &= ~VAR_13;
  VAR_12 |= VAR_0 & VAR_13;
  FUNC_4(VAR_12, VAR_10 + VAR_11->params->ext_misc_reg[0]);
  FUNC_3(1);

  return;
 }

 VAR_12 = FUNC_2(VAR_10 + VAR_11->params->ext_misc_reg[0]);
 VAR_12 &= VAR_1;
 VAR_12 |= VAR_0;

 FUNC_4(VAR_12, VAR_10 + VAR_11->params->ext_misc_reg[0]);
 FUNC_4(VAR_7, VAR_10 +
   VAR_11->params->ext_misc_reg[1]);
 FUNC_3(1);
}
