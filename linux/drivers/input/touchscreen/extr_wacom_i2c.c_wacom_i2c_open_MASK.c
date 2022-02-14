
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wacom_i2c {struct i2c_client* client; } ;
struct input_dev {int dummy; } ;
struct i2c_client {int irq; } ;


 int FUNC_0 (int ) ;
 struct wacom_i2c* FUNC_1 (struct input_dev*) ;

__attribute__((used)) static int FUNC_2(struct input_dev *VAR_0)
{
 struct wacom_i2c *VAR_1 = FUNC_1(VAR_0);
 struct i2c_client *VAR_2 = VAR_1->client;

 FUNC_0(VAR_2->irq);

 return 0;
}
