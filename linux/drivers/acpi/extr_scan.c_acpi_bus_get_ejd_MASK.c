
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* pointer; } ;
union acpi_object {TYPE_1__ string; } ;
struct acpi_buffer {union acpi_object* pointer; int * member_1; int member_0; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int *,struct acpi_buffer*) ;
 int FUNC_3 (int ,char*,int *) ;
 int FUNC_4 (union acpi_object*) ;

acpi_status
FUNC_5(acpi_handle VAR_2, acpi_handle *VAR_3)
{
 acpi_status VAR_4;
 acpi_handle VAR_5;
 struct acpi_buffer VAR_6 = {VAR_0, ((void*)0)};
 union acpi_object *VAR_7;

 VAR_4 = FUNC_3(VAR_2, "_EJD", &VAR_5);
 if (FUNC_0(VAR_4))
  return VAR_4;

 VAR_4 = FUNC_2(VAR_2, "_EJD", ((void*)0), &VAR_6);
 if (FUNC_1(VAR_4)) {
  VAR_7 = VAR_6.pointer;
  VAR_4 = FUNC_3(VAR_1, VAR_7->string.pointer,
      VAR_3);
  FUNC_4(VAR_6.pointer);
 }
 return VAR_4;
}
