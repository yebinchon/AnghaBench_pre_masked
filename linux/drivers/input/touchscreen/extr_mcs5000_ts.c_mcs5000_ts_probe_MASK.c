
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mcs_platform_data {int (* cfg_pin ) () ;} ;
struct mcs5000_ts_data {struct input_dev* input_dev; struct i2c_client* client; } ;
struct TYPE_4__ {int * parent; } ;
struct TYPE_3__ {int bustype; } ;
struct input_dev {char* name; int keybit; int evbit; TYPE_2__ dev; TYPE_1__ id; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; int irq; } ;


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
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,char*) ;
 struct mcs_platform_data* FUNC_2 (int *) ;
 struct input_dev* FUNC_3 (int *) ;
 struct mcs5000_ts_data* FUNC_4 (int *,int,int ) ;
 int FUNC_5 (int *,int ,int *,int ,int,char*,struct mcs5000_ts_data*) ;
 int FUNC_6 (struct i2c_client*,struct mcs5000_ts_data*) ;
 int FUNC_7 (struct input_dev*) ;
 int FUNC_8 (struct input_dev*,int ,int ,int ,int ,int ) ;
 int VAR_13 ;
 int FUNC_9 (struct mcs5000_ts_data*,struct mcs_platform_data const*) ;
 int FUNC_10 () ;

__attribute__((used)) static int FUNC_11(struct i2c_client *VAR_14,
       const struct i2c_device_id *VAR_15)
{
 const struct mcs_platform_data *VAR_16;
 struct mcs5000_ts_data *VAR_17;
 struct input_dev *VAR_18;
 int VAR_19;

 VAR_16 = FUNC_2(&VAR_14->dev);
 if (!VAR_16)
  return -VAR_4;

 VAR_17 = FUNC_4(&VAR_14->dev, sizeof(*VAR_17), VAR_8);
 if (!VAR_17) {
  FUNC_1(&VAR_14->dev, "Failed to allocate memory\n");
  return -VAR_5;
 }

 VAR_17->client = VAR_14;

 VAR_18 = FUNC_3(&VAR_14->dev);
 if (!VAR_18) {
  FUNC_1(&VAR_14->dev, "Failed to allocate input device\n");
  return -VAR_5;
 }

 VAR_18->name = "MELFAS MCS-5000 Touchscreen";
 VAR_18->id.bustype = VAR_3;
 VAR_18->dev.parent = &VAR_14->dev;

 FUNC_0(VAR_6, VAR_18->evbit);
 FUNC_0(VAR_7, VAR_18->evbit);
 FUNC_0(VAR_2, VAR_18->keybit);
 FUNC_8(VAR_18, VAR_0, 0, VAR_11, 0, 0);
 FUNC_8(VAR_18, VAR_1, 0, VAR_12, 0, 0);

 VAR_17->input_dev = VAR_18;

 if (VAR_16->cfg_pin)
  VAR_16->cfg_pin();

 VAR_19 = FUNC_5(&VAR_14->dev, VAR_14->irq,
       ((void*)0), VAR_13,
       VAR_10 | VAR_9,
       "mcs5000_ts", VAR_17);
 if (VAR_19) {
  FUNC_1(&VAR_14->dev, "Failed to register interrupt\n");
  return VAR_19;
 }

 VAR_19 = FUNC_7(VAR_17->input_dev);
 if (VAR_19) {
  FUNC_1(&VAR_14->dev, "Failed to register input device\n");
  return VAR_19;
 }

 FUNC_9(VAR_17, VAR_16);
 FUNC_6(VAR_14, VAR_17);

 return 0;
}
