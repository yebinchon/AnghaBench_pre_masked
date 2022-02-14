
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct i2c_client {int dummy; } ;
struct i2c_adapter {int dummy; } ;


 scalar_t__ FUNC_0 (struct i2c_client*) ;
 struct i2c_client* FUNC_1 (struct i2c_adapter*,int ) ;

struct i2c_client *FUNC_2(struct i2c_adapter *VAR_0, u16 VAR_1)
{
 struct i2c_client *VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 return FUNC_0(VAR_2) ? ((void*)0) : VAR_2;
}
