
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rohm_ts_data {struct input_dev* input; int setup2; struct i2c_client* client; } ;
struct TYPE_6__ {int bustype; } ;
struct input_dev {int close; int open; TYPE_3__ id; int name; } ;
struct i2c_device_id {int dummy; } ;
struct device {int dummy; } ;
struct i2c_client {int name; int irq; TYPE_2__* adapter; struct device dev; } ;
struct TYPE_5__ {TYPE_1__* algo; } ;
struct TYPE_4__ {int master_xfer; } ;


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
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (struct device*,int *) ;
 struct input_dev* FUNC_2 (struct device*) ;
 struct rohm_ts_data* FUNC_3 (struct device*,int,int ) ;
 int FUNC_4 (struct device*,int ,int *,int ,int ,int ,struct rohm_ts_data*) ;
 int FUNC_5 (struct i2c_client*,struct rohm_ts_data*) ;
 int FUNC_6 (struct input_dev*,int ,int) ;
 int FUNC_7 (struct input_dev*) ;
 int FUNC_8 (struct input_dev*,int ,int ,int ,int ,int ) ;
 int FUNC_9 (struct input_dev*,struct rohm_ts_data*) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_10 (struct i2c_client*) ;
 int VAR_21 ;

__attribute__((used)) static int FUNC_11(struct i2c_client *VAR_22,
      const struct i2c_device_id *VAR_23)
{
 struct device *VAR_24 = &VAR_22->dev;
 struct rohm_ts_data *VAR_25;
 struct input_dev *VAR_26;
 int VAR_27;

 if (!VAR_22->irq) {
  FUNC_0(VAR_24, "IRQ is not assigned\n");
  return -VAR_4;
 }

 if (!VAR_22->adapter->algo->master_xfer) {
  FUNC_0(VAR_24, "I2C level transfers not supported\n");
  return -VAR_6;
 }


 VAR_27 = FUNC_10(VAR_22);
 if (VAR_27)
  return VAR_27;

 VAR_25 = FUNC_3(VAR_24, sizeof(struct rohm_ts_data), VAR_7);
 if (!VAR_25)
  return -VAR_5;

 VAR_25->client = VAR_22;
 VAR_25->setup2 = VAR_12;
 FUNC_5(VAR_22, VAR_25);

 VAR_26 = FUNC_2(VAR_24);
 if (!VAR_26)
  return -VAR_5;

 VAR_26->name = VAR_2;
 VAR_26->id.bustype = VAR_3;
 VAR_26->open = VAR_20;
 VAR_26->close = VAR_19;

 VAR_25->input = VAR_26;
 FUNC_9(VAR_26, VAR_25);

 FUNC_8(VAR_26, VAR_0,
        VAR_15, VAR_14, 0, 0);
 FUNC_8(VAR_26, VAR_1,
        VAR_17, VAR_16, 0, 0);

 VAR_27 = FUNC_6(VAR_26, VAR_13,
        VAR_8 | VAR_10 |
        VAR_9);
 if (VAR_27) {
  FUNC_0(VAR_24, "failed to multi touch slots initialization\n");
  return VAR_27;
 }

 VAR_27 = FUNC_4(VAR_24, VAR_22->irq,
       ((void*)0), VAR_21,
       VAR_11, VAR_22->name, VAR_25);
 if (VAR_27) {
  FUNC_0(VAR_24, "failed to request IRQ: %d\n", VAR_27);
  return VAR_27;
 }

 VAR_27 = FUNC_7(VAR_26);
 if (VAR_27) {
  FUNC_0(VAR_24, "failed to register input device: %d\n", VAR_27);
  return VAR_27;
 }

 VAR_27 = FUNC_1(VAR_24, &VAR_18);
 if (VAR_27) {
  FUNC_0(VAR_24, "failed to create sysfs group: %d\n", VAR_27);
  return VAR_27;
 }

 return VAR_27;
}
