
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra20_cpufreq {int cpu_clk; int pll_x_clk; int pll_p_clk; int driver; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 struct tegra20_cpufreq* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct tegra20_cpufreq *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(&VAR_1->driver);

 FUNC_0(VAR_1->pll_p_clk);
 FUNC_0(VAR_1->pll_x_clk);
 FUNC_0(VAR_1->cpu_clk);

 return 0;
}
