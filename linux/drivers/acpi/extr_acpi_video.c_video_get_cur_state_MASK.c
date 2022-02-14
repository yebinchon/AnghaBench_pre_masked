
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thermal_cooling_device {struct acpi_device* devdata; } ;
struct acpi_video_device {TYPE_1__* brightness; } ;
struct acpi_device {int dummy; } ;
struct TYPE_2__ {int count; unsigned long long* levels; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct acpi_video_device* FUNC_0 (struct acpi_device*) ;
 scalar_t__ FUNC_1 (struct acpi_video_device*,unsigned long long*,int) ;

__attribute__((used)) static int FUNC_2(struct thermal_cooling_device *VAR_2,
          unsigned long *VAR_3)
{
 struct acpi_device *VAR_4 = VAR_2->devdata;
 struct acpi_video_device *VAR_5 = FUNC_0(VAR_4);
 unsigned long long VAR_6;
 int VAR_7;

 if (FUNC_1(VAR_5, &VAR_6, 0))
  return -VAR_1;
 for (VAR_7 = VAR_0; VAR_7 < VAR_5->brightness->count;
      VAR_7++)
  if (VAR_6 == VAR_5->brightness->levels[VAR_7]) {
   *VAR_3 = VAR_5->brightness->count - VAR_7 - 1;
   return 0;
  }

 return -VAR_1;
}
