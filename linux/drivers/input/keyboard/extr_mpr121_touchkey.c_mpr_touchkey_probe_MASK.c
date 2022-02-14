
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct regulator {int dummy; } ;
struct mpr121_touchkey {int keycount; int * keycodes; struct input_dev* input_dev; struct i2c_client* client; } ;
struct TYPE_5__ {struct device* parent; } ;
struct TYPE_4__ {int bustype; } ;
struct input_dev {char* name; int keycodesize; int keycodemax; int * keycode; int evbit; TYPE_2__ dev; TYPE_1__ id; } ;
struct i2c_device_id {int dummy; } ;
struct device {TYPE_3__* driver; } ;
struct i2c_client {int irq; struct device dev; } ;
struct TYPE_6__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct regulator*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct regulator*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct device*,char*,...) ;
 int FUNC_4 (struct device*,scalar_t__) ;
 int FUNC_5 (struct device*,char*) ;
 scalar_t__ FUNC_6 (struct device*,char*) ;
 int FUNC_7 (struct device*,char*,int *,int) ;
 struct input_dev* FUNC_8 (struct device*) ;
 struct mpr121_touchkey* FUNC_9 (struct device*,int,int ) ;
 int FUNC_10 (struct device*,int ,int *,int ,int,int ,struct mpr121_touchkey*) ;
 int FUNC_11 (struct i2c_client*,struct mpr121_touchkey*) ;
 int FUNC_12 (struct input_dev*) ;
 int FUNC_13 (struct input_dev*,int ,int ) ;
 int FUNC_14 (struct mpr121_touchkey*,struct i2c_client*,int) ;
 struct regulator* FUNC_15 (struct device*) ;
 int VAR_11 ;
 int FUNC_16 (struct regulator*) ;

__attribute__((used)) static int FUNC_17(struct i2c_client *VAR_12,
         const struct i2c_device_id *VAR_13)
{
 struct device *VAR_14 = &VAR_12->dev;
 struct regulator *VAR_15;
 int VAR_16;
 struct mpr121_touchkey *VAR_17;
 struct input_dev *VAR_18;
 int VAR_19;
 int VAR_20;

 if (!VAR_12->irq) {
  FUNC_3(VAR_14, "irq number should not be zero\n");
  return -VAR_1;
 }

 VAR_15 = FUNC_15(VAR_14);
 if (FUNC_0(VAR_15))
  return FUNC_1(VAR_15);

 VAR_16 = FUNC_16(VAR_15);

 VAR_17 = FUNC_9(VAR_14, sizeof(*VAR_17), VAR_6);
 if (!VAR_17)
  return -VAR_2;

 VAR_18 = FUNC_8(VAR_14);
 if (!VAR_18)
  return -VAR_2;

 VAR_17->client = VAR_12;
 VAR_17->input_dev = VAR_18;
 VAR_17->keycount = FUNC_5(VAR_14, "linux,keycodes");
 if (VAR_17->keycount > VAR_9) {
  FUNC_3(VAR_14, "too many keys defined (%d)\n", VAR_17->keycount);
  return -VAR_1;
 }

 VAR_19 = FUNC_7(VAR_14, "linux,keycodes",
            VAR_17->keycodes,
            VAR_17->keycount);
 if (VAR_19) {
  FUNC_3(VAR_14,
   "failed to read linux,keycode property: %d\n", VAR_19);
  return VAR_19;
 }

 VAR_18->name = "Freescale MPR121 Touchkey";
 VAR_18->id.bustype = VAR_0;
 VAR_18->dev.parent = VAR_14;
 if (FUNC_6(VAR_14, "autorepeat"))
  FUNC_2(VAR_5, VAR_18->evbit);
 FUNC_13(VAR_18, VAR_4, VAR_10);

 VAR_18->keycode = VAR_17->keycodes;
 VAR_18->keycodesize = sizeof(VAR_17->keycodes[0]);
 VAR_18->keycodemax = VAR_17->keycount;

 for (VAR_20 = 0; VAR_20 < VAR_17->keycount; VAR_20++)
  FUNC_13(VAR_18, VAR_3, VAR_17->keycodes[VAR_20]);

 VAR_19 = FUNC_14(VAR_17, VAR_12, VAR_16);
 if (VAR_19) {
  FUNC_3(VAR_14, "Failed to init register\n");
  return VAR_19;
 }

 VAR_19 = FUNC_10(VAR_14, VAR_12->irq, ((void*)0),
       VAR_11,
       VAR_8 | VAR_7,
       VAR_14->driver->name, VAR_17);
 if (VAR_19) {
  FUNC_3(VAR_14, "Failed to register interrupt\n");
  return VAR_19;
 }

 VAR_19 = FUNC_12(VAR_18);
 if (VAR_19)
  return VAR_19;

 FUNC_11(VAR_12, VAR_17);
 FUNC_4(VAR_14,
   FUNC_6(VAR_14, "wakeup-source"));

 return 0;
}
