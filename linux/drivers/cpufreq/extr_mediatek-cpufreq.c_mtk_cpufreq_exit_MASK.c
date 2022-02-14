
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_cpu_dvfs_info {int cpu_dev; } ;
struct cpufreq_policy {int freq_table; struct mtk_cpu_dvfs_info* driver_data; } ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static int FUNC_1(struct cpufreq_policy *VAR_0)
{
 struct mtk_cpu_dvfs_info *VAR_1 = VAR_0->driver_data;

 FUNC_0(VAR_1->cpu_dev, &VAR_0->freq_table);

 return 0;
}
