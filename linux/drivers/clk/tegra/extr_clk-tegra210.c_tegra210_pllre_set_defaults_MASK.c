
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
 int FUNC_0 (scalar_t__,TYPE_1__*,int ,int,int) ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct tegra_clk_pll *VAR_9)
{
 u32 VAR_10;
 u32 VAR_11 = FUNC_2(VAR_8 + VAR_9->params->base_reg);

 VAR_9->params->defaults_set = 1;

 if (VAR_11 & VAR_7) {




  VAR_11 &= VAR_0;
  if (VAR_11 != VAR_1) {
   FUNC_1("pllre boot base 0x%x : expected 0x%x\n",
    VAR_11, VAR_1);
   FUNC_1("(comparison mask = 0x%x)\n",
    VAR_0);
   VAR_9->params->defaults_set = 0;
  }


  VAR_11 = VAR_2 & (~VAR_3);
  VAR_10 = VAR_4 | VAR_5;
  FUNC_0(VAR_8, VAR_9->params, 0, VAR_11,
    ~VAR_10 & VAR_6);


  VAR_11 = FUNC_2(VAR_8 + VAR_9->params->ext_misc_reg[0]);
  if (VAR_11 & VAR_3)
   FUNC_1("unexpected IDDQ bit set for enabled clock\n");


  VAR_11 &= ~VAR_10;
  VAR_11 |= VAR_2 & VAR_10;
  FUNC_4(VAR_11, VAR_8 + VAR_9->params->ext_misc_reg[0]);
  FUNC_3(1);

  if (!VAR_9->params->defaults_set)
   FUNC_1("PLL_RE already enabled. Postponing set full defaults\n");

  return;
 }


 VAR_11 &= ~VAR_0;
 VAR_11 |= VAR_1 & VAR_0;
 FUNC_4(VAR_11, VAR_8 + VAR_9->params->base_reg);
 FUNC_4(VAR_2,
   VAR_8 + VAR_9->params->ext_misc_reg[0]);
 FUNC_3(1);
}
