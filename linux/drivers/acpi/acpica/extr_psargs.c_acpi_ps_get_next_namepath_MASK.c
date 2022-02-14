
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_17__ {char* name; } ;
struct TYPE_18__ {TYPE_8__ value; TYPE_7__* parent; struct acpi_namespace_node* node; } ;
union acpi_parse_object {TYPE_9__ common; } ;
struct TYPE_12__ {int param_count; } ;
union acpi_operand_object {TYPE_3__ method; } ;
typedef scalar_t__ u8 ;
struct TYPE_10__ {scalar_t__* aml; } ;
struct acpi_walk_state {int arg_count; int parse_flags; int scope_info; TYPE_5__* op; TYPE_1__ parser_state; int arg_types; } ;
struct acpi_parse_state {scalar_t__* aml; } ;
struct TYPE_11__ {int ascii; } ;
struct acpi_namespace_node {scalar_t__ type; TYPE_2__ name; } ;
typedef scalar_t__ acpi_status ;
struct TYPE_15__ {scalar_t__ aml_opcode; } ;
struct TYPE_16__ {TYPE_6__ common; } ;
struct TYPE_13__ {scalar_t__ aml_opcode; } ;
struct TYPE_14__ {TYPE_4__ common; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (scalar_t__,struct acpi_walk_state*) ;
 union acpi_operand_object* FUNC_8 (struct acpi_namespace_node*) ;
 scalar_t__ FUNC_9 (int ,char*,int ,int ,int,int *,struct acpi_namespace_node**) ;
 union acpi_parse_object* FUNC_10 (int ,scalar_t__*) ;
 int FUNC_11 (union acpi_parse_object*,union acpi_parse_object*) ;
 char* FUNC_12 (struct acpi_parse_state*) ;
 int FUNC_13 (union acpi_parse_object*,int ) ;
 int VAR_20 ;
 int FUNC_14 (scalar_t__) ;

acpi_status
FUNC_15(struct acpi_walk_state *VAR_21,
     struct acpi_parse_state *VAR_22,
     union acpi_parse_object *VAR_23, u8 VAR_24)
{
 acpi_status VAR_25;
 char *VAR_26;
 union acpi_parse_object *VAR_27;
 union acpi_operand_object *VAR_28;
 struct acpi_namespace_node *VAR_29;
 u8 *VAR_30 = VAR_22->aml;

 FUNC_4(VAR_20);

 VAR_26 = FUNC_12(VAR_22);
 FUNC_13(VAR_23, VAR_15);



 if (!VAR_26) {
  VAR_23->common.value.name = VAR_26;
  FUNC_14(VAR_12);
 }
 VAR_25 = FUNC_9(VAR_21->scope_info, VAR_26,
    VAR_6, VAR_1,
    VAR_3 | VAR_2,
    ((void*)0), &VAR_29);





 if (FUNC_5(VAR_25) &&
     VAR_24 && (VAR_29->type == VAR_7)) {
  if ((FUNC_6(VAR_21->arg_types) ==
       VAR_18)
      || (FUNC_6(VAR_21->arg_types) ==
   VAR_19)) {






   VAR_21->parser_state.aml = VAR_30;
   VAR_21->arg_count = 1;
   FUNC_13(VAR_23, VAR_14);
  }



  VAR_28 = FUNC_8(VAR_29);
  FUNC_0((VAR_0,
      "Control Method invocation %4.4s - %p Desc %p Path=%p\n",
      VAR_29->name.ascii, VAR_29, VAR_28, VAR_26));

  VAR_27 = FUNC_10(VAR_15, VAR_30);
  if (!VAR_27) {
   FUNC_14(VAR_11);
  }



  FUNC_13(VAR_23, VAR_14);
  VAR_27->common.value.name = VAR_26;



  VAR_27->common.node = VAR_29;
  FUNC_11(VAR_23, VAR_27);

  if (!VAR_28) {
   FUNC_1((VAR_9,
        "Control Method %p has no attached object",
        VAR_29));
   FUNC_14(VAR_8);
  }

  FUNC_0((VAR_0,
      "Control Method - %p Args %X\n",
      VAR_29, VAR_28->method.param_count));



  VAR_21->arg_count = VAR_28->method.param_count;
  FUNC_14(VAR_12);
 }





 if (VAR_25 == VAR_10) {



  if ((VAR_21->parse_flags & VAR_5) !=
      VAR_4) {
   VAR_25 = VAR_12;
  }



  else if (VAR_21->op->common.aml_opcode ==
    VAR_13) {
   VAR_25 = VAR_12;
  }






  else if ((VAR_23->common.parent) &&
    ((VAR_23->common.parent->common.aml_opcode ==
      VAR_16)
     || (VAR_23->common.parent->common.aml_opcode ==
         VAR_17))) {
   VAR_25 = VAR_12;
  }
 }



 if (FUNC_3(VAR_25)) {
  FUNC_2(VAR_21->scope_info, VAR_26, VAR_25);

  if ((VAR_21->parse_flags & VAR_5) ==
      VAR_4) {



   VAR_25 = FUNC_7(VAR_25, VAR_21);
  }
 }



 VAR_23->common.value.name = VAR_26;
 FUNC_14(VAR_25);
}
