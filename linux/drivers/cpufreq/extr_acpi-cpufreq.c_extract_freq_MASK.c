
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cpufreq_policy {struct acpi_cpufreq_data* driver_data; } ;
struct acpi_cpufreq_data {int cpu_feature; } ;





 int FUNC_0 (struct cpufreq_policy*,int ) ;
 int FUNC_1 (struct cpufreq_policy*,int ) ;

__attribute__((used)) static unsigned FUNC_2(struct cpufreq_policy *VAR_0, u32 VAR_1)
{
 struct acpi_cpufreq_data *VAR_2 = VAR_0->driver_data;

 switch (VAR_2->cpu_feature) {
 case 129:
 case 130:
  return FUNC_1(VAR_0, VAR_1);
 case 128:
  return FUNC_0(VAR_0, VAR_1);
 default:
  return 0;
 }
}
