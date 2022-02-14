
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char const* default_trigger; int brightness_set; int name; } ;
struct led_nu801_led_data {int level; TYPE_1__ cdev; struct led_nu801_data* controller; int name; } ;
struct led_nu801_data {int num_leds; int name; int device_name; struct led_nu801_led_data* led_chain; } ;
struct device {int dummy; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;


 int VAR_0 ;
 int FUNC_0 (struct led_nu801_led_data*) ;
 int FUNC_1 (struct device*,TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_2 (int ,int,char*,int ,char const*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct led_nu801_data *VAR_2,
        struct device *VAR_3,
        int VAR_4,
        enum led_brightness VAR_5,



        const char *VAR_6)
{
 struct led_nu801_led_data *VAR_7 = &VAR_2->led_chain[VAR_4];
 int VAR_8;

 FUNC_2(VAR_7->name, sizeof(VAR_7->name), "%s:%s:%s%d",
    VAR_2->device_name, VAR_6, VAR_2->name,
    (VAR_2->num_leds - (VAR_4 + 1)) / VAR_0);
 VAR_7->cdev.name = VAR_7->name;
 VAR_7->cdev.brightness_set = VAR_1;



 VAR_7->level = VAR_5;
 VAR_7->controller = VAR_2;
 VAR_8 = FUNC_1(VAR_3, &VAR_7->cdev);
 if (VAR_8 < 0)
  goto err;

 return 0;

err:
 FUNC_0(VAR_7);
 return VAR_8;
}
