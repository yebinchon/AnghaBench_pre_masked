
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tegra20_cpufreq {int cpu_clk; } ;
struct cpufreq_policy {int suspend_freq; int clk; } ;
struct TYPE_3__ {int frequency; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct cpufreq_policy*,TYPE_1__*,int) ;
 struct tegra20_cpufreq* FUNC_2 () ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_3(struct cpufreq_policy *VAR_1)
{
 struct tegra20_cpufreq *VAR_2 = FUNC_2();

 FUNC_0(VAR_2->cpu_clk);


 FUNC_1(VAR_1, VAR_0, 300 * 1000);
 VAR_1->clk = VAR_2->cpu_clk;
 VAR_1->suspend_freq = VAR_0[0].frequency;
 return 0;
}
