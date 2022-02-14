
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct f75375_data {scalar_t__ kind; int * pwm; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct i2c_client*,int ,int ) ;
 int FUNC_3 (struct i2c_client*,int ,int ) ;
 scalar_t__ VAR_0 ;
 struct f75375_data* FUNC_4 (struct i2c_client*) ;

__attribute__((used)) static void FUNC_5(struct i2c_client *VAR_1, int VAR_2)
{
 struct f75375_data *VAR_3 = FUNC_4(VAR_1);
 if (VAR_3->kind == VAR_0)
  FUNC_2(VAR_1, FUNC_0(VAR_2), VAR_3->pwm[VAR_2]);
 else
  FUNC_3(VAR_1, FUNC_1(VAR_2),
         VAR_3->pwm[VAR_2]);
}
