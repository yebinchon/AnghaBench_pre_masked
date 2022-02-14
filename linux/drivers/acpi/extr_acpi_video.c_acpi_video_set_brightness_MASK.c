
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int brightness; } ;
struct backlight_device {TYPE_1__ props; } ;
struct acpi_video_device {TYPE_2__* brightness; int switch_brightness_work; } ;
struct TYPE_4__ {int * levels; } ;


 int VAR_0 ;
 int FUNC_0 (struct acpi_video_device*,int ) ;
 struct acpi_video_device* FUNC_1 (struct backlight_device*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct backlight_device *VAR_1)
{
 int VAR_2 = VAR_1->props.brightness + VAR_0;
 struct acpi_video_device *VAR_3 = FUNC_1(VAR_1);

 FUNC_2(&VAR_3->switch_brightness_work);
 return FUNC_0(VAR_3,
    VAR_3->brightness->levels[VAR_2]);
}
