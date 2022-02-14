
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_walk_state {struct acpi_walk_state* next; struct acpi_namespace_node* method_node; } ;
struct acpi_namespace_node {int dummy; } ;


 struct acpi_walk_state* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct acpi_namespace_node*) ;

void FUNC_3(void)
{
 struct acpi_walk_state *VAR_1;
 struct acpi_namespace_node *VAR_2;

 VAR_1 = FUNC_0(VAR_0);
 if (!VAR_1) {
  FUNC_1("There is no method currently executing\n");
  return;
 }

 VAR_2 = VAR_1->method_node;
 FUNC_1("Current Control Method Call Tree\n");

 while (VAR_1) {
  VAR_2 = VAR_1->method_node;
  FUNC_1("  [%4.4s]\n", FUNC_2(VAR_2));

  VAR_1 = VAR_1->next;
 }
}
