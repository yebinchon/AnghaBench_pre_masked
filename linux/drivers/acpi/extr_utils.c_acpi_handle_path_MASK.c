
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_buffer {char* pointer; int length; } ;
typedef int acpi_handle ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,struct acpi_buffer*) ;
 scalar_t__ FUNC_1 () ;

__attribute__((used)) static char *FUNC_2(acpi_handle VAR_3)
{
 struct acpi_buffer VAR_4 = {
  .length = VAR_0,
  .pointer = ((void*)0)
 };

 if (FUNC_1() ||
     FUNC_0(VAR_3, VAR_1, &VAR_4) != VAR_2)
  return ((void*)0);
 return VAR_4.pointer;
}
