
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tegra_sor {TYPE_2__* soc; int dev; int clk_safe; } ;
struct TYPE_4__ {TYPE_1__* regs; } ;
struct TYPE_3__ {int pll2; int pll0; int dp_padctl0; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 unsigned long VAR_13 ;
 int VAR_14 ;
 unsigned long VAR_15 ;
 unsigned long VAR_16 ;
 int FUNC_0 (int ,char*,int) ;
 unsigned long VAR_17 ;
 unsigned long FUNC_1 (int) ;
 unsigned long FUNC_2 (struct tegra_sor*,int ) ;
 int FUNC_3 (struct tegra_sor*,int ) ;
 int FUNC_4 (struct tegra_sor*,unsigned long,int ) ;
 scalar_t__ FUNC_5 (unsigned long,unsigned long) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static int FUNC_7(struct tegra_sor *VAR_18)
{
 unsigned long VAR_19, VAR_20;
 int VAR_21;

 VAR_19 = FUNC_2(VAR_18, VAR_14);
 VAR_19 &= ~VAR_15;
 VAR_19 |= VAR_16;
 FUNC_4(VAR_18, VAR_19, VAR_14);

 VAR_20 = VAR_17 + FUNC_1(250);

 while (FUNC_5(VAR_17, VAR_20)) {
  VAR_19 = FUNC_2(VAR_18, VAR_14);
  if ((VAR_19 & VAR_16) == 0)
   return 0;

  FUNC_6(25, 100);
 }

 if ((VAR_19 & VAR_16) != 0)
  return -VAR_0;


 VAR_21 = FUNC_3(VAR_18, VAR_18->clk_safe);
 if (VAR_21 < 0) {
  FUNC_0(VAR_18->dev, "failed to set safe parent clock: %d\n", VAR_21);
  return VAR_21;
 }

 VAR_19 = FUNC_2(VAR_18, VAR_18->soc->regs->dp_padctl0);
 VAR_19 &= ~(VAR_4 | VAR_1 |
     VAR_2 | VAR_3);
 FUNC_4(VAR_18, VAR_19, VAR_18->soc->regs->dp_padctl0);


 VAR_19 = VAR_8 | VAR_7 |
  VAR_6;
 FUNC_4(VAR_18, VAR_19, VAR_5);

 VAR_20 = VAR_17 + FUNC_1(250);

 while (FUNC_5(VAR_17, VAR_20)) {
  VAR_19 = FUNC_2(VAR_18, VAR_5);
  if ((VAR_19 & VAR_8) == 0)
   break;

  FUNC_6(25, 100);
 }

 if ((VAR_19 & VAR_8) != 0)
  return -VAR_0;

 VAR_19 = FUNC_2(VAR_18, VAR_18->soc->regs->pll2);
 VAR_19 |= VAR_11;
 FUNC_4(VAR_18, VAR_19, VAR_18->soc->regs->pll2);

 FUNC_6(20, 100);

 VAR_19 = FUNC_2(VAR_18, VAR_18->soc->regs->pll0);
 VAR_19 |= VAR_10 | VAR_9;
 FUNC_4(VAR_18, VAR_19, VAR_18->soc->regs->pll0);

 VAR_19 = FUNC_2(VAR_18, VAR_18->soc->regs->pll2);
 VAR_19 |= VAR_12;
 VAR_19 |= VAR_13;
 FUNC_4(VAR_18, VAR_19, VAR_18->soc->regs->pll2);

 FUNC_6(20, 100);

 return 0;
}
