
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct eps_cpu_data {TYPE_1__* freq_table; } ;
struct cpufreq_policy {unsigned int cpu; } ;
struct TYPE_2__ {int driver_data; } ;


 int VAR_0 ;
 struct eps_cpu_data** VAR_1 ;
 int FUNC_0 (struct eps_cpu_data*,struct cpufreq_policy*,unsigned int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct cpufreq_policy *VAR_2, unsigned int VAR_3)
{
 struct eps_cpu_data *VAR_4;
 unsigned int VAR_5 = VAR_2->cpu;
 unsigned int VAR_6;
 int VAR_7;

 if (FUNC_2(VAR_1[VAR_5] == ((void*)0)))
  return -VAR_0;
 VAR_4 = VAR_1[VAR_5];


 VAR_6 = VAR_4->freq_table[VAR_3].driver_data & 0xffff;
 VAR_7 = FUNC_0(VAR_4, VAR_2, VAR_6);
 if (VAR_7)
  FUNC_1("Timeout!\n");
 return VAR_7;
}
