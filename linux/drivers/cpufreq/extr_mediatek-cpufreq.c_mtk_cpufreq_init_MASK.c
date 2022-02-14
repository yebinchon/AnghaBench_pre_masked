
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_cpu_dvfs_info {int cpu_clk; int cpus; int cpu_dev; } ;
struct cpufreq_policy {int cpus; int clk; struct mtk_cpu_dvfs_info* driver_data; struct cpufreq_frequency_table* freq_table; int cpu; } ;
struct cpufreq_frequency_table {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,struct cpufreq_frequency_table**) ;
 int FUNC_2 (int ) ;
 struct mtk_cpu_dvfs_info* FUNC_3 (int ) ;
 int FUNC_4 (char*,int ,...) ;

__attribute__((used)) static int FUNC_5(struct cpufreq_policy *VAR_1)
{
 struct mtk_cpu_dvfs_info *VAR_2;
 struct cpufreq_frequency_table *VAR_3;
 int VAR_4;

 VAR_2 = FUNC_3(VAR_1->cpu);
 if (!VAR_2) {
  FUNC_4("dvfs info for cpu%d is not initialized.\n",
         VAR_1->cpu);
  return -VAR_0;
 }

 VAR_4 = FUNC_1(VAR_2->cpu_dev, &VAR_3);
 if (VAR_4) {
  FUNC_4("failed to init cpufreq table for cpu%d: %d\n",
         VAR_1->cpu, VAR_4);
  return VAR_4;
 }

 FUNC_0(VAR_1->cpus, &VAR_2->cpus);
 VAR_1->freq_table = VAR_3;
 VAR_1->driver_data = VAR_2;
 VAR_1->clk = VAR_2->cpu_clk;

 FUNC_2(VAR_1->cpus);

 return 0;
}
