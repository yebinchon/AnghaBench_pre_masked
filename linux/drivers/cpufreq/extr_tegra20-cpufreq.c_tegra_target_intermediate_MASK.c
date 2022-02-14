
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra20_cpufreq {int pll_x_prepared; int pll_x_clk; int pll_p_clk; int cpu_clk; } ;
struct cpufreq_policy {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 struct tegra20_cpufreq* FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct cpufreq_policy *VAR_0,
         unsigned int VAR_1)
{
 struct tegra20_cpufreq *VAR_2 = FUNC_3();
 int VAR_3;
 FUNC_1(VAR_2->pll_x_clk);

 VAR_3 = FUNC_2(VAR_2->cpu_clk, VAR_2->pll_p_clk);
 if (VAR_3)
  FUNC_0(VAR_2->pll_x_clk);
 else
  VAR_2->pll_x_prepared = 1;

 return VAR_3;
}
