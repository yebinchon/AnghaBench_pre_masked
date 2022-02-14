
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ max_fingers; } ;
struct pixcir_ts_platform_data {int y_max; int x_max; TYPE_3__ chip; } ;
struct pixcir_i2c_ts_data {scalar_t__ max_fingers; void* gpio_enable; void* gpio_wake; void* gpio_reset; void* gpio_attb; TYPE_3__* chip; int prop; struct input_dev* input; struct i2c_client* client; } ;
struct TYPE_5__ {struct device* parent; } ;
struct TYPE_4__ {int bustype; } ;
struct input_dev {TYPE_2__ dev; int close; int open; TYPE_1__ id; int name; } ;
struct i2c_device_id {int dummy; } ;
struct device {scalar_t__ of_node; } ;
struct i2c_client {int irq; int name; struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_0 (void*) ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct device*,char*,...) ;
 struct pixcir_ts_platform_data* FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*,char*,scalar_t__) ;
 void* FUNC_5 (struct device*,char*,int ) ;
 void* FUNC_6 (struct device*,char*,int ) ;
 struct input_dev* FUNC_7 (struct device*) ;
 struct pixcir_i2c_ts_data* FUNC_8 (struct device*,int,int ) ;
 int FUNC_9 (struct device*,int ,int *,int ,int,int ,struct pixcir_i2c_ts_data*) ;
 int FUNC_10 (struct i2c_client*,struct pixcir_i2c_ts_data*) ;
 int FUNC_11 (struct input_dev*,int ) ;
 int FUNC_12 (struct input_dev*,scalar_t__,int) ;
 int FUNC_13 (struct input_dev*) ;
 int FUNC_14 (struct input_dev*,int ,int ,int ,int ,int ) ;
 int FUNC_15 (struct input_dev*,int ,int ) ;
 int FUNC_16 (struct input_dev*,struct pixcir_i2c_ts_data*) ;
 int FUNC_17 (int) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_18 (struct device*,struct pixcir_i2c_ts_data*) ;
 int FUNC_19 (struct pixcir_i2c_ts_data*) ;
 int FUNC_20 (struct pixcir_i2c_ts_data*,int ) ;
 int FUNC_21 (struct pixcir_i2c_ts_data*) ;
 int VAR_19 ;
 int FUNC_22 (struct input_dev*,int,int *) ;

__attribute__((used)) static int FUNC_23(struct i2c_client *VAR_20,
          const struct i2c_device_id *VAR_21)
{
 const struct pixcir_ts_platform_data *VAR_22 =
   FUNC_3(&VAR_20->dev);
 struct device *VAR_23 = &VAR_20->dev;
 struct pixcir_i2c_ts_data *VAR_24;
 struct input_dev *VAR_25;
 int VAR_26;

 VAR_24 = FUNC_8(VAR_23, sizeof(*VAR_24), VAR_7);
 if (!VAR_24)
  return -VAR_4;

 if (VAR_22) {
  VAR_24->chip = &VAR_22->chip;
 } else if (VAR_23->of_node) {
  VAR_26 = FUNC_18(VAR_23, VAR_24);
  if (VAR_26)
   return VAR_26;
 } else {
  FUNC_2(VAR_23, "platform data not defined\n");
  return -VAR_3;
 }

 if (!VAR_24->chip->max_fingers) {
  FUNC_2(VAR_23, "Invalid max_fingers in chip data\n");
  return -VAR_3;
 }

 VAR_25 = FUNC_7(VAR_23);
 if (!VAR_25) {
  FUNC_2(VAR_23, "Failed to allocate input device\n");
  return -VAR_4;
 }

 VAR_24->client = VAR_20;
 VAR_24->input = VAR_25;

 VAR_25->name = VAR_20->name;
 VAR_25->id.bustype = VAR_2;
 VAR_25->open = VAR_18;
 VAR_25->close = VAR_17;
 VAR_25->dev.parent = VAR_23;

 if (VAR_22) {
  FUNC_14(VAR_25, VAR_0, 0, VAR_22->x_max, 0, 0);
  FUNC_14(VAR_25, VAR_1, 0, VAR_22->y_max, 0, 0);
 } else {
  FUNC_15(VAR_25, VAR_6, VAR_0);
  FUNC_15(VAR_25, VAR_6, VAR_1);
  FUNC_22(VAR_25, 1, &VAR_24->prop);
  if (!FUNC_11(VAR_25, VAR_0) ||
      !FUNC_11(VAR_25, VAR_1)) {
   FUNC_2(VAR_23, "Touchscreen size is not specified\n");
   return -VAR_3;
  }
 }

 VAR_24->max_fingers = VAR_24->chip->max_fingers;
 if (VAR_24->max_fingers > VAR_15) {
  VAR_24->max_fingers = VAR_15;
  FUNC_4(VAR_23, "Limiting maximum fingers to %d\n",
    VAR_24->max_fingers);
 }

 VAR_26 = FUNC_12(VAR_25, VAR_24->max_fingers,
        VAR_11 | VAR_12);
 if (VAR_26) {
  FUNC_2(VAR_23, "Error initializing Multi-Touch slots\n");
  return VAR_26;
 }

 FUNC_16(VAR_25, VAR_24);

 VAR_24->gpio_attb = FUNC_5(VAR_23, "attb", VAR_8);
 if (FUNC_0(VAR_24->gpio_attb)) {
  VAR_26 = FUNC_1(VAR_24->gpio_attb);
  FUNC_2(VAR_23, "Failed to request ATTB gpio: %d\n", VAR_26);
  return VAR_26;
 }

 VAR_24->gpio_reset = FUNC_6(VAR_23, "reset",
           VAR_10);
 if (FUNC_0(VAR_24->gpio_reset)) {
  VAR_26 = FUNC_1(VAR_24->gpio_reset);
  FUNC_2(VAR_23, "Failed to request RESET gpio: %d\n", VAR_26);
  return VAR_26;
 }

 VAR_24->gpio_wake = FUNC_6(VAR_23, "wake",
          VAR_9);
 if (FUNC_0(VAR_24->gpio_wake)) {
  VAR_26 = FUNC_1(VAR_24->gpio_wake);
  if (VAR_26 != -VAR_5)
   FUNC_2(VAR_23, "Failed to get wake gpio: %d\n", VAR_26);
  return VAR_26;
 }

 VAR_24->gpio_enable = FUNC_6(VAR_23, "enable",
            VAR_9);
 if (FUNC_0(VAR_24->gpio_enable)) {
  VAR_26 = FUNC_1(VAR_24->gpio_enable);
  if (VAR_26 != -VAR_5)
   FUNC_2(VAR_23, "Failed to get enable gpio: %d\n", VAR_26);
  return VAR_26;
 }

 if (VAR_24->gpio_enable)
  FUNC_17(100);

 VAR_26 = FUNC_9(VAR_23, VAR_20->irq, ((void*)0), VAR_19,
       VAR_14 | VAR_13,
       VAR_20->name, VAR_24);
 if (VAR_26) {
  FUNC_2(VAR_23, "failed to request irq %d\n", VAR_20->irq);
  return VAR_26;
 }

 FUNC_19(VAR_24);


 VAR_26 = FUNC_20(VAR_24, VAR_16);
 if (VAR_26) {
  FUNC_2(VAR_23, "Failed to set IDLE mode\n");
  return VAR_26;
 }


 VAR_26 = FUNC_21(VAR_24);
 if (VAR_26)
  return VAR_26;

 VAR_26 = FUNC_13(VAR_25);
 if (VAR_26)
  return VAR_26;

 FUNC_10(VAR_20, VAR_24);

 return 0;
}
