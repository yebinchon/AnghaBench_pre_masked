
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct tca8418_keypad {int row_shift; struct input_dev* input; struct i2c_client* client; } ;
struct TYPE_3__ {int vendor; int product; int version; int bustype; } ;
struct input_dev {int evbit; TYPE_1__ id; int name; } ;
struct i2c_device_id {int dummy; } ;
struct device {int dummy; } ;
struct i2c_client {int irq; int name; TYPE_2__* adapter; struct device dev; } ;
struct TYPE_4__ {int dev; } ;


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
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct device*,char*,...) ;
 scalar_t__ FUNC_3 (struct device*,char*) ;
 struct input_dev* FUNC_4 (struct device*) ;
 struct tca8418_keypad* FUNC_5 (struct device*,int,int ) ;
 int FUNC_6 (struct device*,int ,int *,int ,int,int ,struct tca8418_keypad*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (TYPE_2__*,int ) ;
 int FUNC_9 (struct input_dev*) ;
 int FUNC_10 (struct input_dev*,int ,int ) ;
 int FUNC_11 (int *,int *,scalar_t__,scalar_t__,int *,struct input_dev*) ;
 int FUNC_12 (struct device*,scalar_t__*,scalar_t__*) ;
 int FUNC_13 (struct tca8418_keypad*,scalar_t__,scalar_t__) ;
 int VAR_14 ;
 int FUNC_14 (struct tca8418_keypad*,int ,int *) ;

__attribute__((used)) static int FUNC_15(struct i2c_client *VAR_15,
    const struct i2c_device_id *VAR_16)
{
 struct device *VAR_17 = &VAR_15->dev;
 struct tca8418_keypad *VAR_18;
 struct input_dev *VAR_19;
 u32 VAR_20 = 0, VAR_21 = 0;
 int VAR_22, VAR_23;
 u8 VAR_24;


 if (!FUNC_8(VAR_15->adapter, VAR_7)) {
  FUNC_2(VAR_17, "%s adapter not supported\n",
   FUNC_1(&VAR_15->adapter->dev));
  return -VAR_2;
 }

 VAR_22 = FUNC_12(VAR_17, &VAR_20, &VAR_21);
 if (VAR_22)
  return VAR_22;

 if (!VAR_20 || VAR_20 > VAR_13) {
  FUNC_2(VAR_17, "invalid rows\n");
  return -VAR_1;
 }

 if (!VAR_21 || VAR_21 > VAR_12) {
  FUNC_2(VAR_17, "invalid columns\n");
  return -VAR_1;
 }

 VAR_23 = FUNC_7(VAR_21);


 VAR_18 = FUNC_5(VAR_17, sizeof(*VAR_18), VAR_6);
 if (!VAR_18)
  return -VAR_3;

 VAR_18->client = VAR_15;
 VAR_18->row_shift = VAR_23;


 VAR_22 = FUNC_14(VAR_18, VAR_11, &VAR_24);
 if (VAR_22)
  return -VAR_2;


 VAR_19 = FUNC_4(VAR_17);
 if (!VAR_19)
  return -VAR_3;

 VAR_18->input = VAR_19;

 VAR_19->name = VAR_15->name;
 VAR_19->id.bustype = VAR_0;
 VAR_19->id.vendor = 0x0001;
 VAR_19->id.product = 0x001;
 VAR_19->id.version = 0x0001;

 VAR_22 = FUNC_11(((void*)0), ((void*)0), VAR_20, VAR_21, ((void*)0), VAR_19);
 if (VAR_22) {
  FUNC_2(VAR_17, "Failed to build keymap\n");
  return VAR_22;
 }

 if (FUNC_3(VAR_17, "keypad,autorepeat"))
  FUNC_0(VAR_5, VAR_19->evbit);

 FUNC_10(VAR_19, VAR_4, VAR_10);

 VAR_22 = FUNC_6(VAR_17, VAR_15->irq,
       ((void*)0), VAR_14,
       VAR_9 | VAR_8,
       VAR_15->name, VAR_18);
 if (VAR_22) {
  FUNC_2(VAR_17, "Unable to claim irq %d; error %d\n",
   VAR_15->irq, VAR_22);
  return VAR_22;
 }


 VAR_22 = FUNC_13(VAR_18, VAR_20, VAR_21);
 if (VAR_22 < 0)
  return VAR_22;

 VAR_22 = FUNC_9(VAR_19);
 if (VAR_22) {
  FUNC_2(VAR_17, "Unable to register input device, error: %d\n",
   VAR_22);
  return VAR_22;
 }

 return 0;
}
