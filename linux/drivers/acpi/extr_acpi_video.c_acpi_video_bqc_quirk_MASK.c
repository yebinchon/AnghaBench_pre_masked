
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int _BQC_use_index; scalar_t__ _BCL_reversed; } ;
struct acpi_video_device_brightness {int* levels; unsigned long long count; TYPE_1__ flags; } ;
struct TYPE_4__ {scalar_t__ _BCQ; scalar_t__ _BQC; } ;
struct acpi_video_device {TYPE_2__ cap; struct acpi_video_device_brightness* brightness; } ;


 int VAR_0 ;
 int FUNC_0 (struct acpi_video_device*,unsigned long long*,int) ;
 int FUNC_1 (struct acpi_video_device*,int) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_2(struct acpi_video_device *VAR_2,
    int VAR_3, int VAR_4)
{
 struct acpi_video_device_brightness *VAR_5 = VAR_2->brightness;
 int VAR_6;
 unsigned long long VAR_7;
 int VAR_8;


 if (VAR_1)
  return 0;
 VAR_8 = VAR_4 == VAR_3
  ? VAR_5->levels[VAR_0 + 1]
  : VAR_3;

 VAR_6 = FUNC_1(VAR_2, VAR_8);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_0(VAR_2, &VAR_7, 1);
 if (VAR_6)
  return VAR_6;

 if (VAR_7 != VAR_8) {

  if (VAR_7 < VAR_5->count) {
   if (VAR_5->flags._BCL_reversed)
    VAR_7 = VAR_5->count - VAR_0 - 1 - VAR_7;
   if (VAR_5->levels[VAR_7 + VAR_0] == VAR_8)
    VAR_5->flags._BQC_use_index = 1;
  }

  if (!VAR_5->flags._BQC_use_index)
   VAR_2->cap._BQC = VAR_2->cap._BCQ = 0;
 }

 return 0;
}
