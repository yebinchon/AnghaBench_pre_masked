
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
 int FUNC_0 (scalar_t__,TYPE_1__*,int ,int,int) ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct tegra_clk_pll *VAR_7)
{
 u32 VAR_8, VAR_9 = FUNC_2(VAR_6 + VAR_7->params->base_reg);

 VAR_7->params->defaults_set = 1;

 if (VAR_9 & VAR_5) {





  VAR_9 = VAR_0 & (~VAR_1);
  VAR_8 = VAR_2 | VAR_3;
  FUNC_0(VAR_6, VAR_7->params, 0, VAR_9,
    ~VAR_8 & VAR_4);

  if (!VAR_7->params->defaults_set)
   FUNC_1("PLL_MB already enabled. Postponing set full defaults\n");

  VAR_9 = FUNC_2(VAR_6 + VAR_7->params->ext_misc_reg[0]);
  VAR_9 &= ~VAR_8;
  VAR_9 |= VAR_0 & VAR_8;
  FUNC_4(VAR_9, VAR_6 + VAR_7->params->ext_misc_reg[0]);
  FUNC_3(1);

  return;
 }


 FUNC_4(VAR_0,
   VAR_6 + VAR_7->params->ext_misc_reg[0]);
 FUNC_3(1);
}
