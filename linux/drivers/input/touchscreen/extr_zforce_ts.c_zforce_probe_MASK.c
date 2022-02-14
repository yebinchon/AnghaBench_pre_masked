
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zforce_ts_platdata {int x_max; int y_max; } ;
struct zforce_ts {int command_done; int command_waiting; struct input_dev* input; int phys; struct i2c_client* client; struct zforce_ts_platdata const* pdata; int command_mutex; int access_mutex; struct zforce_ts_platdata const* reg_vdd; struct zforce_ts_platdata const* gpio_rst; struct zforce_ts_platdata const* gpio_int; } ;
struct TYPE_2__ {int bustype; } ;
struct input_dev {char* name; int evbit; int close; int open; TYPE_1__ id; int phys; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int irq; int dev; } ;


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
 scalar_t__ FUNC_0 (struct zforce_ts_platdata const*) ;
 int VAR_19 ;
 int FUNC_1 (struct zforce_ts_platdata const*) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,char*,...) ;
 struct zforce_ts_platdata* FUNC_4 (int *) ;
 char* FUNC_5 (int *) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int ,struct zforce_ts*) ;
 void* FUNC_9 (int *,int *,int,int ) ;
 void* FUNC_10 (int *,char*,int ) ;
 struct input_dev* FUNC_11 (int *) ;
 struct zforce_ts* FUNC_12 (int *,int,int ) ;
 struct zforce_ts_platdata const* FUNC_13 (int *,char*) ;
 int FUNC_14 (int *,int,int ,int ,int,char*,struct zforce_ts*) ;
 int FUNC_15 (struct i2c_client*,struct zforce_ts*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct input_dev*,int ,int ) ;
 int FUNC_18 (struct input_dev*) ;
 int FUNC_19 (struct input_dev*,int ,int ,int,int ,int ) ;
 int FUNC_20 (struct input_dev*,struct zforce_ts*) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (struct zforce_ts_platdata const*) ;
 int FUNC_23 (struct zforce_ts_platdata const*) ;
 int FUNC_24 (int ,int,char*,char*) ;
 int FUNC_25 (int) ;
 scalar_t__ FUNC_26 (int *,int ) ;
 int FUNC_27 (struct zforce_ts*,int ) ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 struct zforce_ts_platdata* FUNC_28 (int *) ;
 int VAR_27 ;
 int FUNC_29 (struct zforce_ts*) ;
 int FUNC_30 (struct zforce_ts*) ;

__attribute__((used)) static int FUNC_31(struct i2c_client *VAR_28,
   const struct i2c_device_id *VAR_29)
{
 const struct zforce_ts_platdata *VAR_30 = FUNC_4(&VAR_28->dev);
 struct zforce_ts *VAR_31;
 struct input_dev *VAR_32;
 int VAR_33;

 if (!VAR_30) {
  VAR_30 = FUNC_28(&VAR_28->dev);
  if (FUNC_0(VAR_30))
   return FUNC_1(VAR_30);
 }

 VAR_31 = FUNC_12(&VAR_28->dev, sizeof(struct zforce_ts), VAR_13);
 if (!VAR_31)
  return -VAR_8;

 VAR_31->gpio_rst = FUNC_10(&VAR_28->dev, "reset",
            VAR_15);
 if (FUNC_0(VAR_31->gpio_rst)) {
  VAR_33 = FUNC_1(VAR_31->gpio_rst);
  FUNC_3(&VAR_28->dev,
   "failed to request reset GPIO: %d\n", VAR_33);
  return VAR_33;
 }

 if (VAR_31->gpio_rst) {
  VAR_31->gpio_int = FUNC_10(&VAR_28->dev, "irq",
             VAR_14);
  if (FUNC_0(VAR_31->gpio_int)) {
   VAR_33 = FUNC_1(VAR_31->gpio_int);
   FUNC_3(&VAR_28->dev,
    "failed to request interrupt GPIO: %d\n", VAR_33);
   return VAR_33;
  }
 } else {






  VAR_31->gpio_int = FUNC_9(&VAR_28->dev, ((void*)0), 0,
          VAR_14);
  if (FUNC_0(VAR_31->gpio_int)) {
   VAR_33 = FUNC_1(VAR_31->gpio_int);
   FUNC_3(&VAR_28->dev,
    "failed to request interrupt GPIO: %d\n", VAR_33);
   return VAR_33;
  }


  VAR_31->gpio_rst = FUNC_9(&VAR_28->dev, ((void*)0), 1,
         VAR_15);
  if (FUNC_0(VAR_31->gpio_rst)) {
   VAR_33 = FUNC_1(VAR_31->gpio_rst);
   FUNC_3(&VAR_28->dev,
    "failed to request reset GPIO: %d\n", VAR_33);
   return VAR_33;
  }
 }

 VAR_31->reg_vdd = FUNC_13(&VAR_28->dev, "vdd");
 if (FUNC_0(VAR_31->reg_vdd)) {
  VAR_33 = FUNC_1(VAR_31->reg_vdd);
  if (VAR_33 == -VAR_9)
   return VAR_33;
 } else {
  VAR_33 = FUNC_23(VAR_31->reg_vdd);
  if (VAR_33)
   return VAR_33;





  FUNC_25(100);
 }

 VAR_33 = FUNC_8(&VAR_28->dev, VAR_27, VAR_31);
 if (VAR_33) {
  FUNC_3(&VAR_28->dev, "failed to register reset action, %d\n",
   VAR_33);


  if (!FUNC_0(VAR_31->reg_vdd))
   FUNC_22(VAR_31->reg_vdd);

  return VAR_33;
 }

 FUNC_24(VAR_31->phys, sizeof(VAR_31->phys),
   "%s/input0", FUNC_5(&VAR_28->dev));

 VAR_32 = FUNC_11(&VAR_28->dev);
 if (!VAR_32) {
  FUNC_3(&VAR_28->dev, "could not allocate input device\n");
  return -VAR_8;
 }

 FUNC_21(&VAR_31->access_mutex);
 FUNC_21(&VAR_31->command_mutex);

 VAR_31->pdata = VAR_30;
 VAR_31->client = VAR_28;
 VAR_31->input = VAR_32;

 VAR_32->name = "Neonode zForce touchscreen";
 VAR_32->phys = VAR_31->phys;
 VAR_32->id.bustype = VAR_5;

 VAR_32->open = VAR_24;
 VAR_32->close = VAR_23;

 FUNC_2(VAR_11, VAR_32->evbit);
 FUNC_2(VAR_12, VAR_32->evbit);
 FUNC_2(VAR_10, VAR_32->evbit);


 FUNC_19(VAR_32, VAR_1, 0,
        VAR_30->x_max, 0, 0);
 FUNC_19(VAR_32, VAR_2, 0,
        VAR_30->y_max, 0, 0);

 FUNC_19(VAR_32, VAR_3, 0,
        VAR_21, 0, 0);
 FUNC_19(VAR_32, VAR_4, 0,
        VAR_21, 0, 0);
 FUNC_19(VAR_32, VAR_0, 0, 1, 0, 0);
 FUNC_17(VAR_32, VAR_22, VAR_16);

 FUNC_20(VAR_31->input, VAR_31);

 FUNC_16(&VAR_31->command_done);
 VAR_33 = FUNC_14(&VAR_28->dev, VAR_28->irq,
     VAR_25, VAR_26,
     VAR_18 | VAR_17,
     VAR_32->name, VAR_31);
 if (VAR_33) {
  FUNC_3(&VAR_28->dev, "irq %d request failed\n", VAR_28->irq);
  return VAR_33;
 }

 FUNC_15(VAR_28, VAR_31);


 FUNC_29(VAR_31);

 VAR_31->command_waiting = VAR_19;
 if (FUNC_26(&VAR_31->command_done, VAR_20) == 0)
  FUNC_6(&VAR_28->dev, "bootcomplete timed out\n");


 VAR_33 = FUNC_27(VAR_31, VAR_6);
 if (VAR_33) {
  FUNC_3(&VAR_28->dev, "unable to initialize, %d\n", VAR_33);
  return VAR_33;
 }


 VAR_33 = FUNC_27(VAR_31, VAR_7);
 if (VAR_33 < 0) {
  FUNC_3(&VAR_28->dev, "couldn't get status, %d\n", VAR_33);
  FUNC_30(VAR_31);
  return VAR_33;
 }


 VAR_33 = FUNC_30(VAR_31);
 if (VAR_33 < 0)
  return VAR_33;

 FUNC_7(&VAR_28->dev, 1);

 VAR_33 = FUNC_18(VAR_32);
 if (VAR_33) {
  FUNC_3(&VAR_28->dev, "could not register input device, %d\n",
   VAR_33);
  return VAR_33;
 }

 return 0;
}
