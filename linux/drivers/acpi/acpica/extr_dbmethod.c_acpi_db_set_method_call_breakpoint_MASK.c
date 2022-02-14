
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union acpi_parse_object {int dummy; } acpi_parse_object ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;

void FUNC_1(union acpi_parse_object *VAR_2)
{

 if (!VAR_2) {
  FUNC_0("There is no method currently executing\n");
  return;
 }

 VAR_1 = VAR_0;
}
