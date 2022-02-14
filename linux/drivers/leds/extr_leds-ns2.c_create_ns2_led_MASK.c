
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct TYPE_2__ {int brightness; int brightness_set; int brightness_set_blocking; int groups; int flags; int * blink_set; int default_trigger; int name; } ;
struct ns2_led_data {int can_sleep; int sata; TYPE_1__ cdev; int num_modes; int modval; int slow; int cmd; int rw_lock; } ;
struct ns2_led {int num_modes; int modval; int slow; int cmd; int default_trigger; int name; } ;
typedef enum ns2_led_modes { ____Placeholder_ns2_led_modes } ns2_led_modes ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (struct ns2_led_data*,int*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(struct platform_device *VAR_10, struct ns2_led_data *VAR_11,
        const struct ns2_led *VAR_12)
{
 int VAR_13;
 enum ns2_led_modes VAR_14;

 VAR_13 = FUNC_1(&VAR_10->dev, VAR_12->cmd,
   FUNC_3(VAR_12->cmd) ?
   VAR_0 : VAR_1,
   VAR_12->name);
 if (VAR_13) {
  FUNC_0(&VAR_10->dev, "%s: failed to setup command GPIO\n",
   VAR_12->name);
  return VAR_13;
 }

 VAR_13 = FUNC_1(&VAR_10->dev, VAR_12->slow,
   FUNC_3(VAR_12->slow) ?
   VAR_0 : VAR_1,
   VAR_12->name);
 if (VAR_13) {
  FUNC_0(&VAR_10->dev, "%s: failed to setup slow GPIO\n",
   VAR_12->name);
  return VAR_13;
 }

 FUNC_6(&VAR_11->rw_lock);

 VAR_11->cdev.name = VAR_12->name;
 VAR_11->cdev.default_trigger = VAR_12->default_trigger;
 VAR_11->cdev.blink_set = ((void*)0);
 VAR_11->cdev.flags |= VAR_2;
 VAR_11->cdev.groups = VAR_7;
 VAR_11->cmd = VAR_12->cmd;
 VAR_11->slow = VAR_12->slow;
 VAR_11->can_sleep = FUNC_2(VAR_11->cmd) |
    FUNC_2(VAR_11->slow);
 if (VAR_11->can_sleep)
  VAR_11->cdev.brightness_set_blocking = VAR_9;
 else
  VAR_11->cdev.brightness_set = VAR_8;
 VAR_11->modval = VAR_12->modval;
 VAR_11->num_modes = VAR_12->num_modes;

 VAR_13 = FUNC_5(VAR_11, &VAR_14);
 if (VAR_13 < 0)
  return VAR_13;


 VAR_11->sata = (VAR_14 == VAR_6) ? 1 : 0;
 VAR_11->cdev.brightness =
  (VAR_14 == VAR_5) ? VAR_4 : VAR_3;

 VAR_13 = FUNC_4(&VAR_10->dev, &VAR_11->cdev);
 if (VAR_13 < 0)
  return VAR_13;

 return 0;
}
