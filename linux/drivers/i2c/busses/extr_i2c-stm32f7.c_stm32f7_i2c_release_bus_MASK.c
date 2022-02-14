
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32f7_i2c_dev {scalar_t__ base; int dev; } ;
struct i2c_adapter {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 struct stm32f7_i2c_dev* FUNC_1 (struct i2c_adapter*) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (struct stm32f7_i2c_dev*) ;

__attribute__((used)) static int FUNC_4(struct i2c_adapter *VAR_2)
{
 struct stm32f7_i2c_dev *VAR_3 = FUNC_1(VAR_2);

 FUNC_0(VAR_3->dev, "Trying to recover bus\n");

 FUNC_2(VAR_3->base + VAR_0,
        VAR_1);

 FUNC_3(VAR_3);

 return 0;
}
