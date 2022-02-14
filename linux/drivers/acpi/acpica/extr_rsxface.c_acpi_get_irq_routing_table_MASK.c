
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_namespace_node {int dummy; } ;
struct acpi_buffer {int dummy; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int (*) (int ,struct acpi_buffer*)) ;
 int FUNC_2 (struct acpi_namespace_node*,struct acpi_buffer*) ;
 int FUNC_3 (int ,struct acpi_buffer*,struct acpi_namespace_node**) ;
 int FUNC_4 (int ) ;

acpi_status
FUNC_5(acpi_handle VAR_0,
      struct acpi_buffer *VAR_1)
{
 acpi_status VAR_2;
 struct acpi_namespace_node *VAR_3;

 FUNC_1(FUNC_5);



 VAR_2 = FUNC_3(VAR_0, VAR_1, &VAR_3);
 if (FUNC_0(VAR_2)) {
  FUNC_4(VAR_2);
 }

 VAR_2 = FUNC_2(VAR_3, VAR_1);
 FUNC_4(VAR_2);
}
