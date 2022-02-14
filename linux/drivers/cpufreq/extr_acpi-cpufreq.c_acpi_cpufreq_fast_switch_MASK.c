
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpufreq_policy {unsigned int cached_target_freq; unsigned int cached_resolved_idx; struct cpufreq_frequency_table* freq_table; struct acpi_cpufreq_data* driver_data; } ;
struct cpufreq_frequency_table {unsigned int frequency; unsigned int driver_data; } ;
struct acpi_processor_performance {unsigned int state; TYPE_1__* states; int control_register; } ;
struct acpi_cpufreq_data {int (* cpu_freq_write ) (int *,int ) ;scalar_t__ resume; } ;
struct TYPE_2__ {int control; } ;


 unsigned int FUNC_0 (struct cpufreq_policy*,unsigned int) ;
 int FUNC_1 (int *,int ) ;
 struct acpi_processor_performance* FUNC_2 (struct acpi_cpufreq_data*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

__attribute__((used)) static unsigned int FUNC_4(struct cpufreq_policy *VAR_0,
          unsigned int VAR_1)
{
 struct acpi_cpufreq_data *VAR_2 = VAR_0->driver_data;
 struct acpi_processor_performance *VAR_3;
 struct cpufreq_frequency_table *VAR_4;
 unsigned int VAR_5, VAR_6, VAR_7;




 if (VAR_0->cached_target_freq == VAR_1)
  VAR_7 = VAR_0->cached_resolved_idx;
 else
  VAR_7 = FUNC_0(VAR_0, VAR_1);

 VAR_4 = &VAR_0->freq_table[VAR_7];
 VAR_6 = VAR_4->frequency;
 VAR_5 = VAR_4->driver_data;

 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3->state == VAR_5) {
  if (FUNC_3(VAR_2->resume))
   VAR_2->resume = 0;
  else
   return VAR_6;
 }

 VAR_2->cpu_freq_write(&VAR_3->control_register,
        VAR_3->states[VAR_5].control);
 VAR_3->state = VAR_5;
 return VAR_6;
}
