
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sx8654 {TYPE_1__* data; int timer; struct i2c_client* client; } ;
struct input_dev {int dummy; } ;
struct i2c_client {int dev; int irq; } ;
struct TYPE_2__ {int cmd_manual; int has_irq_penrelease; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct i2c_client*,int ) ;
 int FUNC_4 (struct i2c_client*,int ,int ) ;
 struct sx8654* FUNC_5 (struct input_dev*) ;

__attribute__((used)) static void FUNC_6(struct input_dev *VAR_2)
{
 struct sx8654 *VAR_3 = FUNC_5(VAR_2);
 struct i2c_client *VAR_4 = VAR_3->client;
 int VAR_5;

 FUNC_2(VAR_4->irq);

 if (!VAR_3->data->has_irq_penrelease)
  FUNC_0(&VAR_3->timer);


 VAR_5 = FUNC_3(VAR_4, VAR_3->data->cmd_manual);
 if (VAR_5) {
  FUNC_1(&VAR_4->dev, "writing command CMD_MANUAL failed");
  return;
 }

 VAR_5 = FUNC_4(VAR_4, VAR_0, VAR_1);
 if (VAR_5) {
  FUNC_1(&VAR_4->dev, "writing to I2C_REG_TOUCH0 failed");
  return;
 }
}
