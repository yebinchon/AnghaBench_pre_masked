
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_walk_state {int dummy; } ;


 int FUNC_0 (struct acpi_walk_state*) ;
 struct acpi_walk_state* FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;

void FUNC_3(void)
{
 struct acpi_walk_state *VAR_1;

 VAR_1 = FUNC_1(VAR_0);
 if (!VAR_1) {
  FUNC_2("There is no method currently executing\n");
  return;
 }

 FUNC_0(VAR_1);
}
