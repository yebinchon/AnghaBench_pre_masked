
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_hid {int dummy; } ;
struct i2c_client {int irq; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct i2c_hid*) ;
 struct i2c_hid* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct i2c_client*,int ) ;

__attribute__((used)) static void FUNC_3(struct i2c_client *VAR_1)
{
 struct i2c_hid *VAR_2 = FUNC_1(VAR_1);

 FUNC_2(VAR_1, VAR_0);
 FUNC_0(VAR_1->irq, VAR_2);
}
