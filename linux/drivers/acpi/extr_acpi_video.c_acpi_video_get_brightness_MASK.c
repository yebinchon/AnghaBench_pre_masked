
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct backlight_device {int dummy; } ;
struct acpi_video_device {TYPE_1__* brightness; } ;
struct TYPE_2__ {int count; unsigned long long* levels; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct acpi_video_device*,unsigned long long*,int) ;
 struct acpi_video_device* FUNC_1 (struct backlight_device*) ;

__attribute__((used)) static int FUNC_2(struct backlight_device *VAR_2)
{
 unsigned long long VAR_3;
 int VAR_4;
 struct acpi_video_device *VAR_5 = FUNC_1(VAR_2);

 if (FUNC_0(VAR_5, &VAR_3, 0))
  return -VAR_1;
 for (VAR_4 = VAR_0; VAR_4 < VAR_5->brightness->count; VAR_4++) {
  if (VAR_5->brightness->levels[VAR_4] == VAR_3)
   return VAR_4 - VAR_0;
 }
 return 0;
}
