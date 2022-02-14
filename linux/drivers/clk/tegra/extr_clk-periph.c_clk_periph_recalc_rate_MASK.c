
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk_hw {int dummy; } ;
struct TYPE_2__ {struct clk_hw hw; } ;
struct tegra_clk_periph {TYPE_1__ divider; struct clk_ops* div_ops; } ;
struct clk_ops {unsigned long (* recalc_rate ) (struct clk_hw*,unsigned long) ;} ;


 int FUNC_0 (struct clk_hw*,struct clk_hw*) ;
 unsigned long FUNC_1 (struct clk_hw*,unsigned long) ;
 struct tegra_clk_periph* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_3(struct clk_hw *VAR_0,
         unsigned long VAR_1)
{
 struct tegra_clk_periph *VAR_2 = FUNC_2(VAR_0);
 const struct clk_ops *VAR_3 = VAR_2->div_ops;
 struct clk_hw *VAR_4 = &VAR_2->divider.hw;

 FUNC_0(VAR_4, VAR_0);

 return VAR_3->recalc_rate(VAR_4, VAR_1);
}
