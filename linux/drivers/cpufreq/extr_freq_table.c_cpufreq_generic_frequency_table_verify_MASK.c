
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_policy {int freq_table; } ;


 int VAR_0 ;
 int FUNC_0 (struct cpufreq_policy*,int ) ;

int FUNC_1(struct cpufreq_policy *VAR_1)
{
 if (!VAR_1->freq_table)
  return -VAR_0;

 return FUNC_0(VAR_1, VAR_1->freq_table);
}
