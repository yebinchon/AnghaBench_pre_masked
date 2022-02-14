
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {struct clk_hw hw; } ;
struct tegra_clk_periph {TYPE_1__ mux; struct clk_ops* mux_ops; } ;
struct clk_ops {int (* get_parent ) (struct clk_hw*) ;} ;


 int FUNC_0 (struct clk_hw*,struct clk_hw*) ;
 int FUNC_1 (struct clk_hw*) ;
 struct tegra_clk_periph* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static u8 FUNC_3(struct clk_hw *VAR_0)
{
 struct tegra_clk_periph *VAR_1 = FUNC_2(VAR_0);
 const struct clk_ops *VAR_2 = VAR_1->mux_ops;
 struct clk_hw *VAR_3 = &VAR_1->mux.hw;

 FUNC_0(VAR_3, VAR_0);

 return VAR_2->get_parent(VAR_3);
}
