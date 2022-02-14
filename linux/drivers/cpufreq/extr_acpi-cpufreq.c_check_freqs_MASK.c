
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpumask {int dummy; } ;
struct cpufreq_policy {struct acpi_cpufreq_data* driver_data; } ;
struct acpi_cpufreq_data {int dummy; } ;


 unsigned int FUNC_0 (struct cpufreq_policy*,int ) ;
 int FUNC_1 (struct cpumask const*,struct acpi_cpufreq_data*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static unsigned int FUNC_3(struct cpufreq_policy *VAR_0,
    const struct cpumask *VAR_1, unsigned int VAR_2)
{
 struct acpi_cpufreq_data *VAR_3 = VAR_0->driver_data;
 unsigned int VAR_4;
 unsigned int VAR_5;

 for (VAR_5 = 0; VAR_5 < 100; VAR_5++) {
  VAR_4 = FUNC_0(VAR_0, FUNC_1(VAR_1, VAR_3));
  if (VAR_4 == VAR_2)
   return 1;
  FUNC_2(10);
 }
 return 0;
}
