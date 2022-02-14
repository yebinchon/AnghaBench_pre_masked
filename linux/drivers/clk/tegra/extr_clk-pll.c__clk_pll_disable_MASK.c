
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tegra_clk_pll {TYPE_1__* params; scalar_t__ pmc; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {int flags; scalar_t__ iddq_reg; int iddq_bit_idx; scalar_t__ reset_reg; int reset_bit_idx; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (scalar_t__,struct tegra_clk_pll*) ;
 int FUNC_2 (struct tegra_clk_pll*) ;
 int FUNC_3 (int ,scalar_t__,struct tegra_clk_pll*) ;
 int FUNC_4 (int ,struct tegra_clk_pll*) ;
 int FUNC_5 (scalar_t__) ;
 struct tegra_clk_pll* FUNC_6 (struct clk_hw*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_9(struct clk_hw *VAR_6)
{
 struct tegra_clk_pll *VAR_7 = FUNC_6(VAR_6);
 u32 VAR_8;

 VAR_8 = FUNC_2(VAR_7);
 if (VAR_7->params->flags & VAR_5)
  VAR_8 &= ~VAR_0;
 VAR_8 &= ~VAR_1;
 FUNC_4(VAR_8, VAR_7);

 if (VAR_7->params->flags & VAR_4) {
  VAR_8 = FUNC_5(VAR_7->pmc + VAR_2);
  VAR_8 &= ~VAR_3;
  FUNC_8(VAR_8, VAR_7->pmc + VAR_2);
 }

 if (VAR_7->params->reset_reg) {
  VAR_8 = FUNC_1(VAR_7->params->reset_reg, VAR_7);
  VAR_8 |= FUNC_0(VAR_7->params->reset_bit_idx);
  FUNC_3(VAR_8, VAR_7->params->reset_reg, VAR_7);
 }

 if (VAR_7->params->iddq_reg) {
  VAR_8 = FUNC_1(VAR_7->params->iddq_reg, VAR_7);
  VAR_8 |= FUNC_0(VAR_7->params->iddq_bit_idx);
  FUNC_3(VAR_8, VAR_7->params->iddq_reg, VAR_7);
  FUNC_7(2);
 }
}
