
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {TYPE_7__* node; } ;
struct TYPE_11__ {scalar_t__ aml_opcode; } ;
union acpi_parse_object {TYPE_5__ named; TYPE_4__ common; } ;
typedef int u32 ;
struct acpi_walk_state {scalar_t__ opcode; int walk_type; TYPE_6__* op_info; TYPE_3__* control_state; union acpi_parse_object* origin; union acpi_parse_object* op; } ;
typedef int acpi_status ;
struct TYPE_14__ {int type; } ;
struct TYPE_13__ {int class; int object_type; } ;
struct TYPE_9__ {union acpi_parse_object* predicate_op; } ;
struct TYPE_8__ {scalar_t__ state; } ;
struct TYPE_10__ {TYPE_2__ control; TYPE_1__ common; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,struct acpi_walk_state*) ;
 int VAR_4 ;
 int VAR_5 ;




 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (struct acpi_walk_state*,union acpi_parse_object*) ;
 int FUNC_4 (struct acpi_walk_state*,union acpi_parse_object**) ;
 int FUNC_5 (int ,struct acpi_walk_state*) ;
 int FUNC_6 (struct acpi_walk_state*) ;
 int FUNC_7 (TYPE_7__*,int ,struct acpi_walk_state*) ;
 scalar_t__ FUNC_8 (int ) ;
 TYPE_6__* FUNC_9 (scalar_t__) ;
 int FUNC_10 (int ) ;
 int VAR_8 ;
 int FUNC_11 (int ) ;

acpi_status
FUNC_12(struct acpi_walk_state *VAR_9,
        union acpi_parse_object **VAR_10)
{
 union acpi_parse_object *VAR_11;
 acpi_status VAR_12 = VAR_5;
 u32 VAR_13;

 FUNC_2(VAR_8, VAR_9);

 VAR_11 = VAR_9->op;
 if (!VAR_11) {
  VAR_12 = FUNC_4(VAR_9, VAR_10);
  if (FUNC_1(VAR_12)) {
   goto error_exit;
  }

  VAR_11 = *VAR_10;
  VAR_9->op = VAR_11;
  VAR_9->opcode = VAR_11->common.aml_opcode;
  VAR_9->op_info =
      FUNC_9(VAR_11->common.aml_opcode);

  if (FUNC_8(VAR_9->op_info->object_type)) {
   FUNC_0((VAR_2,
       "(%s) Popping scope for Op %p\n",
       FUNC_10(VAR_9->
        op_info->
        object_type),
       VAR_11));

   VAR_12 = FUNC_6(VAR_9);
   if (FUNC_1(VAR_12)) {
    goto error_exit;
   }
  }
 }

 if (VAR_11 == VAR_9->origin) {
  if (VAR_10) {
   *VAR_10 = VAR_11;
  }

  FUNC_11(VAR_5);
 }






 if ((VAR_9->control_state) &&
     (VAR_9->control_state->common.state ==
      VAR_0)) {
  FUNC_0((VAR_3,
      "Exec predicate Op=%p State=%p\n",
      VAR_11, VAR_9));

  VAR_9->control_state->common.state =
      VAR_1;



  VAR_9->control_state->control.predicate_op = VAR_11;
 }

 VAR_13 = VAR_9->op_info->class;



 if (VAR_11->common.aml_opcode == VAR_6) {
  VAR_13 = 128;
 }




 switch (VAR_13) {
 case 131:

  VAR_12 = FUNC_3(VAR_9, VAR_11);
  break;

 case 128:

  if (VAR_9->walk_type & VAR_4) {
   if (VAR_11->common.aml_opcode != VAR_7) {
    VAR_12 =
        FUNC_4(VAR_9, ((void*)0));
   } else {
    VAR_12 =
        FUNC_7(VAR_11->named.node,
            VAR_11->named.node->
            type, VAR_9);
    if (FUNC_1(VAR_12)) {
     FUNC_11(VAR_12);
    }
   }
  }
  break;

 case 129:
 case 130:

  break;

 default:

  break;
 }



 FUNC_11(VAR_12);

error_exit:
 VAR_12 = FUNC_5(VAR_12, VAR_9);
 FUNC_11(VAR_12);
}
