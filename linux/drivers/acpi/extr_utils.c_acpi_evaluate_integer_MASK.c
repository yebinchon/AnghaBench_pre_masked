
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long long value; } ;
union acpi_object {scalar_t__ type; TYPE_1__ integer; } ;
struct acpi_object_list {int dummy; } ;
struct acpi_buffer {int length; union acpi_object* pointer; int * member_1; int member_0; } ;
typedef int acpi_string ;
typedef int acpi_status ;
typedef int acpi_handle ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,struct acpi_object_list*,struct acpi_buffer*) ;
 int FUNC_3 (int ,int ,int ) ;

acpi_status
FUNC_4(acpi_handle VAR_5,
        acpi_string VAR_6,
        struct acpi_object_list *VAR_7, unsigned long long *VAR_8)
{
 acpi_status VAR_9 = VAR_4;
 union acpi_object VAR_10;
 struct acpi_buffer VAR_11 = { 0, ((void*)0) };

 if (!VAR_8)
  return VAR_3;

 VAR_11.length = sizeof(union acpi_object);
 VAR_11.pointer = &VAR_10;
 VAR_9 = FUNC_2(VAR_5, VAR_6, VAR_7, &VAR_11);
 if (FUNC_1(VAR_9)) {
  FUNC_3(VAR_5, VAR_6, VAR_9);
  return VAR_9;
 }

 if (VAR_10.type != VAR_1) {
  FUNC_3(VAR_5, VAR_6, VAR_2);
  return VAR_2;
 }

 *VAR_8 = VAR_10.integer.value;

 FUNC_0((VAR_0, "Return value [%llu]\n", *VAR_8));

 return VAR_4;
}
