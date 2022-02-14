
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct led_classdev {int flags; int max_brightness; int brightness_set_blocking; } ;
struct led_flash_setting {int val; int step; int max; int min; } ;
struct TYPE_4__ {struct led_classdev led_cdev; struct led_flash_setting brightness; struct led_flash_setting timeout; int * ops; } ;
struct lm3601x_led {scalar_t__ led_mode; TYPE_2__ fled_cdev; TYPE_1__* client; int torch_current_max; int flash_current_max; int max_flash_timeout; } ;
struct led_init_data {char* default_label; int devicename; struct fwnode_handle* fwnode; } ;
struct fwnode_handle {int dummy; } ;
struct TYPE_3__ {int dev; int name; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,TYPE_2__*,struct led_init_data*) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_2(struct lm3601x_led *VAR_8,
     struct fwnode_handle *VAR_9)
{
 struct led_classdev *VAR_10;
 struct led_flash_setting *VAR_11;
 struct led_init_data VAR_12 = {};

 VAR_8->fled_cdev.ops = &VAR_6;

 VAR_11 = &VAR_8->fled_cdev.timeout;
 VAR_11->min = VAR_4;
 VAR_11->max = VAR_8->max_flash_timeout;
 VAR_11->step = VAR_2;
 VAR_11->val = VAR_8->max_flash_timeout;

 VAR_11 = &VAR_8->fled_cdev.brightness;
 VAR_11->min = VAR_3;
 VAR_11->max = VAR_8->flash_current_max;
 VAR_11->step = VAR_5;
 VAR_11->val = VAR_8->flash_current_max;

 VAR_10 = &VAR_8->fled_cdev.led_cdev;
 VAR_10->brightness_set_blocking = VAR_7;
 VAR_10->max_brightness = FUNC_0(VAR_8->torch_current_max,
      VAR_5);
 VAR_10->flags |= VAR_0;

 VAR_12.fwnode = VAR_9;
 VAR_12.devicename = VAR_8->client->name;
 VAR_12.default_label = (VAR_8->led_mode == VAR_1) ?
     "torch" : "infrared";

 return FUNC_1(&VAR_8->client->dev,
      &VAR_8->fled_cdev, &VAR_12);
}
