
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct clk_hw {int dummy; } ;
struct TYPE_3__ {struct clk_hw hw; } ;
struct tegra_clk_super_mux {TYPE_2__* div_ops; TYPE_1__ frac_div; } ;
struct TYPE_4__ {int (* set_rate ) (struct clk_hw*,unsigned long,unsigned long) ;} ;


 int FUNC_0 (struct clk_hw*,struct clk_hw*) ;
 int FUNC_1 (struct clk_hw*,unsigned long,unsigned long) ;
 struct tegra_clk_super_mux* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_0, unsigned long VAR_1,
         unsigned long VAR_2)
{
 struct tegra_clk_super_mux *VAR_3 = FUNC_2(VAR_0);
 struct clk_hw *VAR_4 = &VAR_3->frac_div.hw;

 FUNC_0(VAR_4, VAR_0);

 return VAR_3->div_ops->set_rate(VAR_4, VAR_1, VAR_2);
}
