
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct acpi_processor_performance {int state_count; unsigned int state; TYPE_1__* states; } ;
struct acpi_cpufreq_data {int dummy; } ;
struct TYPE_2__ {int core_frequency; } ;


 int VAR_0 ;
 struct acpi_processor_performance* FUNC_0 (struct acpi_cpufreq_data*) ;

__attribute__((used)) static unsigned long
FUNC_1(struct acpi_cpufreq_data *VAR_1, unsigned int VAR_2)
{
 struct acpi_processor_performance *VAR_3;

 VAR_3 = FUNC_0(VAR_1);
 if (VAR_0) {

  unsigned int VAR_4;
  unsigned long VAR_5;
  unsigned long VAR_6 = VAR_3->states[0].core_frequency * 1000;

  for (VAR_4 = 0; VAR_4 < (VAR_3->state_count-1); VAR_4++) {
   VAR_5 = VAR_6;
   VAR_6 = VAR_3->states[VAR_4+1].core_frequency * 1000;
   if ((2 * VAR_0) > (VAR_6 + VAR_5)) {
    VAR_3->state = VAR_4;
    return VAR_5;
   }
  }
  VAR_3->state = VAR_3->state_count-1;
  return VAR_6;
 } else {

  VAR_3->state = 0;
  return VAR_3->states[0].core_frequency * 1000;
 }
}
