
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; } ;
union acpi_operand_object {TYPE_1__ integer; } ;
typedef void* u32 ;
struct acpi_walk_state {int opcode; union acpi_operand_object** operands; } ;
struct acpi_signal_fatal_info {void* argument; void* code; void* type; } ;
typedef int acpi_status ;


 struct acpi_signal_fatal_info* FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct acpi_signal_fatal_info*) ;
 int FUNC_4 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int FUNC_5 (int ,struct acpi_signal_fatal_info*) ;
 int FUNC_6 (int) ;
 int VAR_5 ;
 int FUNC_7 (int ) ;

acpi_status FUNC_8(struct acpi_walk_state *VAR_6)
{
 union acpi_operand_object **VAR_7 = &VAR_6->operands[0];
 struct acpi_signal_fatal_info *VAR_8;
 acpi_status VAR_9 = VAR_4;

 FUNC_4(VAR_5,
    FUNC_6(VAR_6->opcode));

 switch (VAR_6->opcode) {
 case 128:

  FUNC_1((VAR_0,
      "FatalOp: Type %X Code %X Arg %X "
      "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n",
      (u32)VAR_7[0]->integer.value,
      (u32)VAR_7[1]->integer.value,
      (u32)VAR_7[2]->integer.value));

  VAR_8 = FUNC_0(sizeof(struct acpi_signal_fatal_info));
  if (VAR_8) {
   VAR_8->type = (u32) VAR_7[0]->integer.value;
   VAR_8->code = (u32) VAR_7[1]->integer.value;
   VAR_8->argument = (u32) VAR_7[2]->integer.value;
  }



  VAR_9 = FUNC_5(VAR_1, VAR_8);



  FUNC_3(VAR_8);
  goto cleanup;

 case 129:
  FUNC_2((VAR_3, "Executed External Op"));
  VAR_9 = VAR_4;
  goto cleanup;

 default:

  FUNC_2((VAR_3, "Unknown AML opcode 0x%X",
       VAR_6->opcode));

  VAR_9 = VAR_2;
  goto cleanup;
 }

cleanup:

 FUNC_7(VAR_9);
}
