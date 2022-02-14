
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * parent; } ;
struct TYPE_3__ {int bustype; } ;
struct input_dev {char* name; int propbit; int close; int open; TYPE_2__ dev; TYPE_1__ id; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; int irq; int adapter; } ;
struct ar1021_i2c {struct input_dev* input; struct i2c_client* client; } ;


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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (int *,char*,...) ;
 struct input_dev* FUNC_2 (int *) ;
 struct ar1021_i2c* FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *,int ,int *,int ,int ,char*,struct ar1021_i2c*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct input_dev*) ;
 int FUNC_8 (struct input_dev*,int ,int ,int ,int ,int ) ;
 int FUNC_9 (struct input_dev*,int ,int ) ;
 int FUNC_10 (struct input_dev*,struct ar1021_i2c*) ;

__attribute__((used)) static int FUNC_11(struct i2c_client *VAR_16,
       const struct i2c_device_id *VAR_17)
{
 struct ar1021_i2c *VAR_18;
 struct input_dev *VAR_19;
 int VAR_20;

 if (!FUNC_6(VAR_16->adapter, VAR_10)) {
  FUNC_1(&VAR_16->dev, "i2c_check_functionality error\n");
  return -VAR_7;
 }

 VAR_18 = FUNC_3(&VAR_16->dev, sizeof(*VAR_18), VAR_9);
 if (!VAR_18)
  return -VAR_6;

 VAR_19 = FUNC_2(&VAR_16->dev);
 if (!VAR_19)
  return -VAR_6;

 VAR_18->client = VAR_16;
 VAR_18->input = VAR_19;

 VAR_19->name = "ar1021 I2C Touchscreen";
 VAR_19->id.bustype = VAR_5;
 VAR_19->dev.parent = &VAR_16->dev;
 VAR_19->open = VAR_15;
 VAR_19->close = VAR_13;

 FUNC_0(VAR_11, VAR_19->propbit);
 FUNC_9(VAR_19, VAR_8, VAR_4);
 FUNC_8(VAR_19, VAR_0, 0, VAR_2, 0, 0);
 FUNC_8(VAR_19, VAR_1, 0, VAR_3, 0, 0);

 FUNC_10(VAR_19, VAR_18);

 VAR_20 = FUNC_4(&VAR_16->dev, VAR_16->irq,
       ((void*)0), VAR_14,
       VAR_12,
       "ar1021_i2c", VAR_18);
 if (VAR_20) {
  FUNC_1(&VAR_16->dev,
   "Failed to enable IRQ, error: %d\n", VAR_20);
  return VAR_20;
 }


 FUNC_5(VAR_16->irq);

 VAR_20 = FUNC_7(VAR_18->input);
 if (VAR_20) {
  FUNC_1(&VAR_16->dev,
   "Failed to register input device, error: %d\n", VAR_20);
  return VAR_20;
 }

 return 0;
}
