
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int brightness_set_blocking; int brightness_get; int max_brightness; int name; } ;
struct ims_pcu_backlight {TYPE_1__ cdev; int name; } ;
struct ims_pcu {int device_no; int dev; struct ims_pcu_backlight backlight; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int ,int,char*,int) ;

__attribute__((used)) static int FUNC_3(struct ims_pcu *VAR_3)
{
 struct ims_pcu_backlight *VAR_4 = &VAR_3->backlight;
 int VAR_5;

 FUNC_2(VAR_4->name, sizeof(VAR_4->name),
   "pcu%d::kbd_backlight", VAR_3->device_no);

 VAR_4->cdev.name = VAR_4->name;
 VAR_4->cdev.max_brightness = VAR_0;
 VAR_4->cdev.brightness_get = VAR_1;
 VAR_4->cdev.brightness_set_blocking =
      VAR_2;

 VAR_5 = FUNC_1(VAR_3->dev, &VAR_4->cdev);
 if (VAR_5) {
  FUNC_0(VAR_3->dev,
   "Failed to register backlight LED device, error: %d\n",
   VAR_5);
  return VAR_5;
 }

 return 0;
}
