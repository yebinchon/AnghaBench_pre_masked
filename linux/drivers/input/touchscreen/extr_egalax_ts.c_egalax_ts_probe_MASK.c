
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bustype; } ;
struct input_dev {char* name; int keybit; int evbit; TYPE_1__ id; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; int irq; } ;
struct egalax_ts {struct input_dev* input_dev; struct i2c_client* client; } ;


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
 int VAR_14 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,char*) ;
 struct input_dev* FUNC_2 (int *) ;
 struct egalax_ts* FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *,int ,int *,int ,int,char*,struct egalax_ts*) ;
 int FUNC_5 (struct i2c_client*) ;
 int VAR_15 ;
 int FUNC_6 (struct i2c_client*) ;
 int FUNC_7 (struct input_dev*,int ,int ) ;
 int FUNC_8 (struct input_dev*) ;
 int FUNC_9 (struct input_dev*,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_10(struct i2c_client *VAR_16,
      const struct i2c_device_id *VAR_17)
{
 struct egalax_ts *VAR_18;
 struct input_dev *VAR_19;
 int VAR_20;

 VAR_18 = FUNC_3(&VAR_16->dev, sizeof(struct egalax_ts), VAR_11);
 if (!VAR_18) {
  FUNC_1(&VAR_16->dev, "Failed to allocate memory\n");
  return -VAR_8;
 }

 VAR_19 = FUNC_2(&VAR_16->dev);
 if (!VAR_19) {
  FUNC_1(&VAR_16->dev, "Failed to allocate memory\n");
  return -VAR_8;
 }

 VAR_18->client = VAR_16;
 VAR_18->input_dev = VAR_19;


 VAR_20 = FUNC_6(VAR_16);
 if (VAR_20) {
  FUNC_1(&VAR_16->dev, "Failed to wake up the controller\n");
  return VAR_20;
 }

 VAR_20 = FUNC_5(VAR_16);
 if (VAR_20 < 0) {
  FUNC_1(&VAR_16->dev, "Failed to read firmware version\n");
  return VAR_20;
 }

 VAR_19->name = "EETI eGalax Touch Screen";
 VAR_19->id.bustype = VAR_5;

 FUNC_0(VAR_9, VAR_19->evbit);
 FUNC_0(VAR_10, VAR_19->evbit);
 FUNC_0(VAR_4, VAR_19->keybit);

 FUNC_9(VAR_19, VAR_2, 0, VAR_6, 0, 0);
 FUNC_9(VAR_19, VAR_3, 0, VAR_7, 0, 0);
 FUNC_9(VAR_19,
        VAR_0, 0, VAR_6, 0, 0);
 FUNC_9(VAR_19,
        VAR_1, 0, VAR_7, 0, 0);
 FUNC_7(VAR_19, VAR_14, 0);

 VAR_20 = FUNC_4(&VAR_16->dev, VAR_16->irq, ((void*)0),
       VAR_15,
       VAR_13 | VAR_12,
       "egalax_ts", VAR_18);
 if (VAR_20 < 0) {
  FUNC_1(&VAR_16->dev, "Failed to register interrupt\n");
  return VAR_20;
 }

 VAR_20 = FUNC_8(VAR_18->input_dev);
 if (VAR_20)
  return VAR_20;

 return 0;
}
