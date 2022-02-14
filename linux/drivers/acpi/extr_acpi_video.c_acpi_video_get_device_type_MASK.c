
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int int_val; } ;
struct acpi_video_enumerated_device {TYPE_1__ value; } ;
struct acpi_video_bus {int attached_count; struct acpi_video_enumerated_device* attached_array; } ;



__attribute__((used)) static int
FUNC_0(struct acpi_video_bus *VAR_0,
      unsigned long VAR_1)
{
 struct acpi_video_enumerated_device *VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->attached_count; VAR_3++) {
  VAR_2 = &VAR_0->attached_array[VAR_3];
  if ((VAR_2->value.int_val & 0xffff) == VAR_1)
   return VAR_2->value.int_val;
 }

 return 0;
}
