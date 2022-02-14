
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct hid_device {int dev; } ;
struct TYPE_3__ {char* name; int flags; int (* brightness_set_blocking ) (TYPE_1__*,int ) ;int max_brightness; } ;
struct hammer_kbd_leds {TYPE_1__ cdev; struct hid_device* hdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct hammer_kbd_leds* FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_3(struct hid_device *VAR_4)
{
 struct hammer_kbd_leds *VAR_5;

 VAR_5 = FUNC_0(&VAR_4->dev,
         sizeof(*VAR_5),
         VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->hdev = VAR_4;
 VAR_5->cdev.name = "hammer::kbd_backlight";
 VAR_5->cdev.max_brightness = VAR_3;
 VAR_5->cdev.brightness_set_blocking =
  FUNC_2;
 VAR_5->cdev.flags = VAR_2;


 FUNC_2(&VAR_5->cdev, 0);

 return FUNC_1(&VAR_4->dev, &VAR_5->cdev);
}
