
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int val; } ;
struct led_classdev {int max_brightness; int flags; int brightness_set_blocking; int name; } ;
struct led_classdev_flash {TYPE_1__ timeout; struct led_classdev led_cdev; int * ops; } ;
struct max77693_sub_led {int fled_id; int flash_timeout; struct led_classdev_flash fled_cdev; } ;
struct max77693_led_device {scalar_t__ iout_joint; } ;
struct max77693_led_config_data {int* iout_torch_max; int * label; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct max77693_sub_led*,struct max77693_led_config_data*) ;
 int VAR_5 ;
 struct max77693_led_device* FUNC_1 (struct max77693_sub_led*) ;

__attribute__((used)) static void FUNC_2(struct max77693_sub_led *VAR_6,
    struct max77693_led_config_data *VAR_7)
{
 struct max77693_led_device *VAR_8 = FUNC_1(VAR_6);
 int VAR_9 = VAR_6->fled_id;
 struct led_classdev_flash *VAR_10;
 struct led_classdev *VAR_11;


 VAR_10 = &VAR_6->fled_cdev;
 VAR_10->ops = &VAR_4;
 VAR_11 = &VAR_10->led_cdev;

 VAR_11->name = VAR_7->label[VAR_9];

 VAR_11->brightness_set_blocking = VAR_5;
 VAR_11->max_brightness = (VAR_8->iout_joint ?
     VAR_7->iout_torch_max[VAR_0] +
     VAR_7->iout_torch_max[VAR_1] :
     VAR_7->iout_torch_max[VAR_9]) /
       VAR_3;
 VAR_11->flags |= VAR_2;

 FUNC_0(VAR_6, VAR_7);


 VAR_6->flash_timeout = VAR_10->timeout.val;
}
