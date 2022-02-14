
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm87_data {int config; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 struct lm87_data* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct i2c_client*,int ,int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_1)
{
 struct i2c_client *VAR_2 = VAR_1;
 struct lm87_data *VAR_3 = FUNC_0(VAR_2);

 FUNC_1(VAR_2, VAR_0, VAR_3->config);
}
