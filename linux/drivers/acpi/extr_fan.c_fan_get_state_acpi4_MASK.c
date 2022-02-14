
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int count; TYPE_2__* elements; } ;
union acpi_object {scalar_t__ type; TYPE_3__ package; } ;
struct TYPE_9__ {scalar_t__ fine_grain_ctrl; } ;
struct acpi_fan {int fps_count; TYPE_5__* fps; TYPE_4__ fif; } ;
struct acpi_device {int dev; int handle; } ;
struct acpi_buffer {union acpi_object* pointer; int * member_1; int member_0; } ;
typedef int acpi_status ;
struct TYPE_10__ {int control; } ;
struct TYPE_6__ {int value; } ;
struct TYPE_7__ {scalar_t__ type; TYPE_1__ integer; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct acpi_fan* FUNC_1 (struct acpi_device*) ;
 int FUNC_2 (int ,char*,int *,struct acpi_buffer*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (union acpi_object*) ;

__attribute__((used)) static int FUNC_6(struct acpi_device *VAR_4, unsigned long *VAR_5)
{
 struct acpi_buffer VAR_6 = { VAR_0, ((void*)0) };
 struct acpi_fan *VAR_7 = FUNC_1(VAR_4);
 union acpi_object *VAR_8;
 acpi_status VAR_9;
 int VAR_10, VAR_11;

 VAR_9 = FUNC_2(VAR_4->handle, "_FST", ((void*)0), &VAR_6);
 if (FUNC_0(VAR_9)) {
  FUNC_4(&VAR_4->dev, "Get fan state failed\n");
  return VAR_9;
 }

 VAR_8 = VAR_6.pointer;
 if (!VAR_8 || VAR_8->type != VAR_2 ||
     VAR_8->package.count != 3 ||
     VAR_8->package.elements[1].type != VAR_1) {
  FUNC_4(&VAR_4->dev, "Invalid _FST data\n");
  VAR_9 = -VAR_3;
  goto err;
 }

 VAR_10 = VAR_8->package.elements[1].integer.value;
 for (VAR_11 = 0; VAR_11 < VAR_7->fps_count; VAR_11++) {






  if (VAR_7->fif.fine_grain_ctrl && VAR_10 < VAR_7->fps[VAR_11].control) {
   VAR_11 = (VAR_11 > 0) ? VAR_11 - 1 : 0;
   break;
  } else if (VAR_10 == VAR_7->fps[VAR_11].control) {
   break;
  }
 }
 if (VAR_11 == VAR_7->fps_count) {
  FUNC_3(&VAR_4->dev, "Invalid control value returned\n");
  VAR_9 = -VAR_3;
  goto err;
 }

 *VAR_5 = VAR_11;

err:
 FUNC_5(VAR_8);
 return VAR_9;
}
