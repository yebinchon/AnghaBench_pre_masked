
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union acpi_operand_object {int dummy; } acpi_operand_object ;
struct acpi_walk_state {int opcode; union acpi_operand_object** operands; } ;
typedef int acpi_status ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int FUNC_2 (union acpi_operand_object*,union acpi_operand_object*,struct acpi_walk_state*) ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 int FUNC_4 (int ) ;

acpi_status FUNC_5(struct acpi_walk_state *VAR_4)
{
 acpi_status VAR_5 = VAR_2;
 union acpi_operand_object **VAR_6 = &VAR_4->operands[0];

 FUNC_1(VAR_3,
    FUNC_3(VAR_4->opcode));



 switch (VAR_4->opcode) {
 case 128:

  VAR_5 = FUNC_2(VAR_6[0], VAR_6[1], VAR_4);
  break;

 default:

  FUNC_0((VAR_1, "Unknown AML opcode 0x%X",
       VAR_4->opcode));
  VAR_5 = VAR_0;
  goto cleanup;
 }

cleanup:

 FUNC_4(VAR_5);
}
