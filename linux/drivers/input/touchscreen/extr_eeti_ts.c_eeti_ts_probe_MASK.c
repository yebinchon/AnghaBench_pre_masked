
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bustype; } ;
struct input_dev {int close; int open; TYPE_1__ id; int name; } ;
struct i2c_device_id {int dummy; } ;
struct device {int dummy; } ;
struct i2c_client {int name; int irq; struct device dev; } ;
struct eeti_ts {int attn_gpio; struct input_dev* input; struct i2c_client* client; int props; int mutex; } ;


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
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (struct device*,char*,int ) ;
 struct input_dev* FUNC_4 (struct device*) ;
 struct eeti_ts* FUNC_5 (struct device*,int,int ) ;
 int FUNC_6 (struct device*,int ,int *,int ,int ,int ,struct eeti_ts*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_7 (struct eeti_ts*) ;
 int FUNC_8 (struct i2c_client*,struct eeti_ts*) ;
 int FUNC_9 (struct input_dev*) ;
 int FUNC_10 (struct input_dev*,int ,int ,int,int ,int ) ;
 int FUNC_11 (struct input_dev*,int ,int ) ;
 int FUNC_12 (struct input_dev*,struct eeti_ts*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct input_dev*,int,int *) ;

__attribute__((used)) static int FUNC_15(struct i2c_client *VAR_14,
    const struct i2c_device_id *VAR_15)
{
 struct device *VAR_16 = &VAR_14->dev;
 struct eeti_ts *VAR_17;
 struct input_dev *VAR_18;
 int VAR_19;
 VAR_17 = FUNC_5(VAR_16, sizeof(*VAR_17), VAR_8);
 if (!VAR_17) {
  FUNC_2(VAR_16, "failed to allocate driver data\n");
  return -VAR_6;
 }

 FUNC_13(&VAR_17->mutex);

 VAR_18 = FUNC_4(VAR_16);
 if (!VAR_18) {
  FUNC_2(VAR_16, "Failed to allocate input device.\n");
  return -VAR_6;
 }

 FUNC_11(VAR_18, VAR_7, VAR_3);

 FUNC_10(VAR_18, VAR_1, 0, VAR_5, 0, 0);
 FUNC_10(VAR_18, VAR_2, 0, VAR_5, 0, 0);
 FUNC_10(VAR_18, VAR_0, 0, 0xff, 0, 0);

 FUNC_14(VAR_18, 0, &VAR_17->props);

 VAR_18->name = VAR_14->name;
 VAR_18->id.bustype = VAR_4;
 VAR_18->open = VAR_13;
 VAR_18->close = VAR_11;

 VAR_17->client = VAR_14;
 VAR_17->input = VAR_18;

 VAR_17->attn_gpio = FUNC_3(VAR_16, "attn", VAR_9);
 if (FUNC_0(VAR_17->attn_gpio))
  return FUNC_1(VAR_17->attn_gpio);

 FUNC_8(VAR_14, VAR_17);
 FUNC_12(VAR_18, VAR_17);

 VAR_19 = FUNC_6(VAR_16, VAR_14->irq,
       ((void*)0), VAR_12,
       VAR_10,
       VAR_14->name, VAR_17);
 if (VAR_19) {
  FUNC_2(VAR_16, "Unable to request touchscreen IRQ: %d\n",
   VAR_19);
  return VAR_19;
 }





 FUNC_7(VAR_17);

 VAR_19 = FUNC_9(VAR_18);
 if (VAR_19)
  return VAR_19;

 return 0;
}
