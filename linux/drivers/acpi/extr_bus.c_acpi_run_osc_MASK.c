
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int length; int * pointer; } ;
struct TYPE_5__ {int value; } ;
union acpi_object {scalar_t__ type; TYPE_3__ buffer; TYPE_1__ integer; } ;
typedef int u8 ;
typedef int u32 ;
struct TYPE_8__ {int length; int * pointer; } ;
struct TYPE_6__ {int length; int * pointer; } ;
struct acpi_osc_context {int rev; TYPE_4__ ret; TYPE_2__ cap; int uuid_str; } ;
struct acpi_object_list {int count; union acpi_object* pointer; } ;
struct acpi_buffer {int member_0; union acpi_object* pointer; int length; int * member_1; } ;
typedef int guid_t ;
typedef scalar_t__ acpi_status ;
typedef int acpi_handle ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 size_t VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_1 (int ,char*,struct acpi_object_list*,struct acpi_buffer*) ;
 int FUNC_2 (int ,struct acpi_osc_context*,char*) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int FUNC_4 (union acpi_object*) ;
 int * FUNC_5 (int *,int,int ) ;

acpi_status FUNC_6(acpi_handle VAR_16, struct acpi_osc_context *VAR_17)
{
 acpi_status VAR_18;
 struct acpi_object_list VAR_19;
 union acpi_object VAR_20[4];
 union acpi_object *VAR_21;
 guid_t VAR_22;
 u32 VAR_23;
 struct acpi_buffer VAR_24 = {VAR_0, ((void*)0)};

 if (!VAR_17)
  return VAR_3;
 if (FUNC_3(VAR_17->uuid_str, &VAR_22))
  return VAR_3;
 VAR_17->ret.length = VAR_0;
 VAR_17->ret.pointer = ((void*)0);


 VAR_19.count = 4;
 VAR_19.pointer = VAR_20;
 VAR_20[0].type = VAR_1;
 VAR_20[0].buffer.length = 16;
 VAR_20[0].buffer.pointer = (u8 *)&VAR_22;
 VAR_20[1].type = VAR_2;
 VAR_20[1].integer.value = VAR_17->rev;
 VAR_20[2].type = VAR_2;
 VAR_20[2].integer.value = VAR_17->cap.length/sizeof(u32);
 VAR_20[3].type = VAR_1;
 VAR_20[3].buffer.length = VAR_17->cap.length;
 VAR_20[3].buffer.pointer = VAR_17->cap.pointer;

 VAR_18 = FUNC_1(VAR_16, "_OSC", &VAR_19, &VAR_24);
 if (FUNC_0(VAR_18))
  return VAR_18;

 if (!VAR_24.length)
  return VAR_5;

 VAR_21 = VAR_24.pointer;
 if (VAR_21->type != VAR_1
  || VAR_21->buffer.length != VAR_17->cap.length) {
  FUNC_2(VAR_16, VAR_17,
   "_OSC evaluation returned wrong type");
  VAR_18 = VAR_8;
  goto out_kfree;
 }

 VAR_23 = *((u32 *)VAR_21->buffer.pointer) & ~(1 << 0);
 if (VAR_23) {
  if (VAR_23 & VAR_15)
   FUNC_2(VAR_16, VAR_17,
    "_OSC request failed");
  if (VAR_23 & VAR_12)
   FUNC_2(VAR_16, VAR_17,
    "_OSC invalid UUID");
  if (VAR_23 & VAR_11)
   FUNC_2(VAR_16, VAR_17,
    "_OSC invalid revision");
  if (VAR_23 & VAR_10) {
   if (((u32 *)VAR_17->cap.pointer)[VAR_13]
       & VAR_14)
    goto out_success;
   VAR_18 = VAR_7;
   goto out_kfree;
  }
  VAR_18 = VAR_3;
  goto out_kfree;
 }
out_success:
 VAR_17->ret.length = VAR_21->buffer.length;
 VAR_17->ret.pointer = FUNC_5(VAR_21->buffer.pointer,
           VAR_17->ret.length, VAR_9);
 if (!VAR_17->ret.pointer) {
  VAR_18 = VAR_4;
  goto out_kfree;
 }
 VAR_18 = VAR_6;

out_kfree:
 FUNC_4(VAR_24.pointer);
 if (VAR_18 != VAR_6)
  VAR_17->ret.pointer = ((void*)0);
 return VAR_18;
}
