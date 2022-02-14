
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_namespace_node {int type; } ;
typedef int acpi_status ;
typedef int acpi_object_type ;
typedef scalar_t__ acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct acpi_namespace_node* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

acpi_status FUNC_4(acpi_handle VAR_5, acpi_object_type *VAR_6)
{
 struct acpi_namespace_node *VAR_7;
 acpi_status VAR_8;



 if (!VAR_6) {
  return (VAR_3);
 }



 if (VAR_5 == VAR_1) {
  *VAR_6 = VAR_2;
  return (VAR_4);
 }

 VAR_8 = FUNC_2(VAR_0);
 if (FUNC_0(VAR_8)) {
  return (VAR_8);
 }



 VAR_7 = FUNC_1(VAR_5);
 if (!VAR_7) {
  (void)FUNC_3(VAR_0);
  return (VAR_3);
 }

 *VAR_6 = VAR_7->type;

 VAR_8 = FUNC_3(VAR_0);
 return (VAR_8);
}
