
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int * elements; scalar_t__ count; } ;
struct TYPE_5__ {void* value; } ;
struct TYPE_4__ {int length; int * pointer; } ;
union acpi_object {TYPE_3__ package; void* type; TYPE_2__ integer; TYPE_1__ buffer; } ;
typedef int u8 ;
typedef void* u64 ;
struct acpi_object_list {int count; union acpi_object* pointer; } ;
struct acpi_buffer {scalar_t__ pointer; int * member_1; int member_0; } ;
typedef int guid_t ;
typedef scalar_t__ acpi_status ;
typedef int acpi_handle ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int ,char*,struct acpi_object_list*,struct acpi_buffer*) ;
 int FUNC_2 (int ,char*,scalar_t__) ;

union acpi_object *
FUNC_3(acpi_handle VAR_5, const guid_t *VAR_6, u64 VAR_7, u64 VAR_8,
    union acpi_object *VAR_9)
{
 acpi_status VAR_10;
 struct acpi_buffer VAR_11 = {VAR_0, ((void*)0)};
 union acpi_object VAR_12[4];
 struct acpi_object_list VAR_13 = {
  .count = 4,
  .pointer = VAR_12,
 };

 VAR_12[0].type = VAR_1;
 VAR_12[0].buffer.length = 16;
 VAR_12[0].buffer.pointer = (u8 *)VAR_6;
 VAR_12[1].type = VAR_2;
 VAR_12[1].integer.value = VAR_7;
 VAR_12[2].type = VAR_2;
 VAR_12[2].integer.value = VAR_8;
 if (VAR_9) {
  VAR_12[3] = *VAR_9;
 } else {
  VAR_12[3].type = VAR_3;
  VAR_12[3].package.count = 0;
  VAR_12[3].package.elements = ((void*)0);
 }

 VAR_10 = FUNC_1(VAR_5, "_DSM", &VAR_13, &VAR_11);
 if (FUNC_0(VAR_10))
  return (union acpi_object *)VAR_11.pointer;

 if (VAR_10 != VAR_4)
  FUNC_2(VAR_5,
    "failed to evaluate _DSM (0x%x)\n", VAR_10);

 return ((void*)0);
}
