
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union acpi_operand_object {int dummy; } acpi_operand_object ;
struct acpi_walk_state {int dummy; } ;


 int FUNC_0 (union acpi_operand_object*,struct acpi_walk_state*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (char*) ;

void
FUNC_3(union acpi_operand_object *VAR_2,
         struct acpi_walk_state *VAR_3)
{


 if (VAR_1 != FUNC_1()) {
  return;
 }




 if (!VAR_0) {
  return;
 }

 FUNC_2("ResultObj: ");
 FUNC_0(VAR_2, VAR_3);
 FUNC_2("\n");
}
