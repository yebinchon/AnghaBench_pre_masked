
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int read; } ;
struct drv_cmd {int val; TYPE_1__ func; int * reg; } ;
struct cpumask {int dummy; } ;
struct acpi_processor_performance {int control_register; } ;
struct acpi_cpufreq_data {int cpu_freq_read; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct cpumask const*,int ,struct drv_cmd*,int) ;
 struct acpi_processor_performance* FUNC_2 (struct acpi_cpufreq_data*) ;

__attribute__((used)) static u32 FUNC_3(struct acpi_cpufreq_data *VAR_1, const struct cpumask *VAR_2)
{
 struct acpi_processor_performance *VAR_3 = FUNC_2(VAR_1);
 struct drv_cmd VAR_4 = {
  .reg = &VAR_3->control_register,
  .func.read = VAR_1->cpu_freq_read,
 };
 int VAR_5;

 VAR_5 = FUNC_1(VAR_2, VAR_0, &VAR_4, 1);
 FUNC_0(VAR_5);
 return VAR_4.val;
}
