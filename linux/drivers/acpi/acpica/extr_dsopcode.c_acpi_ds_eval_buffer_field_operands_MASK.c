
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {union acpi_parse_object* arg; } ;
struct TYPE_4__ {scalar_t__ aml_opcode; TYPE_1__ value; struct acpi_namespace_node* node; } ;
union acpi_parse_object {TYPE_2__ common; } ;
typedef union acpi_operand_object {int dummy; } acpi_operand_object ;
struct acpi_walk_state {int ** operands; } ;
struct acpi_namespace_node {int dummy; } ;
typedef int acpi_status ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,union acpi_parse_object*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (struct acpi_walk_state*,union acpi_parse_object*) ;
 int FUNC_4 (scalar_t__,union acpi_operand_object*,int *,int *,int *,int *) ;
 int FUNC_5 (scalar_t__,int ,struct acpi_walk_state*) ;
 union acpi_operand_object* FUNC_6 (struct acpi_namespace_node*) ;
 int FUNC_7 (scalar_t__) ;
 int VAR_4 ;
 int FUNC_8 (int ) ;

acpi_status
FUNC_9(struct acpi_walk_state *VAR_5,
       union acpi_parse_object *VAR_6)
{
 acpi_status VAR_7;
 union acpi_operand_object *VAR_8;
 struct acpi_namespace_node *VAR_9;
 union acpi_parse_object *VAR_10;

 FUNC_2(VAR_4, VAR_6);





 VAR_9 = VAR_6->common.node;



 VAR_10 = VAR_6->common.value.arg;



 VAR_7 = FUNC_3(VAR_5, VAR_10);
 if (FUNC_1(VAR_7)) {
  FUNC_8(VAR_7);
 }

 VAR_8 = FUNC_6(VAR_9);
 if (!VAR_8) {
  FUNC_8(VAR_2);
 }



 VAR_7 =
     FUNC_5(VAR_6->common.aml_opcode, VAR_0,
         VAR_5);
 if (FUNC_1(VAR_7)) {
  FUNC_0((VAR_1, "(%s) bad operand(s), status 0x%X",
       FUNC_7(VAR_6->common.aml_opcode),
       VAR_7));

  FUNC_8(VAR_7);
 }



 if (VAR_6->common.aml_opcode == VAR_3) {



  VAR_7 =
      FUNC_4(VAR_6->common.aml_opcode, VAR_8,
           VAR_5->operands[0],
           VAR_5->operands[1],
           VAR_5->operands[2],
           VAR_5->operands[3]);
 } else {


  VAR_7 =
      FUNC_4(VAR_6->common.aml_opcode, VAR_8,
           VAR_5->operands[0],
           VAR_5->operands[1], ((void*)0),
           VAR_5->operands[2]);
 }

 FUNC_8(VAR_7);
}
