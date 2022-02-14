
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_walk_state {struct acpi_thread_state* thread; scalar_t__ deferred_node; struct acpi_namespace_node* method_node; } ;
struct acpi_thread_state {int dummy; } ;
struct acpi_namespace_node {int dummy; } ;
typedef int acpi_status ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct acpi_walk_state*) ;
 int FUNC_1 (struct acpi_walk_state*) ;
 struct acpi_namespace_node* VAR_2 ;
 int FUNC_2 (char*) ;

void
FUNC_3(acpi_status VAR_3, struct acpi_walk_state *VAR_4)
{
 struct acpi_thread_state *VAR_5;
 struct acpi_namespace_node *VAR_6;

 VAR_6 = VAR_4->method_node;



 if (VAR_6 == VAR_2) {
  return;
 }



 if ((VAR_3 & VAR_1) == VAR_0) {
  return;
 }



 if (VAR_4->deferred_node) {
  FUNC_2("Executing subtree for Buffer/Package/Region\n");
  return;
 }






 VAR_5 = VAR_4->thread;
 if (!VAR_5) {
  return;
 }



 FUNC_2("\n");
 FUNC_1(VAR_4);
 FUNC_2("\n");
 FUNC_0(VAR_4);
 FUNC_2("\n");
}
