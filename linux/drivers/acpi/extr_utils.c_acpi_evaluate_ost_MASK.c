
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ length; int * pointer; } ;
struct TYPE_3__ {void* value; } ;
union acpi_object {TYPE_2__ buffer; TYPE_1__ integer; int type; } ;
typedef void* u32 ;
struct acpi_object_list {int member_0; union acpi_object* member_1; } ;
struct acpi_buffer {scalar_t__ length; int * pointer; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,struct acpi_object_list*,int *) ;

acpi_status
FUNC_1(acpi_handle VAR_2, u32 VAR_3, u32 VAR_4,
    struct acpi_buffer *VAR_5)
{
 union acpi_object VAR_6[3] = {
  {.type = VAR_1,},
  {.type = VAR_1,},
  {.type = VAR_0,}
 };
 struct acpi_object_list VAR_7 = {3, VAR_6};

 VAR_6[0].integer.value = VAR_3;
 VAR_6[1].integer.value = VAR_4;
 if (VAR_5 != ((void*)0)) {
  VAR_6[2].buffer.pointer = VAR_5->pointer;
  VAR_6[2].buffer.length = VAR_5->length;
 } else {
  VAR_6[2].buffer.pointer = ((void*)0);
  VAR_6[2].buffer.length = 0;
 }

 return FUNC_0(VAR_2, "_OST", &VAR_7, ((void*)0));
}
