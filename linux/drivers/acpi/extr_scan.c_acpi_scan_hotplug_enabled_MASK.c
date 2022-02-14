
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_hotplug_profile {int enabled; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct acpi_hotplug_profile *VAR_1, bool VAR_2)
{
 if (!!VAR_1->enabled == !!VAR_2)
  return;

 FUNC_0(&VAR_0);

 VAR_1->enabled = VAR_2;

 FUNC_1(&VAR_0);
}
