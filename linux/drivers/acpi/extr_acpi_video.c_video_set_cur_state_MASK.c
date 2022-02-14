
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thermal_cooling_device {struct acpi_device* devdata; } ;
struct acpi_video_device {TYPE_1__* brightness; } ;
struct acpi_device {int dummy; } ;
struct TYPE_2__ {unsigned long count; int* levels; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 struct acpi_video_device* FUNC_0 (struct acpi_device*) ;
 int FUNC_1 (struct acpi_video_device*,int) ;

__attribute__((used)) static int
FUNC_2(struct thermal_cooling_device *VAR_2, unsigned long VAR_3)
{
 struct acpi_device *VAR_4 = VAR_2->devdata;
 struct acpi_video_device *VAR_5 = FUNC_0(VAR_4);
 int VAR_6;

 if (VAR_3 >= VAR_5->brightness->count - VAR_0)
  return -VAR_1;

 VAR_3 = VAR_5->brightness->count - VAR_3;
 VAR_6 = VAR_5->brightness->levels[VAR_3 - 1];
 return FUNC_1(VAR_5, VAR_6);
}
