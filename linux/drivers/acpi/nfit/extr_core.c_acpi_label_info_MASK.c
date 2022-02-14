
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union acpi_object {int dummy; } acpi_object ;
struct acpi_buffer {int pointer; int * member_1; int member_0; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int *,struct acpi_buffer*) ;
 union acpi_object* FUNC_2 (int ) ;

__attribute__((used)) static union acpi_object *FUNC_3(acpi_handle VAR_1)
{
 acpi_status VAR_2;
 struct acpi_buffer VAR_3 = { VAR_0, ((void*)0) };

 VAR_2 = FUNC_1(VAR_1, "_LSI", ((void*)0), &VAR_3);
 if (FUNC_0(VAR_2))
  return ((void*)0);
 return FUNC_2(VAR_3.pointer);
}
