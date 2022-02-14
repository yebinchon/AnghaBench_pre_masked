
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_dsi {int clk_parent; TYPE_1__* slave; } ;
struct clk {int dummy; } ;
struct TYPE_2__ {int clk; } ;


 int VAR_0 ;
 struct clk* FUNC_0 (int ) ;
 int FUNC_1 (struct clk*,int ) ;

__attribute__((used)) static int FUNC_2(struct tegra_dsi *VAR_1)
{
 struct clk *VAR_2;
 int VAR_3;


 VAR_2 = FUNC_0(VAR_1->slave->clk);
 if (!VAR_2)
  return -VAR_0;

 VAR_3 = FUNC_1(VAR_2, VAR_1->clk_parent);
 if (VAR_3 < 0)
  return VAR_3;

 return 0;
}
