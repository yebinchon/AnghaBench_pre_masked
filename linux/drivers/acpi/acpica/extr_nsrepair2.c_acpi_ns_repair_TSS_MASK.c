
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union acpi_operand_object {int dummy; } acpi_operand_object ;
struct acpi_namespace_node {int dummy; } ;
struct acpi_evaluate_info {int node; } ;
typedef int acpi_status ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct acpi_evaluate_info*,union acpi_operand_object*,int ,int,int,int ,char*) ;
 int FUNC_2 (int ,char*,int ,struct acpi_namespace_node**) ;

__attribute__((used)) static acpi_status
FUNC_3(struct acpi_evaluate_info *VAR_3,
     union acpi_operand_object **VAR_4)
{
 union acpi_operand_object *VAR_5 = *VAR_4;
 acpi_status VAR_6;
 struct acpi_namespace_node *VAR_7;
 VAR_6 = FUNC_2(VAR_3->node, "^_PSS",
      VAR_0, &VAR_7);
 if (FUNC_0(VAR_6)) {
  return (VAR_2);
 }

 VAR_6 = FUNC_1(VAR_3, VAR_5, 0, 5, 1,
        VAR_1,
        "PowerDissipation");

 return (VAR_6);
}
