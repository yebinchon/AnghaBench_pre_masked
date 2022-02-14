
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wacom_i2c {struct input_dev* input; struct i2c_client* client; } ;
struct wacom_features {int pressure_max; int y_max; int x_max; int fw_version; int member_0; } ;
struct TYPE_4__ {int * parent; } ;
struct TYPE_3__ {int vendor; int version; int bustype; } ;
struct input_dev {char* name; int* evbit; int keybit; int close; int open; TYPE_2__ dev; TYPE_1__ id; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int irq; int dev; int adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
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
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,struct wacom_i2c*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct i2c_client*,struct wacom_i2c*) ;
 struct input_dev* FUNC_7 () ;
 int FUNC_8 (struct input_dev*) ;
 int FUNC_9 (struct input_dev*) ;
 int FUNC_10 (struct input_dev*,int ,int ,int ,int ,int ) ;
 int FUNC_11 (struct input_dev*,struct wacom_i2c*) ;
 int FUNC_12 (struct wacom_i2c*) ;
 struct wacom_i2c* FUNC_13 (int,int ) ;
 int FUNC_14 (int ,int *,int ,int,char*,struct wacom_i2c*) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_15 (struct i2c_client*,struct wacom_features*) ;

__attribute__((used)) static int FUNC_16(struct i2c_client *VAR_20,
         const struct i2c_device_id *VAR_21)
{
 struct wacom_i2c *VAR_22;
 struct input_dev *VAR_23;
 struct wacom_features VAR_24 = { 0 };
 int VAR_25;

 if (!FUNC_5(VAR_20->adapter, VAR_14)) {
  FUNC_2(&VAR_20->dev, "i2c_check_functionality error\n");
  return -VAR_9;
 }

 VAR_25 = FUNC_15(VAR_20, &VAR_24);
 if (VAR_25)
  return VAR_25;

 VAR_22 = FUNC_13(sizeof(*VAR_22), VAR_13);
 VAR_23 = FUNC_7();
 if (!VAR_22 || !VAR_23) {
  VAR_25 = -VAR_10;
  goto err_free_mem;
 }

 VAR_22->client = VAR_20;
 VAR_22->input = VAR_23;

 VAR_23->name = "Wacom I2C Digitizer";
 VAR_23->id.bustype = VAR_8;
 VAR_23->id.vendor = 0x56a;
 VAR_23->id.version = VAR_24.fw_version;
 VAR_23->dev.parent = &VAR_20->dev;
 VAR_23->open = VAR_19;
 VAR_23->close = VAR_17;

 VAR_23->evbit[0] |= FUNC_0(VAR_12) | FUNC_0(VAR_11);

 FUNC_1(VAR_5, VAR_23->keybit);
 FUNC_1(VAR_6, VAR_23->keybit);
 FUNC_1(VAR_3, VAR_23->keybit);
 FUNC_1(VAR_4, VAR_23->keybit);
 FUNC_1(VAR_7, VAR_23->keybit);

 FUNC_10(VAR_23, VAR_1, 0, VAR_24.x_max, 0, 0);
 FUNC_10(VAR_23, VAR_2, 0, VAR_24.y_max, 0, 0);
 FUNC_10(VAR_23, VAR_0,
        0, VAR_24.pressure_max, 0, 0);

 FUNC_11(VAR_23, VAR_22);

 VAR_25 = FUNC_14(VAR_20->irq, ((void*)0), VAR_18,
         VAR_16 | VAR_15,
         "wacom_i2c", VAR_22);
 if (VAR_25) {
  FUNC_2(&VAR_20->dev,
   "Failed to enable IRQ, error: %d\n", VAR_25);
  goto err_free_mem;
 }


 FUNC_3(VAR_20->irq);

 VAR_25 = FUNC_9(VAR_22->input);
 if (VAR_25) {
  FUNC_2(&VAR_20->dev,
   "Failed to register input device, error: %d\n", VAR_25);
  goto err_free_irq;
 }

 FUNC_6(VAR_20, VAR_22);
 return 0;

err_free_irq:
 FUNC_4(VAR_20->irq, VAR_22);
err_free_mem:
 FUNC_8(VAR_23);
 FUNC_12(VAR_22);

 return VAR_25;
}
