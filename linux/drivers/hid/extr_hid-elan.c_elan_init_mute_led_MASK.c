
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_classdev {char* name; int * dev; int max_brightness; int brightness_set_blocking; int brightness_get; } ;
struct hid_device {int dev; } ;
struct elan_drvdata {struct led_classdev mute_led; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct led_classdev*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct elan_drvdata* FUNC_1 (struct hid_device*) ;

__attribute__((used)) static int FUNC_2(struct hid_device *VAR_3)
{
 struct elan_drvdata *VAR_4 = FUNC_1(VAR_3);
 struct led_classdev *VAR_5 = &VAR_4->mute_led;

 VAR_5->name = "elan:red:mute";
 VAR_5->brightness_get = VAR_1;
 VAR_5->brightness_set_blocking = VAR_2;
 VAR_5->max_brightness = VAR_0;
 VAR_5->dev = &VAR_3->dev;

 return FUNC_0(&VAR_3->dev, VAR_5);
}
