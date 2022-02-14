
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ aml_opcode; TYPE_5__* parent; } ;
union acpi_parse_object {TYPE_6__ common; } ;
typedef int u8 ;
struct acpi_walk_state {TYPE_3__* control_state; int result_obj; } ;
struct acpi_opcode_info {int class; } ;
struct TYPE_10__ {scalar_t__ aml_opcode; } ;
struct TYPE_11__ {TYPE_4__ common; } ;
struct TYPE_8__ {union acpi_parse_object* predicate_op; } ;
struct TYPE_7__ {int state; } ;
struct TYPE_9__ {TYPE_2__ control; TYPE_1__ common; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,union acpi_parse_object*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;



 int VAR_5 ;
 scalar_t__ VAR_6 ;

 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;

 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;

 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (int ,struct acpi_walk_state*,int ) ;
 struct acpi_opcode_info* FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int VAR_14 ;
 int FUNC_6 (int ) ;

u8
FUNC_7(union acpi_parse_object * VAR_15,
         struct acpi_walk_state * VAR_16)
{
 const struct acpi_opcode_info *VAR_17;

 FUNC_2(VAR_14, VAR_15);



 if (!VAR_15) {
  FUNC_1((VAR_2, "Null Op"));
  FUNC_6(VAR_13);
 }
 (void)FUNC_3(VAR_16->result_obj, VAR_16,
      VAR_13);
 if ((!VAR_15->common.parent) ||
     (VAR_15->common.parent->common.aml_opcode == VAR_10)) {



  FUNC_0((VAR_1,
      "At Method level, result of [%s] not used\n",
      FUNC_5(VAR_15->common.
         aml_opcode)));
  FUNC_6(VAR_12);
 }



 VAR_17 =
     FUNC_4(VAR_15->common.parent->common.aml_opcode);
 if (VAR_17->class == VAR_5) {
  FUNC_1((VAR_2, "Unknown parent opcode Op=%p", VAR_15));
  FUNC_6(VAR_12);
 }







 switch (VAR_17->class) {
 case 133:

  switch (VAR_15->common.parent->common.aml_opcode) {
  case 129:



   goto result_used;

  case 130:
  case 128:




   if ((VAR_16->control_state->common.state ==
        VAR_0) &&
       (VAR_16->control_state->control.predicate_op ==
        VAR_15)) {
    goto result_used;
   }
   break;

  default:



   break;
  }



  goto result_not_used;

 case 132:




  goto result_used;

 case 131:

  if ((VAR_15->common.parent->common.aml_opcode == VAR_9) ||
      (VAR_15->common.parent->common.aml_opcode == VAR_6)
      || (VAR_15->common.parent->common.aml_opcode == VAR_8)
      || (VAR_15->common.parent->common.aml_opcode == VAR_4)
      || (VAR_15->common.parent->common.aml_opcode ==
   VAR_11)
      || (VAR_15->common.parent->common.aml_opcode ==
   VAR_7)
      || (VAR_15->common.parent->common.aml_opcode ==
   VAR_3)) {




   goto result_used;
  }

  goto result_not_used;

 default:




  goto result_used;
 }

result_used:
 FUNC_0((VAR_1,
     "Result of [%s] used by Parent [%s] Op=%p\n",
     FUNC_5(VAR_15->common.aml_opcode),
     FUNC_5(VAR_15->common.parent->common.
        aml_opcode), VAR_15));

 FUNC_6(VAR_13);

result_not_used:
 FUNC_0((VAR_1,
     "Result of [%s] not used by Parent [%s] Op=%p\n",
     FUNC_5(VAR_15->common.aml_opcode),
     FUNC_5(VAR_15->common.parent->common.
        aml_opcode), VAR_15));

 FUNC_6(VAR_12);
}
