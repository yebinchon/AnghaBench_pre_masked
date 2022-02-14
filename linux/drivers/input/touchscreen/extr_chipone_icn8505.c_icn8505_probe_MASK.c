
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bustype; } ;
struct input_dev {TYPE_1__ id; int name; } ;
struct icn8505_data {int prop; struct input_dev* input; struct i2c_client* client; } ;
struct device {int dummy; } ;
struct i2c_client {int name; int irq; struct device dev; } ;
typedef int resolution ;
typedef int __le16 ;


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
 int FUNC_0 (struct device*,char*,...) ;
 struct input_dev* FUNC_1 (struct device*) ;
 struct icn8505_data* FUNC_2 (struct device*,int,int ) ;
 int FUNC_3 (struct device*,int ,int *,int ,int ,int ,struct icn8505_data*) ;
 int FUNC_4 (struct i2c_client*,struct icn8505_data*) ;
 int VAR_14 ;
 int FUNC_5 (struct icn8505_data*,struct device*) ;
 int FUNC_6 (struct icn8505_data*,int ,int *,int) ;
 int FUNC_7 (struct icn8505_data*) ;
 int FUNC_8 (struct input_dev*,int ) ;
 int FUNC_9 (struct input_dev*,int ,int) ;
 int FUNC_10 (struct input_dev*) ;
 int FUNC_11 (struct input_dev*,int ,int ,scalar_t__,int ,int ) ;
 int FUNC_12 (struct input_dev*,int ,int ) ;
 int FUNC_13 (struct input_dev*,struct icn8505_data*) ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (struct input_dev*,int,int *) ;

__attribute__((used)) static int FUNC_16(struct i2c_client *VAR_15)
{
 struct device *VAR_16 = &VAR_15->dev;
 struct icn8505_data *VAR_17;
 struct input_dev *VAR_18;
 __le16 VAR_19[2];
 int VAR_20;

 if (!VAR_15->irq) {
  FUNC_0(VAR_16, "No irq specified\n");
  return -VAR_3;
 }

 VAR_17 = FUNC_2(VAR_16, sizeof(*VAR_17), VAR_7);
 if (!VAR_17)
  return -VAR_4;

 VAR_18 = FUNC_1(VAR_16);
 if (!VAR_18)
  return -VAR_4;

 VAR_18->name = VAR_15->name;
 VAR_18->id.bustype = VAR_2;

 FUNC_12(VAR_18, VAR_5, VAR_0);
 FUNC_12(VAR_18, VAR_5, VAR_1);
 FUNC_12(VAR_18, VAR_6, VAR_13);

 VAR_17->client = VAR_15;
 VAR_17->input = VAR_18;
 FUNC_13(VAR_18, VAR_17);

 VAR_20 = FUNC_5(VAR_17, VAR_16);
 if (VAR_20)
  return VAR_20;

 VAR_20 = FUNC_7(VAR_17);
 if (VAR_20)
  return VAR_20;

 VAR_20 = FUNC_6(VAR_17, VAR_9,
    VAR_19, sizeof(VAR_19));
 if (VAR_20) {
  FUNC_0(VAR_16, "Error reading resolution: %d\n", VAR_20);
  return VAR_20;
 }

 FUNC_11(VAR_18, VAR_0, 0,
        FUNC_14(VAR_19[0]) - 1, 0, 0);
 FUNC_11(VAR_18, VAR_1, 0,
        FUNC_14(VAR_19[1]) - 1, 0, 0);

 FUNC_15(VAR_18, 1, &VAR_17->prop);
 if (!FUNC_8(VAR_18, VAR_0) ||
     !FUNC_8(VAR_18, VAR_1)) {
  FUNC_0(VAR_16, "Error touchscreen-size-x and/or -y missing\n");
  return -VAR_3;
 }

 VAR_20 = FUNC_9(VAR_18, VAR_8,
      VAR_10 | VAR_11);
 if (VAR_20)
  return VAR_20;

 VAR_20 = FUNC_3(VAR_16, VAR_15->irq, ((void*)0), VAR_14,
     VAR_12, VAR_15->name, VAR_17);
 if (VAR_20) {
  FUNC_0(VAR_16, "Error requesting irq: %d\n", VAR_20);
  return VAR_20;
 }

 VAR_20 = FUNC_10(VAR_18);
 if (VAR_20)
  return VAR_20;

 FUNC_4(VAR_15, VAR_17);
 return 0;
}
