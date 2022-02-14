
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {scalar_t__ of_node; } ;
struct platform_device {struct device dev; } ;
struct TYPE_4__ {char const* default_trigger; TYPE_1__* dev; int brightness; int brightness_set_blocking; } ;
struct lt3593_led_data {TYPE_2__ cdev; int gpiod; } ;
struct led_init_data {char* default_label; int devicename; struct fwnode_handle* fwnode; } ;
struct fwnode_handle {int dummy; } ;
struct TYPE_3__ {scalar_t__ of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*) ;
 struct fwnode_handle* FUNC_4 (struct device*,int *) ;
 int FUNC_5 (struct device*,char*,int ) ;
 struct lt3593_led_data* FUNC_6 (struct device*,int,int ) ;
 int FUNC_7 (struct device*,TYPE_2__*,struct led_init_data*) ;
 int FUNC_8 (struct fwnode_handle*) ;
 int FUNC_9 (struct fwnode_handle*,char*,char const**) ;
 int VAR_9 ;
 int FUNC_10 (struct platform_device*,struct lt3593_led_data*) ;
 int FUNC_11 (char const*,char*) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_10)
{
 struct device *VAR_11 = &VAR_10->dev;
 struct lt3593_led_data *VAR_12;
 struct fwnode_handle *VAR_13;
 int VAR_14, VAR_15 = VAR_4;
 struct led_init_data VAR_16 = {};
 const char *VAR_17;

 if (!VAR_11->of_node)
  return -VAR_1;

 VAR_12 = FUNC_6(VAR_11, sizeof(*VAR_12), VAR_3);
 if (!VAR_12)
  return -VAR_2;

 if (FUNC_3(VAR_11) != 1) {
  FUNC_2(VAR_11, "Device must have exactly one LED sub-node.");
  return -VAR_0;
 }

 VAR_12->gpiod = FUNC_5(VAR_11, "lltc,ctrl", 0);
 if (FUNC_0(VAR_12->gpiod))
  return FUNC_1(VAR_12->gpiod);

 VAR_13 = FUNC_4(VAR_11, ((void*)0));

 FUNC_9(VAR_13, "linux,default-trigger",
        &VAR_12->cdev.default_trigger);

 if (!FUNC_9(VAR_13, "default-state", &VAR_17)) {
  if (!FUNC_11(VAR_17, "on"))
   VAR_15 = VAR_5;
 }

 VAR_12->cdev.brightness_set_blocking = VAR_9;
 VAR_12->cdev.brightness = VAR_15 ? VAR_6 : VAR_8;

 VAR_16.fwnode = VAR_13;
 VAR_16.devicename = VAR_7;
 VAR_16.default_label = ":";

 VAR_14 = FUNC_7(VAR_11, &VAR_12->cdev, &VAR_16);
 if (VAR_14 < 0) {
  FUNC_8(VAR_13);
  return VAR_14;
 }

 VAR_12->cdev.dev->of_node = VAR_11->of_node;
 FUNC_10(VAR_10, VAR_12);

 return 0;
}
