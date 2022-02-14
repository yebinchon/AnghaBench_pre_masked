
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpufreq_policy {int dummy; } ;
struct cpufreq_frequency_table {unsigned long frequency; int driver_data; } ;
struct TYPE_2__ {int max_freqs; int clk_mult; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 struct cpufreq_frequency_table* FUNC_0 (int ) ;
 int VAR_2 ;
 unsigned long FUNC_1 (int ) ;
 struct cpufreq_frequency_table* FUNC_2 (int,int,int ) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static struct cpufreq_frequency_table *
FUNC_3(const struct cpufreq_policy *VAR_4)
{
 struct cpufreq_frequency_table *VAR_5;
 unsigned long VAR_6;
 int VAR_7;

 VAR_6 = FUNC_1(VAR_3->clk_mult);

 VAR_5 = FUNC_2(VAR_3->max_freqs + 1, sizeof(*VAR_5), VAR_2);
 if (!VAR_5)
  return FUNC_0(-VAR_1);

 for (VAR_7 = 0; VAR_7 < VAR_3->max_freqs; VAR_7++) {
  VAR_5[VAR_7].frequency = VAR_6 / (1 << VAR_7);
  VAR_5[VAR_7].driver_data = VAR_7;
 }
 VAR_5[VAR_7].frequency = VAR_0;

 return VAR_5;
}
