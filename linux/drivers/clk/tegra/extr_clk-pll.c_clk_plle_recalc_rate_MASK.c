
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long u64 ;
typedef unsigned long u32 ;
struct tegra_clk_pll {TYPE_2__* params; } ;
struct clk_hw {int dummy; } ;
struct TYPE_4__ {TYPE_1__* div_nmp; } ;
struct TYPE_3__ {unsigned long divp_shift; unsigned long divn_shift; unsigned long divm_shift; } ;


 unsigned long FUNC_0 (struct tegra_clk_pll*) ;
 unsigned long FUNC_1 (struct tegra_clk_pll*) ;
 unsigned long FUNC_2 (struct tegra_clk_pll*) ;
 int FUNC_3 (unsigned long,unsigned long) ;
 unsigned long FUNC_4 (struct tegra_clk_pll*) ;
 struct tegra_clk_pll* FUNC_5 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_6(struct clk_hw *VAR_0,
      unsigned long VAR_1)
{
 struct tegra_clk_pll *VAR_2 = FUNC_5(VAR_0);
 u32 VAR_3 = FUNC_4(VAR_2);
 u32 VAR_4 = 0, VAR_5 = 0, VAR_6 = 0;
 u64 VAR_7 = VAR_1;

 VAR_6 = (VAR_3 >> VAR_2->params->div_nmp->divp_shift) & (FUNC_2(VAR_2));
 VAR_4 = (VAR_3 >> VAR_2->params->div_nmp->divn_shift) & (FUNC_1(VAR_2));
 VAR_5 = (VAR_3 >> VAR_2->params->div_nmp->divm_shift) & (FUNC_0(VAR_2));
 VAR_5 *= VAR_6;

 VAR_7 *= VAR_4;
 FUNC_3(VAR_7, VAR_5);
 return VAR_7;
}
