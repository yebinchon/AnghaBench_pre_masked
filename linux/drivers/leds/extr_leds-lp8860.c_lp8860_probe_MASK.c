
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int brightness_set_blocking; int default_trigger; } ;
struct lp8860_led {TYPE_3__ led_dev; int * eeprom_regmap; int * regmap; int lock; struct i2c_client* client; int * regulator; int * enable_gpio; } ;
struct led_init_data {char* default_label; int devicename; int fwnode; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_7__ {struct device_node* of_node; } ;
struct i2c_client {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,char*,int) ;
 int * FUNC_3 (TYPE_1__*,char*,int ) ;
 struct lp8860_led* FUNC_4 (TYPE_1__*,int,int ) ;
 int FUNC_5 (TYPE_1__*,TYPE_3__*,struct led_init_data*) ;
 void* FUNC_6 (struct i2c_client*,int *) ;
 int * FUNC_7 (TYPE_1__*,char*) ;
 int FUNC_8 (struct i2c_client*,struct lp8860_led*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_9 (struct lp8860_led*) ;
 int VAR_7 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct device_node*) ;
 struct device_node* FUNC_12 (struct device_node*,int *) ;
 int FUNC_13 (struct device_node*,char*,int *) ;

__attribute__((used)) static int FUNC_14(struct i2c_client *VAR_8,
   const struct i2c_device_id *VAR_9)
{
 int VAR_10;
 struct lp8860_led *VAR_11;
 struct device_node *VAR_12 = VAR_8->dev.of_node;
 struct device_node *VAR_13;
 struct led_init_data VAR_14 = {};

 VAR_11 = FUNC_4(&VAR_8->dev, sizeof(*VAR_11), VAR_2);
 if (!VAR_11)
  return -VAR_1;

 VAR_13 = FUNC_12(VAR_12, ((void*)0));
 if (!VAR_13)
  return -VAR_0;

 VAR_11->led_dev.default_trigger = FUNC_13(VAR_13,
         "linux,default-trigger",
         ((void*)0));

 VAR_11->enable_gpio = FUNC_3(&VAR_8->dev,
         "enable", VAR_3);
 if (FUNC_0(VAR_11->enable_gpio)) {
  VAR_10 = FUNC_1(VAR_11->enable_gpio);
  FUNC_2(&VAR_8->dev, "Failed to get enable gpio: %d\n", VAR_10);
  return VAR_10;
 }

 VAR_11->regulator = FUNC_7(&VAR_8->dev, "vled");
 if (FUNC_0(VAR_11->regulator))
  VAR_11->regulator = ((void*)0);

 VAR_11->client = VAR_8;
 VAR_11->led_dev.brightness_set_blocking = VAR_5;

 FUNC_10(&VAR_11->lock);

 FUNC_8(VAR_8, VAR_11);

 VAR_11->regmap = FUNC_6(VAR_8, &VAR_7);
 if (FUNC_0(VAR_11->regmap)) {
  VAR_10 = FUNC_1(VAR_11->regmap);
  FUNC_2(&VAR_8->dev, "Failed to allocate register map: %d\n",
   VAR_10);
  return VAR_10;
 }

 VAR_11->eeprom_regmap = FUNC_6(VAR_8, &VAR_6);
 if (FUNC_0(VAR_11->eeprom_regmap)) {
  VAR_10 = FUNC_1(VAR_11->eeprom_regmap);
  FUNC_2(&VAR_8->dev, "Failed to allocate register map: %d\n",
   VAR_10);
  return VAR_10;
 }

 VAR_10 = FUNC_9(VAR_11);
 if (VAR_10)
  return VAR_10;

 VAR_14.fwnode = FUNC_11(VAR_13);
 VAR_14.devicename = VAR_4;
 VAR_14.default_label = ":display_cluster";

 VAR_10 = FUNC_5(&VAR_8->dev, &VAR_11->led_dev,
          &VAR_14);
 if (VAR_10) {
  FUNC_2(&VAR_8->dev, "led register err: %d\n", VAR_10);
  return VAR_10;
 }

 return 0;
}
