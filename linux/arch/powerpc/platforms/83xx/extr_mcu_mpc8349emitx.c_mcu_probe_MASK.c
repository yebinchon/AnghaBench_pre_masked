
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcu {int reg_ctrl; struct i2c_client* client; int lock; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 struct mcu* VAR_4 ;
 int FUNC_3 (struct i2c_client*,struct mcu*) ;
 int FUNC_4 (struct i2c_client*,int ) ;
 int FUNC_5 (struct mcu*) ;
 int FUNC_6 (int ,int *,char*) ;
 struct mcu* FUNC_7 (int,int ) ;
 int FUNC_8 (struct mcu*) ;
 scalar_t__ VAR_5 ;
 int FUNC_9 (int *) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_10(struct i2c_client *VAR_9, const struct i2c_device_id *VAR_10)
{
 struct mcu *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_7(sizeof(*VAR_11), VAR_1);
 if (!VAR_11)
  return -VAR_0;

 FUNC_9(&VAR_11->lock);
 VAR_11->client = VAR_9;
 FUNC_3(VAR_9, VAR_11);

 VAR_12 = FUNC_4(VAR_11->client, VAR_2);
 if (VAR_12 < 0)
  goto err;
 VAR_11->reg_ctrl = VAR_12;

 VAR_12 = FUNC_8(VAR_11);
 if (VAR_12)
  goto err;


 if (!VAR_6) {
  VAR_4 = VAR_11;
  VAR_6 = VAR_5;
  FUNC_1(&VAR_9->dev, "will provide power-off service\n");
 }

 if (FUNC_2(&VAR_9->dev, &VAR_3))
  FUNC_0(&VAR_9->dev,
   "couldn't create device file for status\n");

 VAR_7 = FUNC_6(VAR_8, ((void*)0),
          "mcu-i2c-shdn");

 return 0;
err:
 FUNC_5(VAR_11);
 return VAR_12;
}
