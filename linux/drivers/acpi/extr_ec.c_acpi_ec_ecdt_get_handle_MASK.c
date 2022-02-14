
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_table_header {int dummy; } ;
struct acpi_table_ecdt {int id; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int ,int,struct acpi_table_header**) ;

__attribute__((used)) static bool FUNC_3(acpi_handle *VAR_1)
{
 struct acpi_table_ecdt *VAR_2;
 acpi_status VAR_3;
 acpi_handle VAR_4;

 VAR_3 = FUNC_2(VAR_0, 1,
    (struct acpi_table_header **)&VAR_2);
 if (FUNC_0(VAR_3))
  return 0;

 VAR_3 = FUNC_1(((void*)0), VAR_2->id, &VAR_4);
 if (FUNC_0(VAR_3))
  return 0;

 *VAR_1 = VAR_4;
 return 1;
}
