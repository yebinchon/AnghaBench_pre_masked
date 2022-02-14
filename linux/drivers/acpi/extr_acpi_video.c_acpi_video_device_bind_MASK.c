
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int int_val; } ;
struct acpi_video_enumerated_device {struct acpi_video_device* bind_info; TYPE_1__ value; } ;
struct acpi_video_device {int device_id; } ;
struct acpi_video_bus {int attached_count; struct acpi_video_enumerated_device* attached_array; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct acpi_video_bus *VAR_1,
         struct acpi_video_device *VAR_2)
{
 struct acpi_video_enumerated_device *VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1->attached_count; VAR_4++) {
  VAR_3 = &VAR_1->attached_array[VAR_4];
  if (VAR_2->device_id == (VAR_3->value.int_val & 0xffff)) {
   VAR_3->bind_info = VAR_2;
   FUNC_0((VAR_0, "device_bind %d\n", VAR_4));
  }
 }
}
