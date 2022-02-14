
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_resource_source {int index; char* string_ptr; } ;


 int FUNC_0 () ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static void
FUNC_3(struct acpi_resource_source *VAR_0)
{
 FUNC_0();

 if (VAR_0->index == 0xFF) {
  return;
 }

 FUNC_1("Resource Source Index", VAR_0->index);

 FUNC_2("Resource Source",
      VAR_0->string_ptr ?
      VAR_0->string_ptr : "[Not Specified]");
}
