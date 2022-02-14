
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_dfll {int dummy; } ;
struct clk_hw {int dummy; } ;


 struct tegra_dfll* FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (struct tegra_dfll*) ;
 int FUNC_2 (struct tegra_dfll*) ;
 int FUNC_3 (struct tegra_dfll*) ;

__attribute__((used)) static int FUNC_4(struct clk_hw *VAR_0)
{
 struct tegra_dfll *VAR_1 = FUNC_0(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2)
  FUNC_1(VAR_1);

 return VAR_2;
}
