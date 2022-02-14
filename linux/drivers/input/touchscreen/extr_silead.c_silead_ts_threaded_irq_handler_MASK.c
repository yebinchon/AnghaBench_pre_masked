
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct silead_ts_data {struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_client*) ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_1, void *VAR_2)
{
 struct silead_ts_data *VAR_3 = VAR_2;
 struct i2c_client *VAR_4 = VAR_3->client;

 FUNC_0(VAR_4);

 return VAR_0;
}
