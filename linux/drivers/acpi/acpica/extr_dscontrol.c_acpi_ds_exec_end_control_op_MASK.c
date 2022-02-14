
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int arg; } ;
struct TYPE_19__ {int aml_opcode; TYPE_2__ value; } ;
union acpi_parse_object {TYPE_8__ common; } ;
struct TYPE_18__ {int const opcode; int package_end; int aml_predicate_start; int loop_timeout; } ;
struct TYPE_12__ {int value; } ;
union acpi_generic_state {TYPE_7__ control; TYPE_1__ common; } ;
typedef int u8 ;
struct acpi_walk_state {union acpi_generic_state* control_state; int aml_last_while; TYPE_9__* return_desc; int num_operands; TYPE_9__** operands; TYPE_6__* results; int result_count; int last_predicate; } ;
typedef int acpi_status ;
struct TYPE_15__ {int class; } ;
struct TYPE_14__ {int type; } ;
struct TYPE_20__ {TYPE_4__ reference; TYPE_3__ common; } ;
struct TYPE_16__ {TYPE_9__** obj_desc; } ;
struct TYPE_17__ {TYPE_5__ results; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_9__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_6 (struct acpi_walk_state*) ;
 int FUNC_7 (struct acpi_walk_state*) ;
 int FUNC_8 (struct acpi_walk_state*,int ) ;
 int FUNC_9 (TYPE_9__**,struct acpi_walk_state*) ;
 int FUNC_10 () ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (union acpi_generic_state*) ;
 union acpi_generic_state* FUNC_13 (union acpi_generic_state**) ;
 int FUNC_14 (TYPE_9__*) ;
 int VAR_14 ;

acpi_status
FUNC_15(struct acpi_walk_state *VAR_15,
       union acpi_parse_object *VAR_16)
{
 acpi_status VAR_17 = VAR_13;
 union acpi_generic_state *VAR_18;

 FUNC_3(VAR_14);

 switch (VAR_16->common.aml_opcode) {
 case 131:

  FUNC_0((VAR_0, "[IF_OP] Op=%p\n", VAR_16));





  VAR_15->last_predicate =
      (u8)VAR_15->control_state->common.value;





  VAR_18 =
      FUNC_13(&VAR_15->control_state);
  FUNC_12(VAR_18);
  break;

 case 132:

  break;

 case 128:

  FUNC_0((VAR_0, "[WHILE_OP] Op=%p\n", VAR_16));

  VAR_18 = VAR_15->control_state;
  if (VAR_18->common.value) {
   if (FUNC_5(FUNC_10(),
         VAR_18->control.
         loop_timeout)) {
    VAR_17 = VAR_6;
    break;
   }





   VAR_17 = VAR_10;
   VAR_15->aml_last_while =
       VAR_18->control.aml_predicate_start;
   break;
  }



  FUNC_0((VAR_0,
      "[WHILE_OP] termination! Op=%p\n", VAR_16));



  VAR_18 =
      FUNC_13(&VAR_15->control_state);
  FUNC_12(VAR_18);
  break;

 case 129:

  FUNC_0((VAR_0,
      "[RETURN_OP] Op=%p Arg=%p\n", VAR_16,
      VAR_16->common.value.arg));






  if (VAR_16->common.value.arg) {



   FUNC_7(VAR_15);



   VAR_17 =
       FUNC_8(VAR_15,
          VAR_16->common.value.arg);
   if (FUNC_2(VAR_17)) {
    return (VAR_17);
   }






   VAR_17 =
       FUNC_9(&VAR_15->operands[0],
           VAR_15);
   if (FUNC_2(VAR_17)) {
    return (VAR_17);
   }






   VAR_15->return_desc = VAR_15->operands[0];
  } else if (VAR_15->result_count) {



   FUNC_7(VAR_15);
   if ((FUNC_4
        (VAR_15->results->results.obj_desc[0]) ==
        VAR_1)
       && ((VAR_15->results->results.obj_desc[0])->
    common.type == VAR_4)
       && ((VAR_15->results->results.obj_desc[0])->
    reference.class != VAR_2)) {
    VAR_17 =
        FUNC_9(&VAR_15->
            results->results.
            obj_desc[0],
            VAR_15);
    if (FUNC_2(VAR_17)) {
     return (VAR_17);
    }
   }

   VAR_15->return_desc =
       VAR_15->results->results.obj_desc[0];
  } else {


   if (VAR_15->num_operands) {
    FUNC_14(VAR_15->
        operands[0]);
   }

   VAR_15->operands[0] = ((void*)0);
   VAR_15->num_operands = 0;
   VAR_15->return_desc = ((void*)0);
  }

  FUNC_0((VAR_0,
      "Completed RETURN_OP State=%p, RetVal=%p\n",
      VAR_15, VAR_15->return_desc));



  VAR_17 = VAR_11;
  break;

 case 130:



  break;

 case 135:

  FUNC_6(VAR_15);



  VAR_17 = FUNC_11(VAR_3,
     "Executed AML Breakpoint opcode");
  break;

 case 134:
 case 133:



  while (VAR_15->control_state &&
         (VAR_15->control_state->control.opcode !=
   128)) {
   VAR_18 =
       FUNC_13(&VAR_15->
            control_state);
   FUNC_12(VAR_18);
  }



  if (!VAR_15->control_state) {
   return (VAR_7);
  }



  VAR_15->aml_last_while =
      VAR_15->control_state->control.package_end;



  if (VAR_16->common.aml_opcode == 134) {
   VAR_17 = VAR_8;
  } else {
   VAR_17 = VAR_9;
  }
  break;

 default:

  FUNC_1((VAR_12, "Unknown control opcode=0x%X Op=%p",
       VAR_16->common.aml_opcode, VAR_16));

  VAR_17 = VAR_5;
  break;
 }

 return (VAR_17);
}
