
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t value; } ;
union acpi_operand_object {TYPE_1__ integer; } ;
typedef int u64 ;
typedef size_t u32 ;
struct acpi_walk_state {TYPE_3__* local_variables; TYPE_2__* arguments; } ;
struct acpi_namespace_node {scalar_t__ type; union acpi_operand_object* object; } ;
typedef int acpi_status ;
struct TYPE_6__ {union acpi_operand_object* object; } ;
struct TYPE_5__ {union acpi_operand_object* object; } ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct acpi_namespace_node* FUNC_1 (char*) ;
 int FUNC_2 (union acpi_operand_object*,struct acpi_walk_state*) ;
 struct acpi_walk_state* FUNC_3 (int ) ;
 int FUNC_4 (int ,size_t,union acpi_operand_object*,struct acpi_walk_state*) ;
 int VAR_5 ;
 int FUNC_5 (char*,...) ;
 union acpi_operand_object* FUNC_6 (int ) ;
 int FUNC_7 (union acpi_operand_object*) ;
 int FUNC_8 (char*) ;
 size_t FUNC_9 (char*,int *,int) ;

void FUNC_10(char *VAR_6, char *VAR_7, char *VAR_8)
{
 char VAR_9;
 u32 VAR_10;
 u32 VAR_11;
 struct acpi_walk_state *VAR_12;
 union acpi_operand_object *VAR_13;
 acpi_status VAR_14;
 struct acpi_namespace_node *VAR_15;



 FUNC_8(VAR_6);
 VAR_9 = VAR_6[0];
 if ((VAR_9 != 'L') && (VAR_9 != 'A') && (VAR_9 != 'N')) {
  FUNC_5("Invalid SET operand: %s\n", VAR_6);
  return;
 }

 VAR_11 = FUNC_9(VAR_8, ((void*)0), 16);

 if (VAR_9 == 'N') {
  VAR_15 = FUNC_1(VAR_7);
  if (!VAR_15) {
   return;
  }

  if (VAR_15->type != VAR_4) {
   FUNC_5("Can only set Integer nodes\n");
   return;
  }
  VAR_13 = VAR_15->object;
  VAR_13->integer.value = VAR_11;
  return;
 }



 VAR_10 = FUNC_9(VAR_7, ((void*)0), 16);

 VAR_12 = FUNC_3(VAR_5);
 if (!VAR_12) {
  FUNC_5("There is no method currently executing\n");
  return;
 }



 VAR_13 = FUNC_6((u64)VAR_11);
 if (!VAR_13) {
  FUNC_5("Could not create an internal object\n");
  return;
 }



 switch (VAR_9) {
 case 'A':



  if (VAR_10 > VAR_0) {
   FUNC_5("Arg%u - Invalid argument name\n",
           VAR_10);
   goto cleanup;
  }

  VAR_14 = FUNC_4(VAR_2,
             VAR_10, VAR_13,
             VAR_12);
  if (FUNC_0(VAR_14)) {
   goto cleanup;
  }

  VAR_13 = VAR_12->arguments[VAR_10].object;

  FUNC_5("Arg%u: ", VAR_10);
  FUNC_2(VAR_13, VAR_12);
  break;

 case 'L':



  if (VAR_10 > VAR_1) {
   FUNC_5
       ("Local%u - Invalid local variable name\n", VAR_10);
   goto cleanup;
  }

  VAR_14 = FUNC_4(VAR_3,
             VAR_10, VAR_13,
             VAR_12);
  if (FUNC_0(VAR_14)) {
   goto cleanup;
  }

  VAR_13 = VAR_12->local_variables[VAR_10].object;

  FUNC_5("Local%u: ", VAR_10);
  FUNC_2(VAR_13, VAR_12);
  break;

 default:

  break;
 }

cleanup:
 FUNC_7(VAR_13);
}
