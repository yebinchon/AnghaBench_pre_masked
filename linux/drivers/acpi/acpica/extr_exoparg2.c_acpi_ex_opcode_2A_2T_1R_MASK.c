
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; } ;
union acpi_operand_object {TYPE_1__ integer; } ;
struct acpi_walk_state {int opcode; union acpi_operand_object* result_obj; union acpi_operand_object** operands; } ;
typedef int acpi_status ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int FUNC_3 (union acpi_operand_object*,union acpi_operand_object*,struct acpi_walk_state*) ;
 int FUNC_4 (int) ;
 union acpi_operand_object* FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int *,int *) ;
 int FUNC_7 (union acpi_operand_object*) ;
 int VAR_4 ;
 int FUNC_8 (int ) ;

acpi_status FUNC_9(struct acpi_walk_state *VAR_5)
{
 union acpi_operand_object **VAR_6 = &VAR_5->operands[0];
 union acpi_operand_object *VAR_7 = ((void*)0);
 union acpi_operand_object *VAR_8 = ((void*)0);
 acpi_status VAR_9;

 FUNC_2(VAR_4,
    FUNC_4(VAR_5->opcode));



 switch (VAR_5->opcode) {
 case 128:



  VAR_7 =
      FUNC_5(VAR_0);
  if (!VAR_7) {
   VAR_9 = VAR_3;
   goto cleanup;
  }

  VAR_8 =
      FUNC_5(VAR_0);
  if (!VAR_8) {
   VAR_9 = VAR_3;
   goto cleanup;
  }



  VAR_9 = FUNC_6(VAR_6[0]->integer.value,
     VAR_6[1]->integer.value,
     &VAR_7->integer.value,
     &VAR_8->integer.value);
  if (FUNC_1(VAR_9)) {
   goto cleanup;
  }
  break;

 default:

  FUNC_0((VAR_2, "Unknown AML opcode 0x%X",
       VAR_5->opcode));

  VAR_9 = VAR_1;
  goto cleanup;
 }



 VAR_9 = FUNC_3(VAR_8, VAR_6[2], VAR_5);
 if (FUNC_1(VAR_9)) {
  goto cleanup;
 }

 VAR_9 = FUNC_3(VAR_7, VAR_6[3], VAR_5);
 if (FUNC_1(VAR_9)) {
  goto cleanup;
 }

cleanup:




 FUNC_7(VAR_8);

 if (FUNC_1(VAR_9)) {



  FUNC_7(VAR_7);
 }



 else {
  VAR_5->result_obj = VAR_7;
 }

 FUNC_8(VAR_9);
}
