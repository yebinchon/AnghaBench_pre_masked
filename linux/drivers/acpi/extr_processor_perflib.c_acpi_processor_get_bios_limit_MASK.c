
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct acpi_processor {size_t performance_platform_limit; TYPE_2__* performance; } ;
struct TYPE_4__ {TYPE_1__* states; int state_count; } ;
struct TYPE_3__ {int core_frequency; } ;


 int VAR_0 ;
 struct acpi_processor* FUNC_0 (int ,int) ;
 int VAR_1 ;

int FUNC_1(int VAR_2, unsigned int *VAR_3)
{
 struct acpi_processor *VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_2);
 if (!VAR_4 || !VAR_4->performance || !VAR_4->performance->state_count)
  return -VAR_0;
 *VAR_3 = VAR_4->performance->states[VAR_4->performance_platform_limit].
  core_frequency * 1000;
 return 0;
}
