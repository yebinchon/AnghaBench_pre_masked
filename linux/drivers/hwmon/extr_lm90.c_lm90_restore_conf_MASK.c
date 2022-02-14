
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm90_data {int config_orig; int convrate_orig; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_client*,int ,int ) ;
 int FUNC_1 (struct lm90_data*,int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_1)
{
 struct lm90_data *VAR_2 = VAR_1;
 struct i2c_client *VAR_3 = VAR_2->client;


 FUNC_1(VAR_2, VAR_2->convrate_orig);
 FUNC_0(VAR_3, VAR_0,
      VAR_2->config_orig);
}
