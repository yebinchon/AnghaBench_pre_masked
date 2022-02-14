
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_processor_performance {int dummy; } ;
struct acpi_cpufreq_data {int acpi_perf_cpu; } ;


 int VAR_0 ;
 struct acpi_processor_performance* FUNC_0 (int ,int ) ;

__attribute__((used)) static inline struct acpi_processor_performance *FUNC_1(struct acpi_cpufreq_data *VAR_1)
{
 return FUNC_0(VAR_0, VAR_1->acpi_perf_cpu);
}
