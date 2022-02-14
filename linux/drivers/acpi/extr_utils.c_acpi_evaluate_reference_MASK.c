
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ handle; } ;
struct TYPE_3__ {scalar_t__ count; union acpi_object* elements; } ;
union acpi_object {scalar_t__ type; TYPE_2__ reference; TYPE_1__ package; } ;
typedef size_t u32 ;
struct acpi_object_list {int dummy; } ;
struct acpi_handle_list {size_t count; scalar_t__* handles; } ;
struct acpi_buffer {scalar_t__ length; union acpi_object* pointer; int * member_1; int member_0; } ;
typedef int acpi_string ;
typedef int acpi_status ;
typedef int acpi_handle ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ,int ,struct acpi_object_list*,struct acpi_buffer*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (union acpi_object*) ;

acpi_status
FUNC_5(acpi_handle VAR_10,
   acpi_string VAR_11,
   struct acpi_object_list *VAR_12,
   struct acpi_handle_list *VAR_13)
{
 acpi_status VAR_14 = VAR_9;
 union acpi_object *VAR_15 = ((void*)0);
 union acpi_object *VAR_16 = ((void*)0);
 struct acpi_buffer VAR_17 = { VAR_0, ((void*)0) };
 u32 VAR_18 = 0;


 if (!VAR_13) {
  return VAR_6;
 }



 VAR_14 = FUNC_2(VAR_10, VAR_11, VAR_12, &VAR_17);
 if (FUNC_1(VAR_14))
  goto end;

 VAR_15 = VAR_17.pointer;

 if ((VAR_17.length == 0) || !VAR_15) {
  VAR_14 = VAR_5;
  FUNC_3(VAR_10, VAR_11, VAR_14);
  goto end;
 }
 if (VAR_15->type != VAR_4) {
  VAR_14 = VAR_5;
  FUNC_3(VAR_10, VAR_11, VAR_14);
  goto end;
 }
 if (!VAR_15->package.count) {
  VAR_14 = VAR_5;
  FUNC_3(VAR_10, VAR_11, VAR_14);
  goto end;
 }

 if (VAR_15->package.count > VAR_2) {
  FUNC_4(VAR_15);
  return VAR_7;
 }
 VAR_13->count = VAR_15->package.count;



 for (VAR_18 = 0; VAR_18 < VAR_13->count; VAR_18++) {

  VAR_16 = &(VAR_15->package.elements[VAR_18]);

  if (VAR_16->type != VAR_3) {
   VAR_14 = VAR_5;
   FUNC_3(VAR_10, VAR_11, VAR_14);
   break;
  }

  if (!VAR_16->reference.handle) {
   VAR_14 = VAR_8;
   FUNC_3(VAR_10, VAR_11, VAR_14);
   break;
  }


  VAR_13->handles[VAR_18] = VAR_16->reference.handle;
  FUNC_0((VAR_1, "Found reference [%p]\n",
      VAR_13->handles[VAR_18]));
 }

      end:
 if (FUNC_1(VAR_14)) {
  VAR_13->count = 0;

 }

 FUNC_4(VAR_17.pointer);

 return VAR_14;
}
