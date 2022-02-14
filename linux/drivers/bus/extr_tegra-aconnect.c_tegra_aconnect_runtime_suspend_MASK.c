
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_aconnect {int apb2ape_clk; int ape_clk; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct tegra_aconnect* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0)
{
 struct tegra_aconnect *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->ape_clk);
 FUNC_0(VAR_1->apb2ape_clk);

 return 0;
}
