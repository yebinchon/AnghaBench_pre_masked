
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dev; } ;
struct adp5588_gpio {struct i2c_client* client; } ;


 int FUNC_0 (int *,char*) ;

__attribute__((used)) static int FUNC_1(struct adp5588_gpio *VAR_0)
{
 struct i2c_client *VAR_1 = VAR_0->client;
 FUNC_0(&VAR_1->dev, "interrupt support not compiled in\n");

 return 0;
}
