
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_aconnect {int ape_clk; int apb2ape_clk; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*,int) ;
 struct tegra_aconnect* FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0)
{
 struct tegra_aconnect *VAR_1 = FUNC_3(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_1(VAR_1->ape_clk);
 if (VAR_2) {
  FUNC_2(VAR_0, "ape clk_enable failed: %d\n", VAR_2);
  return VAR_2;
 }

 VAR_2 = FUNC_1(VAR_1->apb2ape_clk);
 if (VAR_2) {
  FUNC_0(VAR_1->ape_clk);
  FUNC_2(VAR_0, "apb2ape clk_enable failed: %d\n", VAR_2);
  return VAR_2;
 }

 return 0;
}
