
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct acpi_video_device {int device_id; struct acpi_video_bus* video; } ;
struct acpi_video_bus {int attached_count; int child_count; TYPE_2__* attached_array; } ;
struct TYPE_3__ {int int_val; } ;
struct TYPE_4__ {TYPE_1__ value; } ;



__attribute__((used)) static bool FUNC_0(struct acpi_video_device *VAR_0)
{
 struct acpi_video_bus *VAR_1 = VAR_0->video;
 int VAR_2;






 if (!VAR_1->attached_count || VAR_1->child_count > 8)
  return 1;

 for (VAR_2 = 0; VAR_2 < VAR_1->attached_count; VAR_2++) {
  if ((VAR_1->attached_array[VAR_2].value.int_val & 0xfff) ==
      (VAR_0->device_id & 0xfff))
   return 1;
 }

 return 0;
}
