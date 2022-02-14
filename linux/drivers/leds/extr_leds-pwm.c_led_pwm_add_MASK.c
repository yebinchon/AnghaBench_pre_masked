
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pwm_args {scalar_t__ period; } ;
struct led_pwm_priv {size_t num_leds; struct led_pwm_data* leds; } ;
struct TYPE_3__ {int brightness; int (* brightness_set_blocking ) (TYPE_1__*,int ) ;int flags; int max_brightness; int default_trigger; int name; } ;
struct led_pwm_data {scalar_t__ period; TYPE_1__ cdev; int pwm; int active_low; } ;
struct led_pwm {scalar_t__ pwm_period_ns; int name; int max_brightness; int default_trigger; int active_low; } ;
struct fwnode_handle {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*,int ,int) ;
 int FUNC_3 (struct device*,struct fwnode_handle*,int *) ;
 int FUNC_4 (struct device*,TYPE_1__*) ;
 int FUNC_5 (struct device*,int ) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,struct pwm_args*) ;

__attribute__((used)) static int FUNC_9(struct device *VAR_3, struct led_pwm_priv *VAR_4,
         struct led_pwm *VAR_5, struct fwnode_handle *VAR_6)
{
 struct led_pwm_data *VAR_7 = &VAR_4->leds[VAR_4->num_leds];
 struct pwm_args VAR_8;
 int VAR_9;

 VAR_7->active_low = VAR_5->active_low;
 VAR_7->cdev.name = VAR_5->name;
 VAR_7->cdev.default_trigger = VAR_5->default_trigger;
 VAR_7->cdev.brightness = VAR_2;
 VAR_7->cdev.max_brightness = VAR_5->max_brightness;
 VAR_7->cdev.flags = VAR_1;

 if (VAR_6)
  VAR_7->pwm = FUNC_3(VAR_3, VAR_6, ((void*)0));
 else
  VAR_7->pwm = FUNC_5(VAR_3, VAR_5->name);
 if (FUNC_0(VAR_7->pwm)) {
  VAR_9 = FUNC_1(VAR_7->pwm);
  if (VAR_9 != -VAR_0)
   FUNC_2(VAR_3, "unable to request PWM for %s: %d\n",
    VAR_5->name, VAR_9);
  return VAR_9;
 }

 VAR_7->cdev.brightness_set_blocking = FUNC_6;





 FUNC_7(VAR_7->pwm);

 FUNC_8(VAR_7->pwm, &VAR_8);

 VAR_7->period = VAR_8.period;
 if (!VAR_7->period && (VAR_5->pwm_period_ns > 0))
  VAR_7->period = VAR_5->pwm_period_ns;

 VAR_9 = FUNC_4(VAR_3, &VAR_7->cdev);
 if (VAR_9 == 0) {
  VAR_4->num_leds++;
  FUNC_6(&VAR_7->cdev, VAR_7->cdev.brightness);
 } else {
  FUNC_2(VAR_3, "failed to register PWM led for %s: %d\n",
   VAR_5->name, VAR_9);
 }

 return VAR_9;
}
