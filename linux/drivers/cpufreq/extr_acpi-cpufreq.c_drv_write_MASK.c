
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int write; } ;
struct drv_cmd {TYPE_1__ func; int val; int * reg; } ;
struct cpumask {int dummy; } ;
struct acpi_processor_performance {int control_register; } ;
struct acpi_cpufreq_data {int cpu_freq_write; } ;


 scalar_t__ FUNC_0 (int,struct cpumask const*) ;
 int FUNC_1 (struct drv_cmd*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct cpumask const*,int (*) (struct drv_cmd*),struct drv_cmd*,int) ;
 struct acpi_processor_performance* FUNC_5 (struct acpi_cpufreq_data*) ;

__attribute__((used)) static void FUNC_6(struct acpi_cpufreq_data *VAR_0,
        const struct cpumask *VAR_1, u32 VAR_2)
{
 struct acpi_processor_performance *VAR_3 = FUNC_5(VAR_0);
 struct drv_cmd VAR_4 = {
  .reg = &VAR_3->control_register,
  .val = VAR_2,
  .func.write = VAR_0->cpu_freq_write,
 };
 int VAR_5;

 VAR_5 = FUNC_2();
 if (FUNC_0(VAR_5, VAR_1))
  FUNC_1(&VAR_4);

 FUNC_4(VAR_1, FUNC_1, &VAR_4, 1);
 FUNC_3();
}
