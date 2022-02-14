
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct netxbig_led_platform_data {int num_timer; int timer; int gpio_ext; } ;
struct TYPE_2__ {int groups; int flags; int max_brightness; int brightness; int brightness_set; int blink_set; int default_trigger; int name; } ;
struct netxbig_led_data {scalar_t__* mode_val; TYPE_1__ cdev; int num_timer; int timer; int bright_addr; int mode_addr; scalar_t__ sata; int gpio_ext; int lock; } ;
struct netxbig_led {scalar_t__* mode_val; int bright_addr; int mode_addr; int bright_max; int default_trigger; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_7,
         struct netxbig_led_platform_data *VAR_8,
         struct netxbig_led_data *VAR_9,
         const struct netxbig_led *VAR_10)
{
 FUNC_1(&VAR_9->lock);
 VAR_9->gpio_ext = VAR_8->gpio_ext;
 VAR_9->cdev.name = VAR_10->name;
 VAR_9->cdev.default_trigger = VAR_10->default_trigger;
 VAR_9->cdev.blink_set = VAR_4;
 VAR_9->cdev.brightness_set = VAR_6;
 VAR_9->sata = 0;
 VAR_9->cdev.brightness = VAR_1;
 VAR_9->cdev.max_brightness = VAR_10->bright_max;
 VAR_9->cdev.flags |= VAR_0;
 VAR_9->mode_addr = VAR_10->mode_addr;
 VAR_9->mode_val = VAR_10->mode_val;
 VAR_9->bright_addr = VAR_10->bright_addr;
 VAR_9->timer = VAR_8->timer;
 VAR_9->num_timer = VAR_8->num_timer;




 if (VAR_9->mode_val[VAR_3] != VAR_2)
  VAR_9->cdev.groups = VAR_5;

 return FUNC_0(&VAR_7->dev, &VAR_9->cdev);
}
