
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int transition_latency; } ;
struct cpufreq_policy {int cpus; TYPE_1__ cpuinfo; struct cpufreq_frequency_table* freq_table; } ;
struct cpufreq_frequency_table {int dummy; } ;


 int FUNC_0 (int ) ;

void FUNC_1(struct cpufreq_policy *VAR_0,
  struct cpufreq_frequency_table *VAR_1,
  unsigned int VAR_2)
{
 VAR_0->freq_table = VAR_1;
 VAR_0->cpuinfo.transition_latency = VAR_2;





 FUNC_0(VAR_0->cpus);
}
