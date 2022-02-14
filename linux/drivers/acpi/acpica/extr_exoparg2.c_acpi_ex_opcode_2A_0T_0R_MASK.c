
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; } ;
union acpi_operand_object {TYPE_1__ integer; } ;
typedef int u32 ;
struct acpi_walk_state {int opcode; union acpi_operand_object** operands; } ;
struct acpi_namespace_node {int type; } ;
typedef int acpi_status ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int FUNC_2 (struct acpi_namespace_node*) ;
 int FUNC_3 (struct acpi_namespace_node*,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int VAR_4 ;
 int FUNC_6 (int ) ;

acpi_status FUNC_7(struct acpi_walk_state *VAR_5)
{
 union acpi_operand_object **VAR_6 = &VAR_5->operands[0];
 struct acpi_namespace_node *VAR_7;
 u32 VAR_8;
 acpi_status VAR_9 = VAR_3;

 FUNC_1(VAR_4,
    FUNC_4(VAR_5->opcode));



 switch (VAR_5->opcode) {
 case 128:



  VAR_7 = (struct acpi_namespace_node *)VAR_6[0];



  VAR_8 = (u32) VAR_6[1]->integer.value;



  if (!FUNC_2(VAR_7)) {
   FUNC_0((VAR_2,
        "Unexpected notify object type [%s]",
        FUNC_5(VAR_7->type)));

   VAR_9 = VAR_1;
   break;
  }
  VAR_9 = FUNC_3(VAR_7, VAR_8);
  break;

 default:

  FUNC_0((VAR_2, "Unknown AML opcode 0x%X",
       VAR_5->opcode));
  VAR_9 = VAR_0;
 }

 FUNC_6(VAR_9);
}
