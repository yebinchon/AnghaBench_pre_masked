
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iqs5xx_private {int reset_gpio; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (int ,int) ;
 struct iqs5xx_private* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void FUNC_3(struct i2c_client *VAR_0)
{
 struct iqs5xx_private *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->reset_gpio, 1);
 FUNC_2(200, 300);

 FUNC_0(VAR_1->reset_gpio, 0);
}
