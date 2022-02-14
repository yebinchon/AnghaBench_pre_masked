
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_dsi {int clk_parent; int clk; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 struct clk* FUNC_0 (int ) ;
 int FUNC_1 (struct clk*,int ) ;

__attribute__((used)) static int FUNC_2(struct tegra_dsi *VAR_1)
{
 struct clk *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_0(VAR_1->clk);
 if (!VAR_2)
  return -VAR_0;

 VAR_3 = FUNC_1(VAR_2, VAR_1->clk_parent);
 if (VAR_3 < 0)
  return VAR_3;

 return 0;
}
