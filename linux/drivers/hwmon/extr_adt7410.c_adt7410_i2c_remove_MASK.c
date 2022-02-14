
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int irq; int dev; } ;


 int FUNC_0 (int *,int ) ;

__attribute__((used)) static int FUNC_1(struct i2c_client *VAR_0)
{
 return FUNC_0(&VAR_0->dev, VAR_0->irq);
}
