
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra20_cpufreq {int cpu_clk; } ;
struct cpufreq_policy {int dummy; } ;


 int FUNC_0 (int ) ;
 struct tegra20_cpufreq* FUNC_1 () ;

__attribute__((used)) static int FUNC_2(struct cpufreq_policy *VAR_0)
{
 struct tegra20_cpufreq *VAR_1 = FUNC_1();

 FUNC_0(VAR_1->cpu_clk);
 return 0;
}
