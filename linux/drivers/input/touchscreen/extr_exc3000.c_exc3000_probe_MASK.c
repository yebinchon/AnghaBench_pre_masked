
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bustype; } ;
struct input_dev {char* name; TYPE_1__ id; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int name; int irq; int dev; } ;
struct exc3000_data {int prop; struct input_dev* input; int timer; struct i2c_client* client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct input_dev* FUNC_0 (int *) ;
 struct exc3000_data* FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *,int ,int *,int ,int ,int ,struct exc3000_data*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (struct input_dev*,int ,int) ;
 int FUNC_4 (struct input_dev*) ;
 int FUNC_5 (struct input_dev*,int ,int ,int,int ,int ) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (struct input_dev*,int,int *) ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_11,
    const struct i2c_device_id *VAR_12)
{
 struct exc3000_data *VAR_13;
 struct input_dev *VAR_14;
 int VAR_15;

 VAR_13 = FUNC_1(&VAR_11->dev, sizeof(*VAR_13), VAR_5);
 if (!VAR_13)
  return -VAR_3;

 VAR_13->client = VAR_11;
 FUNC_6(&VAR_13->timer, VAR_10, 0);

 VAR_14 = FUNC_0(&VAR_11->dev);
 if (!VAR_14)
  return -VAR_3;

 VAR_13->input = VAR_14;

 VAR_14->name = "EETI EXC3000 Touch Screen";
 VAR_14->id.bustype = VAR_2;

 FUNC_5(VAR_14, VAR_0, 0, 4095, 0, 0);
 FUNC_5(VAR_14, VAR_1, 0, 4095, 0, 0);
 FUNC_7(VAR_14, 1, &VAR_13->prop);

 VAR_15 = FUNC_3(VAR_14, VAR_4,
        VAR_6 | VAR_7);
 if (VAR_15)
  return VAR_15;

 VAR_15 = FUNC_4(VAR_14);
 if (VAR_15)
  return VAR_15;

 VAR_15 = FUNC_2(&VAR_11->dev, VAR_11->irq,
       ((void*)0), VAR_9, VAR_8,
       VAR_11->name, VAR_13);
 if (VAR_15)
  return VAR_15;

 return 0;
}
