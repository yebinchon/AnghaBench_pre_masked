
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ aml_opcode; scalar_t__ arg_list_length; int flags; } ;
struct TYPE_6__ {scalar_t__* data; scalar_t__ length; } ;
union acpi_parse_object {TYPE_3__ common; TYPE_2__ named; } ;
typedef scalar_t__ u8 ;
struct TYPE_8__ {scalar_t__ aml; } ;
struct acpi_walk_state {scalar_t__ opcode; scalar_t__ (* descending_callback ) (struct acpi_walk_state*,union acpi_parse_object**) ;union acpi_parse_object* op; TYPE_4__ parser_state; TYPE_1__* op_info; scalar_t__ aml; } ;
struct acpi_opcode_info {int flags; int type; } ;
typedef scalar_t__ acpi_status ;
struct TYPE_5__ {int flags; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,struct acpi_walk_state*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 union acpi_parse_object* FUNC_2 (scalar_t__,scalar_t__*) ;
 int FUNC_3 (union acpi_parse_object*,union acpi_parse_object*) ;
 scalar_t__ FUNC_4 (struct acpi_walk_state*,scalar_t__*,union acpi_parse_object*,union acpi_parse_object**) ;
 int FUNC_5 (union acpi_parse_object*) ;
 scalar_t__ FUNC_6 (struct acpi_walk_state*) ;
 scalar_t__ FUNC_7 (int ) ;
 void* FUNC_8 (scalar_t__) ;
 union acpi_parse_object* FUNC_9 (TYPE_4__*) ;
 scalar_t__ FUNC_10 (struct acpi_walk_state*,union acpi_parse_object*,scalar_t__) ;
 int VAR_15 ;
 int FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (struct acpi_walk_state*,union acpi_parse_object**) ;

acpi_status
FUNC_13(struct acpi_walk_state *VAR_16,
    u8 *VAR_17, union acpi_parse_object **VAR_18)
{
 acpi_status VAR_19 = VAR_6;
 union acpi_parse_object *VAR_20;
 union acpi_parse_object *VAR_21 = ((void*)0);
 union acpi_parse_object *VAR_22;
 u8 VAR_23;
 const struct acpi_opcode_info *VAR_24;

 FUNC_1(VAR_15, VAR_16);

 VAR_19 = FUNC_6(VAR_16);
 if (VAR_19 == VAR_1) {
  FUNC_11(VAR_1);
 }
 if (FUNC_0(VAR_19)) {
  FUNC_11(VAR_19);
 }



 VAR_16->op_info = FUNC_8(VAR_16->opcode);
 VAR_20 = FUNC_2(VAR_16->opcode, VAR_17);
 if (!VAR_20) {
  FUNC_11(VAR_5);
 }

 if (VAR_16->op_info->flags & VAR_13) {
  VAR_19 =
      FUNC_4(VAR_16, VAR_17, VAR_20,
        &VAR_21);
  FUNC_5(VAR_20);
  if (FUNC_0(VAR_19)) {
   FUNC_11(VAR_19);
  }

  *VAR_18 = VAR_21;
  FUNC_11(VAR_6);
 }



 if (VAR_16->op_info->flags & VAR_8) {




  VAR_20->named.data = VAR_17;
  VAR_20->named.length = 0;
 }

 if (VAR_16->opcode == VAR_7) {




  VAR_20->named.data = VAR_17;
  VAR_20->named.length = 0;
 }

 VAR_22 = FUNC_9(&(VAR_16->parser_state));
 FUNC_3(VAR_22, VAR_20);

 if (VAR_22) {
  VAR_24 =
      FUNC_8(VAR_22->common.aml_opcode);
  if (VAR_24->flags & VAR_11) {
   VAR_23 =
       FUNC_7(VAR_24->type);
   if (VAR_22->common.arg_list_length >
       VAR_23) {
    VAR_20->common.flags |= VAR_0;
   }
  }





  else if ((VAR_22->common.aml_opcode == VAR_12)
    || (VAR_22->common.aml_opcode ==
        VAR_9)) {
   VAR_20->common.flags |= VAR_0;
  }
 }

 if (VAR_16->descending_callback != ((void*)0)) {




  VAR_16->op = *VAR_18 = VAR_20;

  VAR_19 = VAR_16->descending_callback(VAR_16, &VAR_20);
  VAR_19 = FUNC_10(VAR_16, VAR_20, VAR_19);
  if (VAR_19 == VAR_3) {
   VAR_19 = VAR_2;
  }
 }

 FUNC_11(VAR_19);
}
