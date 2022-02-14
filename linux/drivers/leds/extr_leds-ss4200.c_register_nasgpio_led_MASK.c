
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nasgpio_led {int name; } ;
struct led_classdev {int groups; int blink_set; int brightness_set; int brightness; int name; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct led_classdev* FUNC_0 (int) ;
 int FUNC_1 (int *,struct led_classdev*) ;
 TYPE_1__* VAR_3 ;
 scalar_t__ FUNC_2 (struct led_classdev*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct nasgpio_led* VAR_7 ;

__attribute__((used)) static int FUNC_3(int VAR_8)
{
 int VAR_9;
 struct nasgpio_led *VAR_10 = &VAR_7[VAR_8];
 struct led_classdev *VAR_11 = FUNC_0(VAR_8);

 VAR_11->name = VAR_10->name;
 VAR_11->brightness = VAR_2;
 if (FUNC_2(VAR_11, VAR_0))
  VAR_11->brightness = VAR_1;
 VAR_11->brightness_set = VAR_6;
 VAR_11->blink_set = VAR_5;
 VAR_11->groups = VAR_4;
 VAR_9 = FUNC_1(&VAR_3->dev, VAR_11);
 if (VAR_9)
  return VAR_9;

 return 0;
}
