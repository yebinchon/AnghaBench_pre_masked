
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sx8654 {struct i2c_client* client; } ;
struct input_dev {int dummy; } ;
struct i2c_client {int irq; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (struct i2c_client*,int ,int) ;
 struct sx8654* FUNC_4 (struct input_dev*) ;

__attribute__((used)) static int FUNC_5(struct input_dev *VAR_4)
{
 struct sx8654 *VAR_5 = FUNC_4(VAR_4);
 struct i2c_client *VAR_6 = VAR_5->client;
 int VAR_7;


 VAR_7 = FUNC_3(VAR_6, VAR_1,
       VAR_3 | VAR_2);
 if (VAR_7) {
  FUNC_0(&VAR_6->dev, "writing to I2C_REG_TOUCH0 failed");
  return VAR_7;
 }

 VAR_7 = FUNC_2(VAR_6, VAR_0);
 if (VAR_7) {
  FUNC_0(&VAR_6->dev, "writing command CMD_PENTRG failed");
  return VAR_7;
 }

 FUNC_1(VAR_6->irq);

 return 0;
}
