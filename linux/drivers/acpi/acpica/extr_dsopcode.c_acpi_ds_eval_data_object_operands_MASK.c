
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int arg; } ;
struct TYPE_10__ {int aml_opcode; TYPE_4__* parent; TYPE_1__ value; } ;
union acpi_parse_object {TYPE_5__ common; } ;
struct TYPE_7__ {scalar_t__ value; } ;
union acpi_operand_object {TYPE_2__ integer; } ;
typedef scalar_t__ u32 ;
struct acpi_walk_state {int operand_index; int num_operands; union acpi_operand_object* result_obj; union acpi_operand_object** operands; int opcode; } ;
typedef int acpi_status ;
struct TYPE_8__ {int const aml_opcode; } ;
struct TYPE_9__ {TYPE_3__ common; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 scalar_t__ VAR_3 ;


 int FUNC_4 (struct acpi_walk_state*,union acpi_parse_object*,scalar_t__,union acpi_operand_object**) ;
 int FUNC_5 (struct acpi_walk_state*,union acpi_parse_object*,scalar_t__,union acpi_operand_object**) ;
 int FUNC_6 (struct acpi_walk_state*,int ,int) ;
 int FUNC_7 (int,struct acpi_walk_state*) ;
 int FUNC_8 (int ,union acpi_operand_object**,struct acpi_walk_state*) ;
 int FUNC_9 (union acpi_operand_object*) ;
 int VAR_4 ;
 int FUNC_10 (int ) ;

acpi_status
FUNC_11(struct acpi_walk_state *VAR_5,
      union acpi_parse_object *VAR_6,
      union acpi_operand_object *VAR_7)
{
 acpi_status VAR_8;
 union acpi_operand_object *VAR_9;
 u32 VAR_10;

 FUNC_2(VAR_4);







 VAR_5->operand_index = VAR_5->num_operands;



 if (!VAR_6->common.value.arg) {
  FUNC_0((VAR_1,
       "Missing child while evaluating opcode %4.4X, Op %p",
       VAR_6->common.aml_opcode, VAR_6));
  FUNC_10(VAR_2);
 }

 VAR_8 = FUNC_6(VAR_5, VAR_6->common.value.arg, 1);
 if (FUNC_1(VAR_8)) {
  FUNC_10(VAR_8);
 }

 VAR_8 = FUNC_8(VAR_5->opcode,
       &(VAR_5->
         operands[VAR_5->num_operands -
           1]), VAR_5);
 if (FUNC_1(VAR_8)) {
  FUNC_10(VAR_8);
 }



 VAR_9 = VAR_5->operands[VAR_5->num_operands - 1];
 VAR_10 = (u32) VAR_9->integer.value;



 VAR_8 = FUNC_7(1, VAR_5);
 if (FUNC_1(VAR_8)) {
  FUNC_10(VAR_8);
 }

 FUNC_9(VAR_9);




 switch (VAR_6->common.aml_opcode) {
 case 130:

  VAR_8 =
      FUNC_4(VAR_5, VAR_6, VAR_10,
            &VAR_7);
  break;

 case 129:
 case 128:

  VAR_8 =
      FUNC_5(VAR_5, VAR_6, VAR_10,
             &VAR_7);
  break;

 default:

  FUNC_10(VAR_0);
 }

 if (FUNC_3(VAR_8)) {





  if ((!VAR_6->common.parent) ||
      ((VAR_6->common.parent->common.aml_opcode != 129) &&
       (VAR_6->common.parent->common.aml_opcode !=
        128)
       && (VAR_6->common.parent->common.aml_opcode !=
    VAR_3))) {
   VAR_5->result_obj = VAR_7;
  }
 }

 FUNC_10(VAR_8);
}
