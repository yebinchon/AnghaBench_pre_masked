
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_processor_performance {int dummy; } ;
struct acpi_processor {struct acpi_processor_performance* performance; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct acpi_processor*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct acpi_processor* FUNC_4 (int ,unsigned int) ;
 int VAR_5 ;
 int VAR_6 ;

int
FUNC_5(struct acpi_processor_performance
        *VAR_7, unsigned int VAR_8)
{
 struct acpi_processor *VAR_9;

 if (!VAR_4)
  return -VAR_1;

 FUNC_2(&VAR_5);

 VAR_9 = FUNC_4(VAR_6, VAR_8);
 if (!VAR_9) {
  FUNC_3(&VAR_5);
  return -VAR_3;
 }

 if (VAR_9->performance) {
  FUNC_3(&VAR_5);
  return -VAR_0;
 }

 FUNC_0(!VAR_7);

 VAR_9->performance = VAR_7;

 if (FUNC_1(VAR_9)) {
  VAR_9->performance = ((void*)0);
  FUNC_3(&VAR_5);
  return -VAR_2;
 }

 FUNC_3(&VAR_5);
 return 0;
}
