
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int count; int * elements; } ;
union acpi_object {scalar_t__ type; TYPE_1__ package; } ;
struct acpi_fan_fps {int dummy; } ;
struct acpi_fan {int fps_count; char* fps; } ;
struct acpi_device {int dev; int handle; } ;
struct acpi_buffer {int member_0; char* member_1; union acpi_object* pointer; } ;
typedef int acpi_status ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct acpi_fan* FUNC_1 (struct acpi_device*) ;
 int FUNC_2 (int ,char*,int *,struct acpi_buffer*) ;
 int FUNC_3 (int *,struct acpi_buffer*,struct acpi_buffer*) ;
 int VAR_5 ;
 int FUNC_4 (int *,char*) ;
 char* FUNC_5 (int *,int,int,int ) ;
 int FUNC_6 (union acpi_object*) ;
 int FUNC_7 (char*,int,int,int ,int *) ;

__attribute__((used)) static int FUNC_8(struct acpi_device *VAR_6)
{
 struct acpi_fan *VAR_7 = FUNC_1(VAR_6);
 struct acpi_buffer VAR_8 = { VAR_0, ((void*)0) };
 union acpi_object *VAR_9;
 acpi_status VAR_10;
 int VAR_11;

 VAR_10 = FUNC_2(VAR_6->handle, "_FPS", ((void*)0), &VAR_8);
 if (FUNC_0(VAR_10))
  return VAR_10;

 VAR_9 = VAR_8.pointer;
 if (!VAR_9 || VAR_9->type != VAR_1 || VAR_9->package.count < 2) {
  FUNC_4(&VAR_6->dev, "Invalid _FPS data\n");
  VAR_10 = -VAR_2;
  goto err;
 }

 VAR_7->fps_count = VAR_9->package.count - 1;
 VAR_7->fps = FUNC_5(&VAR_6->dev,
    VAR_7->fps_count, sizeof(struct acpi_fan_fps),
    VAR_4);
 if (!VAR_7->fps) {
  FUNC_4(&VAR_6->dev, "Not enough memory\n");
  VAR_10 = -VAR_3;
  goto err;
 }
 for (VAR_11 = 0; VAR_11 < VAR_7->fps_count; VAR_11++) {
  struct acpi_buffer VAR_12 = { sizeof("NNNNN"), "NNNNN" };
  struct acpi_buffer VAR_13 = { sizeof(VAR_7->fps[VAR_11]), &VAR_7->fps[VAR_11] };
  VAR_10 = FUNC_3(&VAR_9->package.elements[VAR_11 + 1],
           &VAR_12, &VAR_13);
  if (FUNC_0(VAR_10)) {
   FUNC_4(&VAR_6->dev, "Invalid _FPS element\n");
   break;
  }
 }


 FUNC_7(VAR_7->fps, VAR_7->fps_count, sizeof(*VAR_7->fps),
      VAR_5, ((void*)0));

err:
 FUNC_6(VAR_9);
 return VAR_10;
}
