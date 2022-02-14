
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bustype; } ;
struct input_dev {char* name; int keybit; int evbit; int close; int open; TYPE_1__ id; int phys; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; int irq; } ;
struct auo_pixcir_ts_platdata {int x_max; int y_max; int int_setting; int gpio_rst; int gpio_int; } ;
struct auo_pixcir_ts {int stopped; struct input_dev* input; int phys; int wait; scalar_t__ touch_ind_mode; struct i2c_client* client; struct auo_pixcir_ts_platdata const* pdata; } ;


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
 scalar_t__ FUNC_0 (struct auo_pixcir_ts_platdata const*) ;
 int FUNC_1 (struct auo_pixcir_ts_platdata const*) ;
 int FUNC_2 (int ,int ) ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_3 (struct auo_pixcir_ts*,int ) ;
 int VAR_22 ;
 struct auo_pixcir_ts_platdata* FUNC_4 (int *) ;
 int VAR_23 ;
 int FUNC_5 (struct auo_pixcir_ts*) ;
 int FUNC_6 (int *,char*,...) ;
 struct auo_pixcir_ts_platdata* FUNC_7 (int *) ;
 int FUNC_8 (int *,char*,int) ;
 char* FUNC_9 (int *) ;
 int FUNC_10 (int *,int ,struct auo_pixcir_ts*) ;
 int FUNC_11 (int *,int ,int,char*) ;
 struct input_dev* FUNC_12 (int *) ;
 struct auo_pixcir_ts* FUNC_13 (int *,int,int ) ;
 int FUNC_14 (int *,int ,int *,int ,int,char*,struct auo_pixcir_ts*) ;
 int FUNC_15 (struct i2c_client*,struct auo_pixcir_ts*) ;
 int FUNC_16 (struct i2c_client*,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (struct input_dev*) ;
 int FUNC_19 (struct input_dev*,int ,int ,int,int ,int ) ;
 int FUNC_20 (struct input_dev*,struct auo_pixcir_ts*) ;
 int FUNC_21 (int) ;
 int FUNC_22 (int ,int,char*,char*) ;

__attribute__((used)) static int FUNC_23(struct i2c_client *VAR_24,
       const struct i2c_device_id *VAR_25)
{
 const struct auo_pixcir_ts_platdata *VAR_26;
 struct auo_pixcir_ts *VAR_27;
 struct input_dev *VAR_28;
 int VAR_29;
 int VAR_30;

 VAR_26 = FUNC_7(&VAR_24->dev);
 if (!VAR_26) {
  VAR_26 = FUNC_4(&VAR_24->dev);
  if (FUNC_0(VAR_26))
   return FUNC_1(VAR_26);
 }

 VAR_27 = FUNC_13(&VAR_24->dev,
     sizeof(struct auo_pixcir_ts), VAR_14);
 if (!VAR_27)
  return -VAR_11;

 VAR_28 = FUNC_12(&VAR_24->dev);
 if (!VAR_28) {
  FUNC_6(&VAR_24->dev, "could not allocate input device\n");
  return -VAR_11;
 }

 VAR_27->pdata = VAR_26;
 VAR_27->client = VAR_24;
 VAR_27->input = VAR_28;
 VAR_27->touch_ind_mode = 0;
 VAR_27->stopped = 1;
 FUNC_17(&VAR_27->wait);

 FUNC_22(VAR_27->phys, sizeof(VAR_27->phys),
   "%s/input0", FUNC_9(&VAR_24->dev));

 VAR_28->name = "AUO-Pixcir touchscreen";
 VAR_28->phys = VAR_27->phys;
 VAR_28->id.bustype = VAR_10;

 VAR_28->open = VAR_21;
 VAR_28->close = VAR_20;

 FUNC_2(VAR_12, VAR_28->evbit);
 FUNC_2(VAR_13, VAR_28->evbit);

 FUNC_2(VAR_9, VAR_28->keybit);


 FUNC_19(VAR_28, VAR_5, 0, VAR_26->x_max, 0, 0);
 FUNC_19(VAR_28, VAR_6, 0, VAR_26->y_max, 0, 0);


 FUNC_19(VAR_28, VAR_1, 0,
        VAR_26->x_max, 0, 0);
 FUNC_19(VAR_28, VAR_2, 0,
        VAR_26->y_max, 0, 0);
 FUNC_19(VAR_28, VAR_3, 0,
        VAR_7, 0, 0);
 FUNC_19(VAR_28, VAR_4, 0,
        VAR_7, 0, 0);
 FUNC_19(VAR_28, VAR_0, 0, 1, 0, 0);

 FUNC_20(VAR_27->input, VAR_27);

 VAR_30 = FUNC_11(&VAR_24->dev, VAR_26->gpio_int,
          VAR_15, "auo_pixcir_ts_int");
 if (VAR_30) {
  FUNC_6(&VAR_24->dev, "request of gpio %d failed, %d\n",
   VAR_26->gpio_int, VAR_30);
  return VAR_30;
 }

 VAR_30 = FUNC_11(&VAR_24->dev, VAR_26->gpio_rst,
          VAR_16 | VAR_17,
          "auo_pixcir_ts_rst");
 if (VAR_30) {
  FUNC_6(&VAR_24->dev, "request of gpio %d failed, %d\n",
   VAR_26->gpio_rst, VAR_30);
  return VAR_30;
 }

 VAR_30 = FUNC_10(&VAR_24->dev, VAR_23, VAR_27);
 if (VAR_30) {
  FUNC_6(&VAR_24->dev, "failed to register reset action, %d\n",
   VAR_30);
  return VAR_30;
 }

 FUNC_21(200);

 VAR_29 = FUNC_16(VAR_24, VAR_8);
 if (VAR_29 < 0) {
  VAR_30 = VAR_29;
  return VAR_30;
 }

 FUNC_8(&VAR_24->dev, "firmware version 0x%X\n", VAR_29);

 VAR_30 = FUNC_3(VAR_27, VAR_26->int_setting);
 if (VAR_30)
  return VAR_30;

 VAR_30 = FUNC_14(&VAR_24->dev, VAR_24->irq,
       ((void*)0), VAR_22,
       VAR_19 | VAR_18,
       VAR_28->name, VAR_27);
 if (VAR_30) {
  FUNC_6(&VAR_24->dev, "irq %d requested failed, %d\n",
   VAR_24->irq, VAR_30);
  return VAR_30;
 }


 VAR_30 = FUNC_5(VAR_27);
 if (VAR_30)
  return VAR_30;

 VAR_30 = FUNC_18(VAR_28);
 if (VAR_30) {
  FUNC_6(&VAR_24->dev, "could not register input device, %d\n",
   VAR_30);
  return VAR_30;
 }

 FUNC_15(VAR_24, VAR_27);

 return 0;
}
