
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_netdev_data {int work; int mode; struct led_classdev* led_cdev; } ;
struct led_classdev {int brightness; int blink_brightness; int max_brightness; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct led_classdev*,int) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct led_netdev_data *VAR_5)
{
 int VAR_6;
 struct led_classdev *VAR_7 = VAR_5->led_cdev;

 VAR_6 = VAR_7->brightness;
 if (VAR_6)
  VAR_7->blink_brightness = VAR_6;
 if (!VAR_7->blink_brightness)
  VAR_7->blink_brightness = VAR_7->max_brightness;

 if (!FUNC_2(VAR_2, &VAR_5->mode))
  FUNC_0(VAR_7, VAR_0);
 else {
  if (FUNC_2(VAR_1, &VAR_5->mode))
   FUNC_0(VAR_7,
        VAR_7->blink_brightness);
  else
   FUNC_0(VAR_7, VAR_0);




  if (FUNC_2(VAR_4, &VAR_5->mode) ||
      FUNC_2(VAR_3, &VAR_5->mode))
   FUNC_1(&VAR_5->work, 0);
 }
}
