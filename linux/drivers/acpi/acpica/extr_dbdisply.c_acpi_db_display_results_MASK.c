
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union acpi_operand_object {int dummy; } acpi_operand_object ;
struct TYPE_2__ {union acpi_generic_state* next; union acpi_operand_object** obj_desc; } ;
union acpi_generic_state {TYPE_1__ results; } ;
typedef int u32 ;
struct acpi_walk_state {int result_count; union acpi_generic_state* results; struct acpi_namespace_node* method_node; union acpi_operand_object* method_desc; } ;
struct acpi_namespace_node {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (union acpi_operand_object*,struct acpi_walk_state*) ;
 struct acpi_walk_state* FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct acpi_namespace_node*) ;

void FUNC_4(void)
{
 u32 VAR_2;
 struct acpi_walk_state *VAR_3;
 union acpi_operand_object *VAR_4;
 u32 VAR_5 = 0;
 struct acpi_namespace_node *VAR_6;
 union acpi_generic_state *VAR_7;
 u32 VAR_8;

 VAR_3 = FUNC_1(VAR_1);
 if (!VAR_3) {
  FUNC_2("There is no method currently executing\n");
  return;
 }

 VAR_4 = VAR_3->method_desc;
 VAR_6 = VAR_3->method_node;

 if (VAR_3->results) {
  VAR_5 = VAR_3->result_count;
 }

 FUNC_2("Method [%4.4s] has %X stacked result objects\n",
         FUNC_3(VAR_6), VAR_5);



 VAR_7 = VAR_3->results;
 VAR_8 = (VAR_5 - 1) % VAR_0;

 for (VAR_2 = 0; VAR_2 < VAR_5; VAR_2++) {
  VAR_4 = VAR_7->results.obj_desc[VAR_8];
  FUNC_2("Result%u: ", VAR_2);
  FUNC_0(VAR_4, VAR_3);

  if (VAR_8 == 0) {
   VAR_7 = VAR_7->results.next;
   VAR_8 = VAR_0;
  }

  VAR_8--;
 }
}
