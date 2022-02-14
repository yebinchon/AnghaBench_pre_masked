
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct qt1050_priv {struct input_dev* input; struct regmap* regmap; int * keycodes; TYPE_3__* keys; struct i2c_client* client; } ;
struct TYPE_6__ {int bustype; } ;
struct TYPE_5__ {struct device* parent; } ;
struct input_dev {char* name; int keycodesize; unsigned int keycodemax; int keybit; int evbit; int * keycode; TYPE_2__ id; TYPE_1__ dev; } ;
struct device {int dummy; } ;
struct i2c_client {struct device dev; int irq; TYPE_4__* adapter; } ;
struct TYPE_8__ {int dev; } ;
struct TYPE_7__ {int keycode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct device*,char*,...) ;
 struct input_dev* FUNC_5 (struct device*) ;
 struct qt1050_priv* FUNC_6 (struct device*,int,int ) ;
 struct regmap* FUNC_7 (struct i2c_client*,int *) ;
 int FUNC_8 (struct device*,int ,int *,int ,int ,char*,struct qt1050_priv*) ;
 int FUNC_9 (TYPE_4__*,int ) ;
 int FUNC_10 (struct i2c_client*,struct qt1050_priv*) ;
 int FUNC_11 (struct input_dev*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct qt1050_priv*) ;
 int FUNC_14 (struct qt1050_priv*) ;
 int VAR_14 ;
 int FUNC_15 (struct qt1050_priv*) ;
 int VAR_15 ;
 int FUNC_16 (struct regmap*,int ,unsigned int*) ;
 int FUNC_17 (struct regmap*,int ,unsigned int,unsigned int,int,int) ;
 int FUNC_18 (struct regmap*,int ,int,int) ;

__attribute__((used)) static int FUNC_19(struct i2c_client *VAR_16)
{
 struct qt1050_priv *VAR_17;
 struct input_dev *VAR_18;
 struct device *VAR_19 = &VAR_16->dev;
 struct regmap *VAR_20;
 unsigned int VAR_21, VAR_22;
 int VAR_23;


 VAR_23 = FUNC_9(VAR_16->adapter, VAR_6);
 if (!VAR_23) {
  FUNC_4(&VAR_16->dev, "%s adapter not supported\n",
   FUNC_3(&VAR_16->adapter->dev));
  return -VAR_2;
 }

 if (!VAR_16->irq) {
  FUNC_4(VAR_19, "assign a irq line to this device\n");
  return -VAR_1;
 }

 VAR_17 = FUNC_6(VAR_19, sizeof(*VAR_17), VAR_5);
 if (!VAR_17)
  return -VAR_3;

 VAR_18 = FUNC_5(VAR_19);
 if (!VAR_18)
  return -VAR_3;

 VAR_20 = FUNC_7(VAR_16, &VAR_15);
 if (FUNC_0(VAR_20))
  return FUNC_1(VAR_20);

 VAR_17->client = VAR_16;
 VAR_17->input = VAR_18;
 VAR_17->regmap = VAR_20;

 FUNC_10(VAR_16, VAR_17);


 if (!FUNC_14(VAR_17))
  return -VAR_2;


 VAR_23 = FUNC_15(VAR_17);
 if (VAR_23) {
  FUNC_4(VAR_19, "Failed to parse firmware: %d\n", VAR_23);
  return VAR_23;
 }

 VAR_18->name = "AT42QT1050 QTouch Sensor";
 VAR_18->dev.parent = &VAR_16->dev;
 VAR_18->id.bustype = VAR_0;


 VAR_18->keycode = VAR_17->keycodes;
 VAR_18->keycodesize = sizeof(VAR_17->keycodes[0]);
 VAR_18->keycodemax = VAR_9;

 FUNC_2(VAR_4, VAR_18->evbit);
 for (VAR_22 = 0; VAR_22 < VAR_9; VAR_22++) {
  VAR_17->keycodes[VAR_22] = VAR_17->keys[VAR_22].keycode;
  FUNC_2(VAR_17->keycodes[VAR_22], VAR_18->keybit);
 }


 VAR_23 = FUNC_18(VAR_17->regmap, VAR_11, 0x7f,
     VAR_12);
 if (VAR_23) {
  FUNC_4(VAR_19, "Trigger calibration failed: %d\n", VAR_23);
  return VAR_23;
 }
 VAR_23 = FUNC_17(VAR_17->regmap, VAR_8, VAR_21,
     VAR_21 >> 7 == 1, 10000, 200000);
 if (VAR_23) {
  FUNC_4(VAR_19, "Calibration failed: %d\n", VAR_23);
  return VAR_23;
 }


 VAR_23 = FUNC_18(VAR_17->regmap, VAR_11,
     VAR_13, VAR_13);
 if (VAR_23) {
  FUNC_4(VAR_19, "Trigger soft reset failed: %d\n", VAR_23);
  return VAR_23;
 }
 FUNC_12(VAR_10);


 VAR_23 = FUNC_13(VAR_17);
 if (VAR_23) {
  FUNC_4(VAR_19, "Failed to set firmware data: %d\n", VAR_23);
  return VAR_23;
 }

 VAR_23 = FUNC_8(VAR_19, VAR_16->irq, ((void*)0),
     VAR_14, VAR_7,
     "qt1050", VAR_17);
 if (VAR_23) {
  FUNC_4(&VAR_16->dev, "Failed to request irq: %d\n", VAR_23);
  return VAR_23;
 }


 VAR_23 = FUNC_16(VAR_17->regmap, VAR_8, &VAR_21);
 if (VAR_23) {
  FUNC_4(VAR_19, "Failed to clear #CHANGE line level: %d\n", VAR_23);
  return VAR_23;
 }


 VAR_23 = FUNC_11(VAR_17->input);
 if (VAR_23) {
  FUNC_4(&VAR_16->dev, "Failed to register input device: %d\n",
   VAR_23);
  return VAR_23;
 }

 return 0;
}
