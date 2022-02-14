
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_walk_state {int dummy; } ;
struct acpi_thread_state {struct acpi_walk_state* walk_state_list; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;

struct acpi_walk_state *FUNC_2(struct acpi_thread_state
             *VAR_2)
{
 FUNC_1(VAR_1);

 if (!VAR_2) {
  return (((void*)0));
 }

 FUNC_0((VAR_0, "Current WalkState %p\n",
     VAR_2->walk_state_list));

 return (VAR_2->walk_state_list);
}
