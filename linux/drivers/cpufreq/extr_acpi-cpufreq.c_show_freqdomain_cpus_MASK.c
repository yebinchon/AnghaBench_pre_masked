
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_policy {struct acpi_cpufreq_data* driver_data; } ;
struct acpi_cpufreq_data {int freqdomain_cpus; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static ssize_t FUNC_2(struct cpufreq_policy *VAR_1, char *VAR_2)
{
 struct acpi_cpufreq_data *VAR_3 = VAR_1->driver_data;

 if (FUNC_1(!VAR_3))
  return -VAR_0;

 return FUNC_0(VAR_3->freqdomain_cpus, VAR_2);
}
