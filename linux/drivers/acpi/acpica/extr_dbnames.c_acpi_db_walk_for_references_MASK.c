
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union acpi_operand_object {int dummy; } acpi_operand_object ;
typedef int u32 ;
typedef void acpi_namespace_node ;
typedef int acpi_status ;
typedef scalar_t__ acpi_handle ;


 int VAR_0 ;
 union acpi_operand_object* FUNC_0 (void*) ;
 int FUNC_1 (char*,void*,...) ;
 int FUNC_2 (void*) ;

__attribute__((used)) static acpi_status
FUNC_3(acpi_handle VAR_1,
       u32 VAR_2,
       void *VAR_3, void **VAR_4)
{
 union acpi_operand_object *VAR_5 =
     (union acpi_operand_object *)VAR_3;
 struct acpi_namespace_node *VAR_6 =
     (struct acpi_namespace_node *)VAR_1;



 if (VAR_6 == (void *)VAR_5) {
  FUNC_1("Object is a Node [%4.4s]\n",
          FUNC_2(VAR_6));
 }



 if (FUNC_0(VAR_6) == VAR_5) {
  FUNC_1("Reference at Node->Object %p [%4.4s]\n",
          VAR_6, FUNC_2(VAR_6));
 }

 return (VAR_0);
}
