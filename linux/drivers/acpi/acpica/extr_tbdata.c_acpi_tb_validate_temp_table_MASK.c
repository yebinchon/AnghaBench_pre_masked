
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_table_header {int dummy; } ;
struct acpi_table_desc {int length; int pointer; } ;
typedef int acpi_status ;


 int VAR_0 ;
 int FUNC_0 (struct acpi_table_desc*) ;

acpi_status FUNC_1(struct acpi_table_desc *VAR_1)
{

 if (!VAR_1->pointer && !VAR_0) {
  VAR_1->length = sizeof(struct acpi_table_header);
 }

 return (FUNC_0(VAR_1));
}
