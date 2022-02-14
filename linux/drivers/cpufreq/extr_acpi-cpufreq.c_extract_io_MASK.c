
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct cpufreq_policy {TYPE_2__* freq_table; struct acpi_cpufreq_data* driver_data; } ;
struct acpi_processor_performance {int state_count; TYPE_1__* states; } ;
struct acpi_cpufreq_data {int dummy; } ;
struct TYPE_4__ {int frequency; } ;
struct TYPE_3__ {scalar_t__ status; } ;


 struct acpi_processor_performance* FUNC_0 (struct acpi_cpufreq_data*) ;

__attribute__((used)) static unsigned FUNC_1(struct cpufreq_policy *VAR_0, u32 VAR_1)
{
 struct acpi_cpufreq_data *VAR_2 = VAR_0->driver_data;
 struct acpi_processor_performance *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_0(VAR_2);

 for (VAR_4 = 0; VAR_4 < VAR_3->state_count; VAR_4++) {
  if (VAR_1 == VAR_3->states[VAR_4].status)
   return VAR_0->freq_table[VAR_4].frequency;
 }
 return 0;
}
