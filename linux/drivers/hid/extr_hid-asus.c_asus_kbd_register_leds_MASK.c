
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hid_device {int dev; } ;
struct asus_kbd_leds {int dummy; } ;
struct asus_drvdata {TYPE_2__* kbd_backlight; } ;
struct TYPE_4__ {char* name; int max_brightness; int brightness_get; int brightness_set; } ;
struct TYPE_5__ {int removed; TYPE_1__ cdev; int work; struct hid_device* hdev; scalar_t__ brightness; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 unsigned char VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct hid_device*,unsigned char*) ;
 int FUNC_2 (struct hid_device*) ;
 int FUNC_3 (int *,TYPE_2__*) ;
 TYPE_2__* FUNC_4 (int *,int,int ) ;
 int FUNC_5 (int *,TYPE_1__*) ;
 struct asus_drvdata* FUNC_6 (struct hid_device*) ;

__attribute__((used)) static int FUNC_7(struct hid_device *VAR_7)
{
 struct asus_drvdata *VAR_8 = FUNC_6(VAR_7);
 unsigned char VAR_9;
 int VAR_10;


 VAR_10 = FUNC_2(VAR_7);
 if (VAR_10 < 0)
  return VAR_10;


 VAR_10 = FUNC_1(VAR_7, &VAR_9);
 if (VAR_10 < 0)
  return VAR_10;


 if (!(VAR_9 & VAR_3))
  return -VAR_0;

 VAR_8->kbd_backlight = FUNC_4(&VAR_7->dev,
           sizeof(struct asus_kbd_leds),
           VAR_2);
 if (!VAR_8->kbd_backlight)
  return -VAR_1;

 VAR_8->kbd_backlight->removed = 0;
 VAR_8->kbd_backlight->brightness = 0;
 VAR_8->kbd_backlight->hdev = VAR_7;
 VAR_8->kbd_backlight->cdev.name = "asus::kbd_backlight";
 VAR_8->kbd_backlight->cdev.max_brightness = 3;
 VAR_8->kbd_backlight->cdev.brightness_set = VAR_5;
 VAR_8->kbd_backlight->cdev.brightness_get = VAR_4;
 FUNC_0(&VAR_8->kbd_backlight->work, VAR_6);

 VAR_10 = FUNC_5(&VAR_7->dev, &VAR_8->kbd_backlight->cdev);
 if (VAR_10 < 0) {

  FUNC_3(&VAR_7->dev, VAR_8->kbd_backlight);
 }

 return VAR_10;
}
