
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union acpi_parse_object {int dummy; } acpi_parse_object ;
struct TYPE_5__ {scalar_t__ (* implementation ) (struct acpi_walk_state*) ;} ;
struct TYPE_6__ {size_t param_count; int info_flags; TYPE_2__ dispatch; int aml_length; int aml_start; int owner_id; } ;
union acpi_operand_object {TYPE_3__ method; } ;
typedef size_t u32 ;
struct acpi_walk_state {size_t num_operands; int method_nesting_depth; int * method_pathname; int method_is_nested; int ** operands; struct acpi_namespace_node* method_call_node; int prev_op; } ;
struct acpi_thread_state {int dummy; } ;
struct TYPE_4__ {int ascii; } ;
struct acpi_namespace_node {TYPE_1__ name; } ;
struct acpi_evaluate_info {int ** parameters; } ;
typedef scalar_t__ acpi_status ;


 struct acpi_evaluate_info* FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct acpi_evaluate_info*) ;
 int FUNC_5 (int ,struct acpi_walk_state*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_6 (struct acpi_namespace_node*,union acpi_operand_object*,struct acpi_walk_state*) ;
 struct acpi_walk_state* FUNC_7 (int ,int *,union acpi_operand_object*,struct acpi_thread_state*) ;
 int FUNC_8 (struct acpi_walk_state*) ;
 scalar_t__ FUNC_9 (struct acpi_walk_state*,int *,struct acpi_namespace_node*,int ,int ,struct acpi_evaluate_info*,int ) ;
 int FUNC_10 (union acpi_operand_object*,struct acpi_walk_state*) ;
 union acpi_operand_object* FUNC_11 (struct acpi_namespace_node*) ;
 int * FUNC_12 (struct acpi_namespace_node*,int ) ;
 int FUNC_13 (int *) ;
 int VAR_10 ;
 int FUNC_14 (scalar_t__) ;
 scalar_t__ FUNC_15 (struct acpi_walk_state*) ;

acpi_status
FUNC_16(struct acpi_thread_state *VAR_11,
       struct acpi_walk_state *VAR_12,
       union acpi_parse_object *VAR_13)
{
 acpi_status VAR_14;
 struct acpi_namespace_node *VAR_15;
 struct acpi_walk_state *VAR_16 = ((void*)0);
 union acpi_operand_object *VAR_17;
 struct acpi_evaluate_info *VAR_18;
 u32 VAR_19;

 FUNC_5(VAR_10, VAR_12);

 FUNC_1((VAR_0,
     "Calling method %p, currentstate=%p\n",
     VAR_12->prev_op, VAR_12));




 VAR_15 = VAR_12->method_call_node;
 if (!VAR_15) {
  FUNC_14(VAR_6);
 }

 VAR_17 = FUNC_11(VAR_15);
 if (!VAR_17) {
  FUNC_14(VAR_7);
 }



 VAR_14 =
     FUNC_6(VAR_15, VAR_17,
        VAR_12);
 if (FUNC_3(VAR_14)) {
  FUNC_14(VAR_14);
 }



 VAR_16 =
     FUNC_7(VAR_17->method.owner_id, ((void*)0), VAR_17,
          VAR_11);
 if (!VAR_16) {
  VAR_14 = VAR_5;
  goto cleanup;
 }






 VAR_12->operands[VAR_12->num_operands] = ((void*)0);






 VAR_18 = FUNC_0(sizeof(struct acpi_evaluate_info));
 if (!VAR_18) {
  VAR_14 = VAR_5;
  goto cleanup;
 }

 VAR_18->parameters = &VAR_12->operands[0];

 VAR_14 = FUNC_9(VAR_16, ((void*)0), VAR_15,
           VAR_17->method.aml_start,
           VAR_17->method.aml_length, VAR_18,
           VAR_2);

 FUNC_4(VAR_18);
 if (FUNC_3(VAR_14)) {
  goto cleanup;
 }

 VAR_16->method_nesting_depth =
     VAR_12->method_nesting_depth + 1;





 for (VAR_19 = 0; VAR_19 < VAR_17->method.param_count; VAR_19++) {
  FUNC_13(VAR_12->operands[VAR_19]);
  VAR_12->operands[VAR_19] = ((void*)0);
 }



 VAR_12->num_operands = 0;

 FUNC_1((VAR_0,
     "**** Begin nested execution of [%4.4s] **** WalkState=%p\n",
     VAR_15->name.ascii, VAR_16));

 VAR_12->method_pathname =
     FUNC_12(VAR_15, VAR_9);
 VAR_12->method_is_nested = VAR_9;



 FUNC_2(*(VAR_1,
         "%-26s:  %*s%s\n", "   Nested method call",
         VAR_16->method_nesting_depth * 3, " ",
         &VAR_12->method_pathname[1]));



 if (VAR_17->method.info_flags & VAR_3) {
  VAR_14 =
      VAR_17->method.dispatch.implementation(VAR_16);
  if (VAR_14 == VAR_8) {
   VAR_14 = VAR_4;
  }
 }

 FUNC_14(VAR_14);

cleanup:



 FUNC_10(VAR_17, VAR_16);
 FUNC_8(VAR_16);

 FUNC_14(VAR_14);
}
