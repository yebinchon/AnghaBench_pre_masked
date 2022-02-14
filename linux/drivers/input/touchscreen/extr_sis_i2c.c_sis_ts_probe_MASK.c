
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sis_ts_data {struct input_dev* input; void* reset_gpio; void* attn_gpio; struct i2c_client* client; } ;
struct TYPE_2__ {int bustype; } ;
struct input_dev {char* name; TYPE_1__ id; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; int name; int irq; } ;


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
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_2 (int *,char*,...) ;
 void* FUNC_3 (int *,char*,int ) ;
 struct input_dev* FUNC_4 (int *) ;
 struct sis_ts_data* FUNC_5 (int *,int,int ) ;
 int FUNC_6 (int *,int ,int *,int ,int ,int ,struct sis_ts_data*) ;
 int FUNC_7 (struct input_dev*,int ,int ) ;
 int FUNC_8 (struct input_dev*) ;
 int FUNC_9 (struct input_dev*,int ,int ,int ,int ,int ) ;
 int VAR_19 ;
 int FUNC_10 (struct sis_ts_data*) ;

__attribute__((used)) static int FUNC_11(struct i2c_client *VAR_20,
   const struct i2c_device_id *VAR_21)
{
 struct sis_ts_data *VAR_22;
 struct input_dev *VAR_23;
 int VAR_24;

 VAR_22 = FUNC_5(&VAR_20->dev, sizeof(*VAR_22), VAR_8);
 if (!VAR_22)
  return -VAR_6;

 VAR_22->client = VAR_20;

 VAR_22->attn_gpio = FUNC_3(&VAR_20->dev,
      "attn", VAR_9);
 if (FUNC_0(VAR_22->attn_gpio)) {
  VAR_24 = FUNC_1(VAR_22->attn_gpio);
  if (VAR_24 != -VAR_7)
   FUNC_2(&VAR_20->dev,
    "Failed to get attention GPIO: %d\n", VAR_24);
  return VAR_24;
 }

 VAR_22->reset_gpio = FUNC_3(&VAR_20->dev,
       "reset", VAR_10);
 if (FUNC_0(VAR_22->reset_gpio)) {
  VAR_24 = FUNC_1(VAR_22->reset_gpio);
  if (VAR_24 != -VAR_7)
   FUNC_2(&VAR_20->dev,
    "Failed to get reset GPIO: %d\n", VAR_24);
  return VAR_24;
 }

 FUNC_10(VAR_22);

 VAR_22->input = VAR_23 = FUNC_4(&VAR_20->dev);
 if (!VAR_23) {
  FUNC_2(&VAR_20->dev, "Failed to allocate input device\n");
  return -VAR_6;
 }

 VAR_23->name = "SiS Touchscreen";
 VAR_23->id.bustype = VAR_5;

 FUNC_9(VAR_23, VAR_0, 0, VAR_17, 0, 0);
 FUNC_9(VAR_23, VAR_1, 0, VAR_18, 0, 0);
 FUNC_9(VAR_23, VAR_2, 0, VAR_16, 0, 0);
 FUNC_9(VAR_23, VAR_3,
        0, VAR_13, 0, 0);
 FUNC_9(VAR_23, VAR_4,
        0, VAR_14, 0, 0);

 VAR_24 = FUNC_7(VAR_23, VAR_15, VAR_11);
 if (VAR_24) {
  FUNC_2(&VAR_20->dev,
   "Failed to initialize MT slots: %d\n", VAR_24);
  return VAR_24;
 }

 VAR_24 = FUNC_6(&VAR_20->dev, VAR_20->irq,
       ((void*)0), VAR_19,
       VAR_12,
       VAR_20->name, VAR_22);
 if (VAR_24) {
  FUNC_2(&VAR_20->dev, "Failed to request IRQ: %d\n", VAR_24);
  return VAR_24;
 }

 VAR_24 = FUNC_8(VAR_22->input);
 if (VAR_24) {
  FUNC_2(&VAR_20->dev,
   "Failed to register input device: %d\n", VAR_24);
  return VAR_24;
 }

 return 0;
}
