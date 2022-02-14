
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct atmel_i2c_client_priv {int tfm_count; } ;


 int FUNC_0 (int *) ;
 struct atmel_i2c_client_priv* FUNC_1 (struct i2c_client*) ;

__attribute__((used)) static void FUNC_2(struct i2c_client *VAR_0)
{
 struct atmel_i2c_client_priv *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(&VAR_1->tfm_count);
}
