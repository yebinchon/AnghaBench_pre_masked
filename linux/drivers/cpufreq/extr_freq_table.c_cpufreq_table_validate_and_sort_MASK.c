
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_policy {int freq_table; } ;


 int FUNC_0 (struct cpufreq_policy*,int ) ;
 int FUNC_1 (struct cpufreq_policy*) ;

int FUNC_2(struct cpufreq_policy *VAR_0)
{
 int VAR_1;

 if (!VAR_0->freq_table)
  return 0;

 VAR_1 = FUNC_0(VAR_0, VAR_0->freq_table);
 if (VAR_1)
  return VAR_1;

 return FUNC_1(VAR_0);
}
