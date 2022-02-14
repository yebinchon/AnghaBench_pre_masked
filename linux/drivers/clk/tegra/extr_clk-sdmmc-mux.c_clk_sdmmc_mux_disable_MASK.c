
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk_hw {int dummy; } ;
struct TYPE_2__ {struct clk_hw hw; } ;
struct tegra_sdmmc_mux {TYPE_1__ gate; struct clk_ops* gate_ops; } ;
struct clk_ops {int (* disable ) (struct clk_hw*) ;} ;


 int FUNC_0 (struct clk_hw*) ;
 struct tegra_sdmmc_mux* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static void FUNC_2(struct clk_hw *VAR_0)
{
 struct tegra_sdmmc_mux *VAR_1 = FUNC_1(VAR_0);
 const struct clk_ops *VAR_2 = VAR_1->gate_ops;
 struct clk_hw *VAR_3 = &VAR_1->gate.hw;

 VAR_2->disable(VAR_3);
}
