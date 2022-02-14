
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32f7_i2c_dev {int * slave; struct device* dev; } ;
struct i2c_client {int flags; int addr; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*,int ) ;

__attribute__((used)) static int FUNC_1(struct stm32f7_i2c_dev *VAR_3,
      struct i2c_client *VAR_4, int *VAR_5)
{
 struct device *VAR_6 = VAR_3->dev;
 int VAR_7;





 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  if (VAR_7 == 1 && (VAR_4->flags & VAR_1))
   continue;
  if (!VAR_3->slave[VAR_7]) {
   *VAR_5 = VAR_7;
   return 0;
  }
 }

 FUNC_0(VAR_6, "Slave 0x%x could not be registered\n", VAR_4->addr);

 return -VAR_0;
}
