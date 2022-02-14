
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra124_cpufreq_priv {int cpu_clk; struct clk* dfll_clk; struct clk* pllp_clk; } ;
struct clk {int dummy; } ;


 struct clk* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct clk*) ;
 int FUNC_3 (int ,struct clk*) ;
 int FUNC_4 (struct clk*,int ) ;

__attribute__((used)) static int FUNC_5(struct tegra124_cpufreq_priv *VAR_0)
{
 struct clk *VAR_1;
 int VAR_2;

 VAR_2 = FUNC_4(VAR_0->dfll_clk, FUNC_1(VAR_0->cpu_clk));
 if (VAR_2)
  return VAR_2;

 VAR_1 = FUNC_0(VAR_0->cpu_clk);
 FUNC_3(VAR_0->cpu_clk, VAR_0->pllp_clk);

 VAR_2 = FUNC_2(VAR_0->dfll_clk);
 if (VAR_2)
  goto out;

 FUNC_3(VAR_0->cpu_clk, VAR_0->dfll_clk);

 return 0;

out:
 FUNC_3(VAR_0->cpu_clk, VAR_1);

 return VAR_2;
}
