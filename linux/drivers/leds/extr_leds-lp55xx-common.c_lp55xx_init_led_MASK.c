
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct lp55xx_platform_data {scalar_t__ label; TYPE_1__* led_config; } ;
struct TYPE_6__ {char* name; int groups; int brightness_set_blocking; int default_trigger; } ;
struct lp55xx_led {scalar_t__ led_current; int chan_nr; TYPE_3__ cdev; int max_current; } ;
struct lp55xx_device_config {int max_channel; } ;
struct lp55xx_chip {TYPE_2__* cl; struct lp55xx_device_config* cfg; struct lp55xx_platform_data* pdata; } ;
struct device {int dummy; } ;
typedef int name ;
struct TYPE_5__ {char* name; struct device dev; } ;
struct TYPE_4__ {scalar_t__ led_current; int chan_nr; char* name; int default_trigger; int max_current; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int,...) ;
 int FUNC_1 (struct device*,TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,int,char*,char*,int) ;

__attribute__((used)) static int FUNC_3(struct lp55xx_led *VAR_3,
   struct lp55xx_chip *VAR_4, int VAR_5)
{
 struct lp55xx_platform_data *VAR_6 = VAR_4->pdata;
 struct lp55xx_device_config *VAR_7 = VAR_4->cfg;
 struct device *VAR_8 = &VAR_4->cl->dev;
 char VAR_9[32];
 int VAR_10;
 int VAR_11 = VAR_7->max_channel;

 if (VAR_5 >= VAR_11) {
  FUNC_0(VAR_8, "invalid channel: %d / %d\n", VAR_5, VAR_11);
  return -VAR_0;
 }

 if (VAR_6->led_config[VAR_5].led_current == 0)
  return 0;

 VAR_3->led_current = VAR_6->led_config[VAR_5].led_current;
 VAR_3->max_current = VAR_6->led_config[VAR_5].max_current;
 VAR_3->chan_nr = VAR_6->led_config[VAR_5].chan_nr;
 VAR_3->cdev.default_trigger = VAR_6->led_config[VAR_5].default_trigger;

 if (VAR_3->chan_nr >= VAR_11) {
  FUNC_0(VAR_8, "Use channel numbers between 0 and %d\n",
   VAR_11 - 1);
  return -VAR_0;
 }

 VAR_3->cdev.brightness_set_blocking = VAR_2;
 VAR_3->cdev.groups = VAR_1;

 if (VAR_6->led_config[VAR_5].name) {
  VAR_3->cdev.name = VAR_6->led_config[VAR_5].name;
 } else {
  FUNC_2(VAR_9, sizeof(VAR_9), "%s:channel%d",
   VAR_6->label ? : VAR_4->cl->name, VAR_5);
  VAR_3->cdev.name = VAR_9;
 }

 VAR_10 = FUNC_1(VAR_8, &VAR_3->cdev);
 if (VAR_10) {
  FUNC_0(VAR_8, "led register err: %d\n", VAR_10);
  return VAR_10;
 }

 return 0;
}
