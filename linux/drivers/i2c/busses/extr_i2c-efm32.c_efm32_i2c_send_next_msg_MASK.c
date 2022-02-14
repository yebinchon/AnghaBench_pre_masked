
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {int dummy; } ;
struct efm32_i2c_ddata {size_t current_msg; struct i2c_msg* msgs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct efm32_i2c_ddata*,int ,int ) ;
 int FUNC_1 (struct i2c_msg*) ;

__attribute__((used)) static void FUNC_2(struct efm32_i2c_ddata *VAR_3)
{
 struct i2c_msg *VAR_4 = &VAR_3->msgs[VAR_3->current_msg];

 FUNC_0(VAR_3, VAR_0, VAR_1);
 FUNC_0(VAR_3, VAR_2, FUNC_1(VAR_4));
}
