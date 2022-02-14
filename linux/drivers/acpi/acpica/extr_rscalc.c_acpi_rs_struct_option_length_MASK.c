
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_resource_source {scalar_t__ string_length; scalar_t__ string_ptr; } ;
typedef int acpi_rs_length ;


 int FUNC_0 () ;

__attribute__((used)) static acpi_rs_length
FUNC_1(struct acpi_resource_source *VAR_0)
{
 FUNC_0();






 if (VAR_0->string_ptr) {
  return ((acpi_rs_length)(VAR_0->string_length + 1));
 }

 return (0);
}
