
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_sor {int clk; int clk_out; } ;
struct clk {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct clk*) ;

__attribute__((used)) static int FUNC_3(struct tegra_sor *VAR_0, struct clk *VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_0->clk);

 VAR_2 = FUNC_2(VAR_0->clk_out, VAR_1);
 if (VAR_2 < 0)
  return VAR_2;

 VAR_2 = FUNC_1(VAR_0->clk);
 if (VAR_2 < 0)
  return VAR_2;

 return 0;
}
