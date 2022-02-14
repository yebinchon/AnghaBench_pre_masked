
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra20_cpufreq {int pll_x_prepared; int pll_x_clk; int cpu_clk; int dev; int pll_p_clk; } ;
struct cpufreq_policy {int dummy; } ;
struct TYPE_2__ {unsigned long frequency; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,unsigned long) ;
 struct tegra20_cpufreq* FUNC_5 () ;
 int FUNC_6 (int ,char*,unsigned long) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_7(struct cpufreq_policy *VAR_1, unsigned int VAR_2)
{
 struct tegra20_cpufreq *VAR_3 = FUNC_5();
 unsigned long VAR_4 = VAR_0[VAR_2].frequency;
 unsigned int VAR_5 = FUNC_2(VAR_3->pll_p_clk) / 1000;
 int VAR_6;





 if (VAR_4 == VAR_5)
  return FUNC_3(VAR_3->cpu_clk, VAR_3->pll_p_clk);

 VAR_6 = FUNC_4(VAR_3->pll_x_clk, VAR_4 * 1000);

 if (VAR_6)
  FUNC_6(VAR_3->dev, "Failed to change pll_x to %lu\n", VAR_4);

 VAR_6 = FUNC_3(VAR_3->cpu_clk, VAR_3->pll_x_clk);

 FUNC_0(VAR_6);





 if (VAR_3->pll_x_prepared) {
  FUNC_1(VAR_3->pll_x_clk);
  VAR_3->pll_x_prepared = 0;
 }

 return VAR_6;
}
