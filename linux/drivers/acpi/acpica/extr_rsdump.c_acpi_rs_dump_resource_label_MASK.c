
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_resource_label {char* string_ptr; } ;


 int FUNC_0 () ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static void
FUNC_2(char *VAR_0,
       struct acpi_resource_label *VAR_1)
{
 FUNC_0();

 FUNC_1(VAR_0,
      VAR_1->string_ptr ?
      VAR_1->string_ptr : "[Not Specified]");
}
