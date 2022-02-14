
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dummy; } ;
struct i2c_client {int irq; } ;
struct ar1021_i2c {struct i2c_client* client; } ;


 int FUNC_0 (int ) ;
 struct ar1021_i2c* FUNC_1 (struct input_dev*) ;

__attribute__((used)) static void FUNC_2(struct input_dev *VAR_0)
{
 struct ar1021_i2c *VAR_1 = FUNC_1(VAR_0);
 struct i2c_client *VAR_2 = VAR_1->client;

 FUNC_0(VAR_2->irq);
}
