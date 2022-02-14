
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tegra_clk_periph_fixed {int num; TYPE_1__* regs; scalar_t__ base; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {scalar_t__ enb_clr_reg; } ;


 struct tegra_clk_periph_fixed* FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct clk_hw *VAR_0)
{
 struct tegra_clk_periph_fixed *VAR_1 = FUNC_0(VAR_0);
 u32 VAR_2 = 1 << (VAR_1->num % 32);

 FUNC_1(VAR_2, VAR_1->base + VAR_1->regs->enb_clr_reg);
}
