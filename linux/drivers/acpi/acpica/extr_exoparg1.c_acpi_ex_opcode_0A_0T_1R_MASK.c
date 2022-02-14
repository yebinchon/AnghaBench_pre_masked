
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union acpi_operand_object {int dummy; } acpi_operand_object ;
struct acpi_walk_state {int opcode; union acpi_operand_object* result_obj; } ;
typedef int acpi_status ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int FUNC_3 () ;
 int FUNC_4 (int) ;
 union acpi_operand_object* FUNC_5 (int ) ;
 int FUNC_6 (union acpi_operand_object*) ;
 int VAR_4 ;
 int FUNC_7 (int ) ;

acpi_status FUNC_8(struct acpi_walk_state *VAR_5)
{
 acpi_status VAR_6 = VAR_3;
 union acpi_operand_object *VAR_7 = ((void*)0);

 FUNC_2(VAR_4,
    FUNC_4(VAR_5->opcode));



 switch (VAR_5->opcode) {
 case 128:



  VAR_7 =
      FUNC_5(FUNC_3());
  if (!VAR_7) {
   VAR_6 = VAR_2;
   goto cleanup;
  }
  break;

 default:

  FUNC_0((VAR_1, "Unknown AML opcode 0x%X",
       VAR_5->opcode));
  VAR_6 = VAR_0;
  break;
 }

cleanup:



 if ((FUNC_1(VAR_6)) || VAR_5->result_obj) {
  FUNC_6(VAR_7);
  VAR_5->result_obj = ((void*)0);
 } else {


  VAR_5->result_obj = VAR_7;
 }

 FUNC_7(VAR_6);
}
