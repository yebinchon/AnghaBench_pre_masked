
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct acpi_video_device {TYPE_3__* backlight; TYPE_1__* brightness; TYPE_4__* dev; } ;
struct TYPE_8__ {int handle; } ;
struct TYPE_6__ {int brightness; } ;
struct TYPE_7__ {TYPE_2__ props; } ;
struct TYPE_5__ {int curr; int count; int* levels; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_3(struct acpi_video_device *VAR_4, int VAR_5)
{
 int VAR_6;
 int VAR_7;

 VAR_6 = FUNC_2(VAR_4->dev->handle,
         "_BCM", VAR_5);
 if (FUNC_1(VAR_6)) {
  FUNC_0((VAR_1, "Evaluating _BCM failed"));
  return -VAR_3;
 }

 VAR_4->brightness->curr = VAR_5;
 for (VAR_7 = VAR_0; VAR_7 < VAR_4->brightness->count;
      VAR_7++)
  if (VAR_5 == VAR_4->brightness->levels[VAR_7]) {
   if (VAR_4->backlight)
    VAR_4->backlight->props.brightness =
     VAR_7 - VAR_0;
   return 0;
  }

 FUNC_0((VAR_1, "Current brightness invalid"));
 return -VAR_2;
}
