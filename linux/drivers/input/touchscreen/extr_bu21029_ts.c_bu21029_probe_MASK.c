
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bustype; } ;
struct input_dev {int close; int open; TYPE_1__ id; int name; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; int irq; int adapter; } ;
struct bu21029_ts_data {int prop; int timer; struct input_dev* in_dev; struct i2c_client* client; int reset_gpios; int vdd; int x_plate_ohms; } ;


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
 scalar_t__ FUNC_0 (int ) ;
 int VAR_17 ;
 int FUNC_1 (int ) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,char*,int *) ;
 int FUNC_4 (int *,char*,int ) ;
 struct input_dev* FUNC_5 (int *) ;
 struct bu21029_ts_data* FUNC_6 (int *,int,int ) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,int ,int *,int ,int ,int ,struct bu21029_ts_data*) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (struct i2c_client*,struct bu21029_ts_data*) ;
 int FUNC_11 (struct input_dev*) ;
 int FUNC_12 (struct input_dev*,int ,int ,int ,int ,int ) ;
 int FUNC_13 (struct input_dev*,int ,int ) ;
 int FUNC_14 (struct input_dev*,struct bu21029_ts_data*) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int *,int ,int ) ;
 int FUNC_17 (struct input_dev*,int,int *) ;

__attribute__((used)) static int FUNC_18(struct i2c_client *VAR_22,
    const struct i2c_device_id *VAR_23)
{
 struct bu21029_ts_data *VAR_24;
 struct input_dev *VAR_25;
 int VAR_26;

 if (!FUNC_9(VAR_22->adapter,
         VAR_13 |
         VAR_14 |
         VAR_12)) {
  FUNC_2(&VAR_22->dev,
   "i2c functionality support is not sufficient\n");
  return -VAR_6;
 }

 VAR_24 = FUNC_6(&VAR_22->dev, sizeof(*VAR_24), VAR_10);
 if (!VAR_24)
  return -VAR_7;

 VAR_26 = FUNC_3(&VAR_22->dev, "rohm,x-plate-ohms",
      &VAR_24->x_plate_ohms);
 if (VAR_26) {
  FUNC_2(&VAR_22->dev,
   "invalid 'x-plate-ohms' supplied: %d\n", VAR_26);
  return VAR_26;
 }

 VAR_24->vdd = FUNC_7(&VAR_22->dev, "vdd");
 if (FUNC_0(VAR_24->vdd)) {
  VAR_26 = FUNC_1(VAR_24->vdd);
  if (VAR_26 != -VAR_8)
   FUNC_2(&VAR_22->dev,
    "failed to acquire 'vdd' supply: %d\n", VAR_26);
  return VAR_26;
 }

 VAR_24->reset_gpios = FUNC_4(&VAR_22->dev,
             "reset", VAR_11);
 if (FUNC_0(VAR_24->reset_gpios)) {
  VAR_26 = FUNC_1(VAR_24->reset_gpios);
  if (VAR_26 != -VAR_8)
   FUNC_2(&VAR_22->dev,
    "failed to acquire 'reset' gpio: %d\n", VAR_26);
  return VAR_26;
 }

 VAR_25 = FUNC_5(&VAR_22->dev);
 if (!VAR_25) {
  FUNC_2(&VAR_22->dev, "unable to allocate input device\n");
  return -VAR_7;
 }

 VAR_24->client = VAR_22;
 VAR_24->in_dev = VAR_25;
 FUNC_16(&VAR_24->timer, VAR_20, 0);

 VAR_25->name = VAR_5;
 VAR_25->id.bustype = VAR_4;
 VAR_25->open = VAR_18;
 VAR_25->close = VAR_19;

 FUNC_13(VAR_25, VAR_9, VAR_3);
 FUNC_12(VAR_25, VAR_1, 0, VAR_17, 0, 0);
 FUNC_12(VAR_25, VAR_2, 0, VAR_17, 0, 0);
 FUNC_12(VAR_25, VAR_0, 0, VAR_17, 0, 0);
 FUNC_17(VAR_25, 0, &VAR_24->prop);

 FUNC_14(VAR_25, VAR_24);

 FUNC_15(VAR_22->irq, VAR_16);
 VAR_26 = FUNC_8(&VAR_22->dev, VAR_22->irq,
       ((void*)0), VAR_21,
       VAR_15, VAR_5, VAR_24);
 if (VAR_26) {
  FUNC_2(&VAR_22->dev,
   "unable to request touch irq: %d\n", VAR_26);
  return VAR_26;
 }

 VAR_26 = FUNC_11(VAR_25);
 if (VAR_26) {
  FUNC_2(&VAR_22->dev,
   "unable to register input device: %d\n", VAR_26);
  return VAR_26;
 }

 FUNC_10(VAR_22, VAR_24);

 return 0;
}
