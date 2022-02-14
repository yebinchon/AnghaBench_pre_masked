
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra20_cpufreq {int pll_p_clk; } ;
struct cpufreq_policy {unsigned int cur; } ;
struct TYPE_2__ {unsigned int frequency; } ;


 int FUNC_0 (int ) ;
 struct tegra20_cpufreq* FUNC_1 () ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static unsigned int FUNC_2(struct cpufreq_policy *VAR_1,
        unsigned int VAR_2)
{
 struct tegra20_cpufreq *VAR_3 = FUNC_1();
 unsigned int VAR_4 = FUNC_0(VAR_3->pll_p_clk) / 1000;






 if (VAR_0[VAR_2].frequency == VAR_4 || VAR_1->cur == VAR_4)
  return 0;

 return VAR_4;
}
