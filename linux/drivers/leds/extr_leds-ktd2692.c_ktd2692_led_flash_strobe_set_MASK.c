
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct led_flash_setting {int step; int val; } ;
struct TYPE_2__ {int brightness; } ;
struct led_classdev_flash {TYPE_1__ led_cdev; struct led_flash_setting timeout; } ;
struct ktd2692_context {int mode; int lock; int aux_gpio; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct ktd2692_context* FUNC_1 (struct led_classdev_flash*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct ktd2692_context*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct led_classdev_flash *VAR_7,
     bool VAR_8)
{
 struct ktd2692_context *VAR_9 = FUNC_1(VAR_7);
 struct led_flash_setting *VAR_10 = &VAR_7->timeout;
 u32 VAR_11;

 FUNC_4(&VAR_9->lock);

 if (VAR_8) {
  VAR_11 = FUNC_0(VAR_10->val, VAR_10->step);
  FUNC_3(VAR_9, VAR_11
    | VAR_4);

  VAR_9->mode = VAR_3;
  FUNC_2(VAR_9->aux_gpio, VAR_0);
 } else {
  VAR_9->mode = VAR_2;
  FUNC_2(VAR_9->aux_gpio, VAR_1);
 }

 FUNC_3(VAR_9, VAR_9->mode | VAR_5);

 VAR_7->led_cdev.brightness = VAR_6;
 VAR_9->mode = VAR_2;

 FUNC_5(&VAR_9->lock);

 return 0;
}
