
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; } ;
union acpi_object {TYPE_1__ integer; int type; } ;
typedef int u64 ;
struct acpi_object_list {int count; union acpi_object* pointer; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,struct acpi_object_list*,int *) ;

acpi_status FUNC_1(acpi_handle VAR_1, char *VAR_2,
           u64 VAR_3)
{
 union acpi_object VAR_4 = { .type = VAR_0 };
 struct acpi_object_list VAR_5 = { .count = 1, .pointer = &VAR_4, };

 VAR_4.integer.value = VAR_3;

 return FUNC_0(VAR_1, VAR_2, &VAR_5, ((void*)0));
}
