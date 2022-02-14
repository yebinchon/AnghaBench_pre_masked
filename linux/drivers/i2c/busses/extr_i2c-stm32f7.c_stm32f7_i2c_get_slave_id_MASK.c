
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32f7_i2c_dev {int dev; struct i2c_client** slave; } ;
struct i2c_client {int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_1(struct stm32f7_i2c_dev *VAR_2,
        struct i2c_client *VAR_3, int *VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  if (VAR_2->slave[VAR_5] == VAR_3) {
   *VAR_4 = VAR_5;
   return 0;
  }
 }

 FUNC_0(VAR_2->dev, "Slave 0x%x not registered\n", VAR_3->addr);

 return -VAR_0;
}
