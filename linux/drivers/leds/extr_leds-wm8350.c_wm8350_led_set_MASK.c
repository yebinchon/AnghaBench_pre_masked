
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct wm8350_led {int value; int max_uA_index; TYPE_1__ cdev; int isink; int value_lock; } ;
struct led_classdev {int dummy; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,char*,int ,int) ;
 int * VAR_2 ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 struct wm8350_led* FUNC_6 (struct led_classdev*) ;
 int FUNC_7 (struct wm8350_led*) ;
 int FUNC_8 (struct wm8350_led*) ;

__attribute__((used)) static int FUNC_9(struct led_classdev *VAR_3,
      enum led_brightness VAR_4)
{
 struct wm8350_led *VAR_5 = FUNC_6(VAR_3);
 unsigned long VAR_6;
 int VAR_7;
 int VAR_8;

 VAR_5->value = VAR_4;

 FUNC_4(&VAR_5->value_lock, VAR_6);

 if (VAR_5->value == VAR_1) {
  FUNC_5(&VAR_5->value_lock, VAR_6);
  return FUNC_7(VAR_5);
 }






 VAR_8 = (VAR_5->max_uA_index * VAR_5->value) / VAR_0;
 FUNC_5(&VAR_5->value_lock, VAR_6);
 FUNC_1(VAR_8 >= FUNC_0(VAR_2));

 VAR_7 = FUNC_3(VAR_5->isink, VAR_2[VAR_8],
       VAR_2[VAR_8]);
 if (VAR_7 != 0) {
  FUNC_2(VAR_5->cdev.dev, "Failed to set %duA: %d\n",
   VAR_2[VAR_8], VAR_7);
  return VAR_7;
 }

 return FUNC_8(VAR_5);
}
