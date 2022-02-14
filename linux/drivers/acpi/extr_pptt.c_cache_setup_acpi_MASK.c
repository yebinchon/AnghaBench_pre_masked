
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_table_header {int dummy; } ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,struct acpi_table_header**) ;
 int FUNC_2 () ;
 int FUNC_3 (struct acpi_table_header*) ;
 int FUNC_4 (struct acpi_table_header*,unsigned int) ;
 int FUNC_5 (char*,unsigned int) ;

int FUNC_6(unsigned int VAR_2)
{
 struct acpi_table_header *VAR_3;
 acpi_status VAR_4;

 FUNC_5("Cache Setup ACPI CPU %d\n", VAR_2);

 VAR_4 = FUNC_1(VAR_0, 0, &VAR_3);
 if (FUNC_0(VAR_4)) {
  FUNC_2();
  return -VAR_1;
 }

 FUNC_4(VAR_3, VAR_2);
 FUNC_3(VAR_3);

 return VAR_4;
}
