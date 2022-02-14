
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_buffer {scalar_t__ pointer; int * member_1; int member_0; } ;
typedef int ssize_t ;
typedef int acpi_handle ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,struct acpi_buffer*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_3(acpi_handle VAR_2, char *VAR_3)
{
 struct acpi_buffer VAR_4 = {VAR_0, ((void*)0)};
 int VAR_5;

 VAR_5 = FUNC_0(VAR_2, VAR_1, &VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_2(VAR_3, "%s\n", (char *)VAR_4.pointer);
 FUNC_1(VAR_4.pointer);
 return VAR_5;
}
