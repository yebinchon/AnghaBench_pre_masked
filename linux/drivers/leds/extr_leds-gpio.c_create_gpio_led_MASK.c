
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct led_init_data {struct fwnode_handle* fwnode; } ;
struct TYPE_3__ {scalar_t__ name; int flags; int brightness; int blink_set; int brightness_set_blocking; int brightness_set; int default_trigger; } ;
struct gpio_led_data {TYPE_1__ cdev; int gpiod; scalar_t__ platform_gpio_blink_set; scalar_t__ blinking; int can_sleep; } ;
struct gpio_led {scalar_t__ default_state; scalar_t__ name; scalar_t__ retain_state_shutdown; scalar_t__ panic_indicator; int retain_state_suspended; int default_trigger; } ;
struct fwnode_handle {int dummy; } ;
struct device {int dummy; } ;
typedef scalar_t__ gpio_blink_set_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct device*,TYPE_1__*) ;
 int FUNC_1 (struct device*,TYPE_1__*,struct led_init_data*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(const struct gpio_led *VAR_10,
 struct gpio_led_data *VAR_11, struct device *VAR_12,
 struct fwnode_handle *VAR_13, gpio_blink_set_t VAR_14)
{
 struct led_init_data VAR_15 = {};
 int VAR_16, VAR_17;

 VAR_11->cdev.default_trigger = VAR_10->default_trigger;
 VAR_11->can_sleep = FUNC_2(VAR_11->gpiod);
 if (!VAR_11->can_sleep)
  VAR_11->cdev.brightness_set = VAR_8;
 else
  VAR_11->cdev.brightness_set_blocking = VAR_9;
 VAR_11->blinking = 0;
 if (VAR_14) {
  VAR_11->platform_gpio_blink_set = VAR_14;
  VAR_11->cdev.blink_set = VAR_7;
 }
 if (VAR_10->default_state == VAR_0) {
  VAR_17 = FUNC_4(VAR_11->gpiod);
  if (VAR_17 < 0)
   return VAR_17;
 } else {
  VAR_17 = (VAR_10->default_state == VAR_1);
 }
 VAR_11->cdev.brightness = VAR_17 ? VAR_3 : VAR_4;
 if (!VAR_10->retain_state_suspended)
  VAR_11->cdev.flags |= VAR_2;
 if (VAR_10->panic_indicator)
  VAR_11->cdev.flags |= VAR_5;
 if (VAR_10->retain_state_shutdown)
  VAR_11->cdev.flags |= VAR_6;

 VAR_16 = FUNC_3(VAR_11->gpiod, VAR_17);
 if (VAR_16 < 0)
  return VAR_16;

 if (VAR_10->name) {
  VAR_11->cdev.name = VAR_10->name;
  VAR_16 = FUNC_0(VAR_12, &VAR_11->cdev);
 } else {
  VAR_15.fwnode = VAR_13;
  VAR_16 = FUNC_1(VAR_12, &VAR_11->cdev,
           &VAR_15);
 }

 return VAR_16;
}
