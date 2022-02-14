
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct max11801_data {struct input_dev* input_dev; struct i2c_client* client; } ;
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
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,char*) ;
 struct input_dev* FUNC_2 (int *) ;
 struct max11801_data* FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *,int ,int *,int ,int,char*,struct max11801_data*) ;
 int FUNC_5 (struct input_dev*) ;
 int FUNC_6 (struct input_dev*,int ,int ,int ,int ,int ) ;
 int VAR_12 ;
 int FUNC_7 (struct max11801_data*) ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_13,
           const struct i2c_device_id *VAR_14)
{
 struct max11801_data *VAR_15;
 struct input_dev *VAR_16;
 int VAR_17;

 VAR_15 = FUNC_3(&VAR_13->dev, sizeof(*VAR_15), VAR_7);
 VAR_16 = FUNC_2(&VAR_13->dev);
 if (!VAR_15 || !VAR_16) {
  FUNC_1(&VAR_13->dev, "Failed to allocate memory\n");
  return -VAR_4;
 }

 VAR_15->client = VAR_13;
 VAR_15->input_dev = VAR_16;

 VAR_16->name = "max11801_ts";
 VAR_16->id.bustype = VAR_3;
 VAR_16->dev.parent = &VAR_13->dev;

 FUNC_0(VAR_5, VAR_16->evbit);
 FUNC_0(VAR_6, VAR_16->evbit);
 FUNC_0(VAR_2, VAR_16->keybit);
 FUNC_6(VAR_16, VAR_0, 0, VAR_10, 0, 0);
 FUNC_6(VAR_16, VAR_1, 0, VAR_11, 0, 0);

 FUNC_7(VAR_15);

 VAR_17 = FUNC_4(&VAR_13->dev, VAR_13->irq, ((void*)0),
       VAR_12,
       VAR_9 | VAR_8,
       "max11801_ts", VAR_15);
 if (VAR_17) {
  FUNC_1(&VAR_13->dev, "Failed to register interrupt\n");
  return VAR_17;
 }

 VAR_17 = FUNC_5(VAR_15->input_dev);
 if (VAR_17)
  return VAR_17;

 return 0;
}
