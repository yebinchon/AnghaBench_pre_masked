
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_clk_periph_fixed {unsigned long long mul; int div; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (unsigned long long,int ) ;
 struct tegra_clk_periph_fixed* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static unsigned long
FUNC_2(struct clk_hw *VAR_0,
       unsigned long VAR_1)
{
 struct tegra_clk_periph_fixed *VAR_2 = FUNC_1(VAR_0);
 unsigned long long VAR_3;

 VAR_3 = (unsigned long long)VAR_1 * VAR_2->mul;
 FUNC_0(VAR_3, VAR_2->div);

 return (unsigned long)VAR_3;
}
