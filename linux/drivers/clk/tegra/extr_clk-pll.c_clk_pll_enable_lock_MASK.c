
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tegra_clk_pll {TYPE_1__* params; } ;
struct TYPE_2__ {int flags; int lock_enable_bit_idx; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct tegra_clk_pll*) ;
 int FUNC_2 (int ,struct tegra_clk_pll*) ;

__attribute__((used)) static void FUNC_3(struct tegra_clk_pll *VAR_2)
{
 u32 VAR_3;

 if (!(VAR_2->params->flags & VAR_1))
  return;

 if (!(VAR_2->params->flags & VAR_0))
  return;

 VAR_3 = FUNC_1(VAR_2);
 VAR_3 |= FUNC_0(VAR_2->params->lock_enable_bit_idx);
 FUNC_2(VAR_3, VAR_2);
}
