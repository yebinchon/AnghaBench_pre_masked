
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union acpi_parse_object {int dummy; } acpi_parse_object ;
typedef union acpi_operand_object {int dummy; } acpi_operand_object ;
struct acpi_walk_state {int dummy; } ;
typedef int acpi_status ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,union acpi_operand_object*) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (union acpi_parse_object*,struct acpi_walk_state*) ;
 int FUNC_4 (union acpi_operand_object**,struct acpi_walk_state*) ;
 int FUNC_5 (union acpi_operand_object*) ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_6(union acpi_parse_object *VAR_3,
      union acpi_operand_object *VAR_4,
      struct acpi_walk_state *VAR_5)
{
 union acpi_operand_object *VAR_6;
 acpi_status VAR_7;

 FUNC_1(VAR_1, VAR_4);

 if (!VAR_3) {
  FUNC_0((VAR_0, "Null Op"));
  VAR_2;
 }

 if (!VAR_4) {
  VAR_2;
 }

 if (!FUNC_3(VAR_3, VAR_5)) {



  VAR_7 = FUNC_4(&VAR_6, VAR_5);
  if (FUNC_2(VAR_7)) {
   FUNC_5(VAR_4);
  }
 }

 VAR_2;
}
