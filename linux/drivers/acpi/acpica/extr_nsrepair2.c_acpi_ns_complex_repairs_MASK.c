
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union acpi_operand_object {int dummy; } acpi_operand_object ;
struct acpi_repair_info {int (* repair_function ) (struct acpi_evaluate_info*,union acpi_operand_object**) ;} ;
struct acpi_namespace_node {int dummy; } ;
struct acpi_evaluate_info {int dummy; } ;
typedef int acpi_status ;


 struct acpi_repair_info* FUNC_0 (struct acpi_namespace_node*) ;
 int FUNC_1 (struct acpi_evaluate_info*,union acpi_operand_object**) ;

acpi_status
FUNC_2(struct acpi_evaluate_info *VAR_0,
   struct acpi_namespace_node *VAR_1,
   acpi_status VAR_2,
   union acpi_operand_object **VAR_3)
{
 const struct acpi_repair_info *VAR_4;
 acpi_status VAR_5;



 VAR_4 = FUNC_0(VAR_1);
 if (!VAR_4) {
  return (VAR_2);
 }

 VAR_5 = VAR_4->repair_function(VAR_0, VAR_3);
 return (VAR_5);
}
