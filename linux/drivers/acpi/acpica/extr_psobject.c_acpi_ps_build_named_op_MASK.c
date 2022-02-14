
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ length; int * data; int aml; } ;
struct TYPE_4__ {union acpi_parse_object* arg; } ;
struct TYPE_5__ {scalar_t__ aml_opcode; int * end_blk_comment; int * comment_list; int * name_comment; int * close_brace_comment; int * end_node_comment; int * inline_comment; int aml; int cv_parent_filename; int cv_filename; TYPE_1__ value; scalar_t__ arg_list_length; } ;
union acpi_parse_object {TYPE_3__ named; TYPE_2__ common; } ;
typedef int u8 ;
struct acpi_walk_state {scalar_t__ opcode; scalar_t__ (* descending_callback ) (struct acpi_walk_state*,union acpi_parse_object**) ;int * op; int arg_types; int parser_state; } ;
typedef scalar_t__ acpi_status ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,struct acpi_walk_state*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_3 (struct acpi_walk_state*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int * VAR_10 ;
 int FUNC_6 (union acpi_parse_object*,union acpi_parse_object*) ;
 scalar_t__ FUNC_7 (struct acpi_walk_state*,int *,scalar_t__,union acpi_parse_object**) ;
 scalar_t__ FUNC_8 (struct acpi_walk_state*,union acpi_parse_object*,scalar_t__) ;
 int VAR_11 ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (struct acpi_walk_state*,union acpi_parse_object**) ;

acpi_status
FUNC_11(struct acpi_walk_state *VAR_12,
         u8 *VAR_13,
         union acpi_parse_object *VAR_14,
         union acpi_parse_object **VAR_15)
{
 acpi_status VAR_16 = VAR_6;
 union acpi_parse_object *VAR_17 = ((void*)0);

 FUNC_2(VAR_11, VAR_12);

 VAR_14->common.value.arg = ((void*)0);
 VAR_14->common.arg_list_length = 0;
 VAR_14->common.aml_opcode = VAR_12->opcode;





 while (FUNC_4(VAR_12->arg_types) &&
        (FUNC_4(VAR_12->arg_types) != VAR_9)) {
  FUNC_3(VAR_12);
  VAR_16 =
      FUNC_7(VAR_12,
      &(VAR_12->parser_state),
      FUNC_4(VAR_12->
             arg_types), &VAR_17);
  if (FUNC_1(VAR_16)) {
   FUNC_9(VAR_16);
  }

  FUNC_6(VAR_14, VAR_17);
  FUNC_5(VAR_12->arg_types);
 }



 FUNC_3(VAR_12);
 if (!FUNC_4(VAR_12->arg_types)) {
  FUNC_9(VAR_0);
 }



 FUNC_5(VAR_12->arg_types);





 VAR_12->op = ((void*)0);

 VAR_16 = VAR_12->descending_callback(VAR_12, VAR_15);
 if (FUNC_1(VAR_16)) {
  if (VAR_16 != VAR_4) {
   FUNC_0((VAR_5, VAR_16,
     "During name lookup/catalog"));
  }
  FUNC_9(VAR_16);
 }

 if (!*VAR_15) {
  FUNC_9(VAR_1);
 }

 VAR_16 = FUNC_8(VAR_12, *VAR_15, VAR_16);
 if (FUNC_1(VAR_16)) {
  if (VAR_16 == VAR_3) {
   VAR_16 = VAR_2;
  }
  FUNC_9(VAR_16);
 }

 FUNC_6(*VAR_15, VAR_14->common.value.arg);
 if ((*VAR_15)->common.aml_opcode == VAR_8 ||
     (*VAR_15)->common.aml_opcode == VAR_7) {
  (*VAR_15)->named.data = VAR_13;
  (*VAR_15)->named.length = 0;
 }

 FUNC_9(VAR_6);
}
