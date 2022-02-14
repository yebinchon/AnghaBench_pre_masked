
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char acpi_namespace_node ;
typedef int acpi_status ;


 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 char* FUNC_2 (char*) ;
 char* FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (char*,char*,char*) ;
 int FUNC_5 (int ) ;

void FUNC_6(char *VAR_1)
{
 struct acpi_namespace_node *VAR_2;
 acpi_status VAR_3;



 VAR_2 = FUNC_2(VAR_1);
 if (!VAR_2) {
  return;
 }

 VAR_3 = FUNC_5(FUNC_0(VAR_0, VAR_2));
 if (FUNC_1(VAR_3)) {
  FUNC_4("Parent of [%s] (%p) unloaded and uninstalled\n",
          VAR_1, VAR_2);
 } else {
  FUNC_4("%s, while unloading parent table of [%s]\n",
          FUNC_3(VAR_3), VAR_1);
 }
}
