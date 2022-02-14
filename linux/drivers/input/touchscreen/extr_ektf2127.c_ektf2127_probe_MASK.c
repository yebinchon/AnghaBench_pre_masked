
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int bustype; } ;
struct input_dev {int (* close ) (struct input_dev*) ;int open; TYPE_1__ id; int name; } ;
struct i2c_device_id {int dummy; } ;
struct device {int dummy; } ;
struct i2c_client {int name; int irq; struct device dev; } ;
struct ektf2127_ts {struct input_dev* input; int prop; struct i2c_client* client; int power_gpios; } ;
typedef int buf ;


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
 struct ektf2127_ts* FUNC_5 (struct device*,int,int ) ;
 int FUNC_6 (struct device*,int ,int *,int ,int ,int ,struct ektf2127_ts*) ;
 int VAR_13 ;
 int FUNC_7 (struct i2c_client*,int) ;
 int VAR_14 ;
 int FUNC_8 (struct input_dev*) ;
 int FUNC_9 (struct i2c_client*,int *,int) ;
 int FUNC_10 (struct i2c_client*,struct ektf2127_ts*) ;
 int FUNC_11 (struct input_dev*,int ,int) ;
 int FUNC_12 (struct input_dev*) ;
 int FUNC_13 (struct input_dev*,int ,int ,int,int ,int ) ;
 int FUNC_14 (struct input_dev*,struct ektf2127_ts*) ;
 int FUNC_15 (int) ;
 int FUNC_16 (struct input_dev*,int,int *) ;

__attribute__((used)) static int FUNC_17(struct i2c_client *VAR_15,
     const struct i2c_device_id *VAR_16)
{
 struct device *VAR_17 = &VAR_15->dev;
 struct ektf2127_ts *VAR_18;
 struct input_dev *VAR_19;
 u8 VAR_20[4];
 int VAR_21, VAR_22;
 int VAR_23;

 if (!VAR_15->irq) {
  FUNC_2(VAR_17, "Error no irq specified\n");
  return -VAR_3;
 }

 VAR_18 = FUNC_5(VAR_17, sizeof(*VAR_18), VAR_7);
 if (!VAR_18)
  return -VAR_5;


 VAR_18->power_gpios = FUNC_3(VAR_17, "power", VAR_8);
 if (FUNC_0(VAR_18->power_gpios)) {
  VAR_23 = FUNC_1(VAR_18->power_gpios);
  if (VAR_23 != -VAR_6)
   FUNC_2(VAR_17, "Error getting power gpio: %d\n", VAR_23);
  return VAR_23;
 }

 VAR_19 = FUNC_4(VAR_17);
 if (!VAR_19)
  return -VAR_5;

 VAR_19->name = VAR_15->name;
 VAR_19->id.bustype = VAR_2;
 VAR_19->open = VAR_14;
 VAR_19->close = FUNC_8;

 VAR_18->client = VAR_15;


 FUNC_15(20);
 FUNC_9(VAR_18->client, VAR_20, sizeof(VAR_20));


 VAR_21 = FUNC_7(VAR_15, 1);
 if (VAR_21 < 0)
  return VAR_21;

 VAR_22 = FUNC_7(VAR_15, 0);
 if (VAR_22 < 0)
  return VAR_22;

 FUNC_13(VAR_19, VAR_0, 0, VAR_21, 0, 0);
 FUNC_13(VAR_19, VAR_1, 0, VAR_22, 0, 0);
 FUNC_16(VAR_19, 1, &VAR_18->prop);

 VAR_23 = FUNC_11(VAR_19, VAR_4,
        VAR_9 |
     VAR_10 |
     VAR_11);
 if (VAR_23)
  return VAR_23;

 VAR_18->input = VAR_19;
 FUNC_14(VAR_19, VAR_18);

 VAR_23 = FUNC_6(VAR_17, VAR_15->irq,
       ((void*)0), VAR_13,
       VAR_12, VAR_15->name, VAR_18);
 if (VAR_23) {
  FUNC_2(VAR_17, "Error requesting irq: %d\n", VAR_23);
  return VAR_23;
 }


 FUNC_8(VAR_18->input);

 VAR_23 = FUNC_12(VAR_19);
 if (VAR_23)
  return VAR_23;

 FUNC_10(VAR_15, VAR_18);

 return 0;
}
