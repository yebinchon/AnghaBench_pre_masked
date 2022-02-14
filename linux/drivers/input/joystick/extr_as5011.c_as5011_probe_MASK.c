
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * parent; } ;
struct TYPE_3__ {int bustype; } ;
struct input_dev {char* name; TYPE_2__ dev; TYPE_1__ id; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; int adapter; } ;
struct as5011_platform_data {int axis_irq; int axis_irqflags; int button_gpio; } ;
struct as5011_device {int axis_irq; int button_irq; int button_gpio; struct input_dev* input_dev; struct i2c_client* i2c_client; } ;


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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (struct as5011_device*,struct as5011_platform_data const*) ;
 int FUNC_1 (int *,char*,...) ;
 struct as5011_platform_data* FUNC_2 (int *) ;
 int FUNC_3 (int,struct as5011_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (struct i2c_client*,struct as5011_device*) ;
 struct input_dev* FUNC_9 () ;
 int FUNC_10 (struct input_dev*) ;
 int FUNC_11 (struct input_dev*) ;
 int FUNC_12 (struct input_dev*,int ,int ,int ,int ,int ) ;
 int FUNC_13 (struct input_dev*,int ,int ) ;
 int FUNC_14 (struct as5011_device*) ;
 struct as5011_device* FUNC_15 (int,int ) ;
 int FUNC_16 (int,int *,int ,int,char*,struct as5011_device*) ;

__attribute__((used)) static int FUNC_17(struct i2c_client *VAR_20,
    const struct i2c_device_id *VAR_21)
{
 const struct as5011_platform_data *VAR_22;
 struct as5011_device *VAR_23;
 struct input_dev *VAR_24;
 int VAR_25;
 int VAR_26;

 VAR_22 = FUNC_2(&VAR_20->dev);
 if (!VAR_22)
  return -VAR_8;

 if (!VAR_22->axis_irq) {
  FUNC_1(&VAR_20->dev, "No axis IRQ?\n");
  return -VAR_8;
 }

 if (!FUNC_7(VAR_20->adapter,
         VAR_13 |
         VAR_14)) {
  FUNC_1(&VAR_20->dev,
   "need i2c bus that supports protocol mangling\n");
  return -VAR_9;
 }

 VAR_23 = FUNC_15(sizeof(struct as5011_device), VAR_12);
 VAR_24 = FUNC_9();
 if (!VAR_23 || !VAR_24) {
  FUNC_1(&VAR_20->dev,
   "Can't allocate memory for device structure\n");
  VAR_26 = -VAR_10;
  goto err_free_mem;
 }

 VAR_23->i2c_client = VAR_20;
 VAR_23->input_dev = VAR_24;
 VAR_23->button_gpio = VAR_22->button_gpio;
 VAR_23->axis_irq = VAR_22->axis_irq;

 VAR_24->name = "Austria Microsystem as5011 joystick";
 VAR_24->id.bustype = VAR_7;
 VAR_24->dev.parent = &VAR_20->dev;

 FUNC_13(VAR_24, VAR_11, VAR_6);

 FUNC_12(VAR_24, VAR_0,
  VAR_5, VAR_4, VAR_3, VAR_2);
 FUNC_12(VAR_23->input_dev, VAR_1,
  VAR_5, VAR_4, VAR_3, VAR_2);

 VAR_26 = FUNC_5(VAR_23->button_gpio, "AS5011 button");
 if (VAR_26 < 0) {
  FUNC_1(&VAR_20->dev, "Failed to request button gpio\n");
  goto err_free_mem;
 }

 VAR_25 = FUNC_6(VAR_23->button_gpio);
 if (VAR_25 < 0) {
  FUNC_1(&VAR_20->dev,
   "Failed to get irq number for button gpio\n");
  VAR_26 = VAR_25;
  goto err_free_button_gpio;
 }

 VAR_23->button_irq = VAR_25;

 VAR_26 = FUNC_16(VAR_23->button_irq,
         ((void*)0), VAR_19,
         VAR_17 |
     VAR_16 | VAR_15,
         "as5011_button", VAR_23);
 if (VAR_26 < 0) {
  FUNC_1(&VAR_20->dev,
   "Can't allocate button irq %d\n", VAR_23->button_irq);
  goto err_free_button_gpio;
 }

 VAR_26 = FUNC_0(VAR_23, VAR_22);
 if (VAR_26)
  goto err_free_button_irq;

 VAR_26 = FUNC_16(VAR_23->axis_irq, ((void*)0),
         VAR_18,
         VAR_22->axis_irqflags | VAR_15,
         "as5011_joystick", VAR_23);
 if (VAR_26) {
  FUNC_1(&VAR_20->dev,
   "Can't allocate axis irq %d\n", VAR_22->axis_irq);
  goto err_free_button_irq;
 }

 VAR_26 = FUNC_11(VAR_23->input_dev);
 if (VAR_26) {
  FUNC_1(&VAR_20->dev, "Failed to register input device\n");
  goto err_free_axis_irq;
 }

 FUNC_8(VAR_20, VAR_23);

 return 0;

err_free_axis_irq:
 FUNC_3(VAR_23->axis_irq, VAR_23);
err_free_button_irq:
 FUNC_3(VAR_23->button_irq, VAR_23);
err_free_button_gpio:
 FUNC_4(VAR_23->button_gpio);
err_free_mem:
 FUNC_10(VAR_24);
 FUNC_14(VAR_23);

 return VAR_26;
}
