
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_device_id {int dummy; } ;
struct i2c_client {int irq; int dev; } ;
struct ad714x_chip {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ad714x_chip*) ;
 int FUNC_1 (struct ad714x_chip*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct ad714x_chip* FUNC_2 (int *,int ,int ,int ,int ) ;
 int FUNC_3 (struct i2c_client*,struct ad714x_chip*) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_3,
     const struct i2c_device_id *VAR_4)
{
 struct ad714x_chip *VAR_5;

 VAR_5 = FUNC_2(&VAR_3->dev, VAR_0, VAR_3->irq,
       VAR_1, VAR_2);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 FUNC_3(VAR_3, VAR_5);

 return 0;
}
