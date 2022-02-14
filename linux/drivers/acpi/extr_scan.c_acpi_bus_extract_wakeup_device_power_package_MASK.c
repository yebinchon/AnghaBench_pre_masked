
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int value; } ;
struct TYPE_5__ {int count; union acpi_object* elements; } ;
struct TYPE_4__ {int * handle; } ;
union acpi_object {scalar_t__ type; TYPE_3__ integer; TYPE_2__ package; TYPE_1__ reference; } ;
typedef int u32 ;
struct acpi_device_wakeup {int gpe_number; int sleep_state; int resources; int * gpe_device; } ;
struct acpi_device {struct acpi_device_wakeup wakeup; int handle; } ;
struct acpi_buffer {scalar_t__ pointer; int * member_1; int member_0; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,int *,struct acpi_buffer*) ;
 int FUNC_4 (union acpi_object*,int,int *) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int*) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct acpi_device *VAR_6)
{
 acpi_handle VAR_7 = VAR_6->handle;
 struct acpi_device_wakeup *VAR_8 = &VAR_6->wakeup;
 struct acpi_buffer VAR_9 = { VAR_0, ((void*)0) };
 union acpi_object *VAR_10 = ((void*)0);
 union acpi_object *VAR_11 = ((void*)0);
 acpi_status VAR_12;
 int VAR_13 = -VAR_5;

 FUNC_2(&VAR_8->resources);


 VAR_12 = FUNC_3(VAR_7, "_PRW", ((void*)0), &VAR_9);
 if (FUNC_1(VAR_12)) {
  FUNC_0((VAR_4, VAR_12, "Evaluating _PRW"));
  return VAR_13;
 }

 VAR_10 = (union acpi_object *)VAR_9.pointer;

 if (!VAR_10 || VAR_10->package.count < 2)
  goto out;

 VAR_11 = &(VAR_10->package.elements[0]);
 if (!VAR_11)
  goto out;

 if (VAR_11->type == VAR_3) {
  if ((VAR_11->package.count < 2) ||
      (VAR_11->package.elements[0].type !=
       VAR_2)
      || (VAR_11->package.elements[1].type != VAR_1))
   goto out;

  VAR_8->gpe_device =
      VAR_11->package.elements[0].reference.handle;
  VAR_8->gpe_number =
      (u32) VAR_11->package.elements[1].integer.value;
 } else if (VAR_11->type == VAR_1) {
  VAR_8->gpe_device = ((void*)0);
  VAR_8->gpe_number = VAR_11->integer.value;
 } else {
  goto out;
 }

 VAR_11 = &(VAR_10->package.elements[1]);
 if (VAR_11->type != VAR_1)
  goto out;

 VAR_8->sleep_state = VAR_11->integer.value;

 VAR_13 = FUNC_4(VAR_10, 2, &VAR_8->resources);
 if (VAR_13)
  goto out;

 if (!FUNC_9(&VAR_8->resources)) {
  int VAR_14;

  VAR_13 = FUNC_7(&VAR_8->resources,
        &VAR_14);
  if (VAR_13) {
   FUNC_5(VAR_7, "Retrieving current states "
      "of wakeup power resources failed\n");
   FUNC_6(&VAR_8->resources);
   goto out;
  }
  if (VAR_14 < VAR_8->sleep_state) {
   FUNC_5(VAR_7, "Overriding _PRW sleep state "
      "(S%d) by S%d from power resources\n",
      (int)VAR_8->sleep_state, VAR_14);
   VAR_8->sleep_state = VAR_14;
  }
 }

 out:
 FUNC_8(VAR_9.pointer);
 return VAR_13;
}
