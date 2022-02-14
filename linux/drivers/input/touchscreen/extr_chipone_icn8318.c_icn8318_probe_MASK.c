
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct device* parent; } ;
struct TYPE_3__ {int bustype; } ;
struct input_dev {TYPE_2__ dev; int (* close ) (struct input_dev*) ;int open; TYPE_1__ id; int name; } ;
struct icn8318_data {struct input_dev* input; struct i2c_client* client; int prop; int wake_gpio; } ;
struct i2c_device_id {int dummy; } ;
struct device {int dummy; } ;
struct i2c_client {int name; int irq; struct device dev; } ;


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
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (struct device*,char*,int ) ;
 struct input_dev* FUNC_4 (struct device*) ;
 struct icn8318_data* FUNC_5 (struct device*,int,int ) ;
 int FUNC_6 (struct device*,int ,int *,int ,int ,int ,struct icn8318_data*) ;
 int FUNC_7 (struct i2c_client*,struct icn8318_data*) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_8 (struct input_dev*) ;
 int FUNC_9 (struct input_dev*,int ) ;
 int FUNC_10 (struct input_dev*,int ,int) ;
 int FUNC_11 (struct input_dev*) ;
 int FUNC_12 (struct input_dev*,int ,int ) ;
 int FUNC_13 (struct input_dev*,struct icn8318_data*) ;
 int FUNC_14 (struct input_dev*,int,int *) ;

__attribute__((used)) static int FUNC_15(struct i2c_client *VAR_15,
    const struct i2c_device_id *VAR_16)
{
 struct device *VAR_17 = &VAR_15->dev;
 struct icn8318_data *VAR_18;
 struct input_dev *VAR_19;
 int VAR_20;

 if (!VAR_15->irq) {
  FUNC_2(VAR_17, "Error no irq specified\n");
  return -VAR_3;
 }

 VAR_18 = FUNC_5(VAR_17, sizeof(*VAR_18), VAR_7);
 if (!VAR_18)
  return -VAR_4;

 VAR_18->wake_gpio = FUNC_3(VAR_17, "wake", VAR_8);
 if (FUNC_0(VAR_18->wake_gpio)) {
  VAR_20 = FUNC_1(VAR_18->wake_gpio);
  if (VAR_20 != -VAR_5)
   FUNC_2(VAR_17, "Error getting wake gpio: %d\n", VAR_20);
  return VAR_20;
 }

 VAR_19 = FUNC_4(VAR_17);
 if (!VAR_19)
  return -VAR_4;

 VAR_19->name = VAR_15->name;
 VAR_19->id.bustype = VAR_2;
 VAR_19->open = VAR_14;
 VAR_19->close = FUNC_8;
 VAR_19->dev.parent = VAR_17;

 FUNC_12(VAR_19, VAR_6, VAR_0);
 FUNC_12(VAR_19, VAR_6, VAR_1);

 FUNC_14(VAR_19, 1, &VAR_18->prop);
 if (!FUNC_9(VAR_19, VAR_0) ||
     !FUNC_9(VAR_19, VAR_1)) {
  FUNC_2(VAR_17, "Error touchscreen-size-x and/or -y missing\n");
  return -VAR_3;
 }

 VAR_20 = FUNC_10(VAR_19, VAR_9,
        VAR_10 | VAR_11);
 if (VAR_20)
  return VAR_20;

 VAR_18->client = VAR_15;
 VAR_18->input = VAR_19;
 FUNC_13(VAR_19, VAR_18);

 VAR_20 = FUNC_6(VAR_17, VAR_15->irq, ((void*)0), VAR_13,
       VAR_12, VAR_15->name, VAR_18);
 if (VAR_20) {
  FUNC_2(VAR_17, "Error requesting irq: %d\n", VAR_20);
  return VAR_20;
 }


 FUNC_8(VAR_18->input);

 VAR_20 = FUNC_11(VAR_19);
 if (VAR_20)
  return VAR_20;

 FUNC_7(VAR_15, VAR_18);

 return 0;
}
