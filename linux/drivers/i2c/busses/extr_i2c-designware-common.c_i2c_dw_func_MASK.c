
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i2c_adapter {int dummy; } ;
struct dw_i2c_dev {int functionality; } ;


 struct dw_i2c_dev* FUNC_0 (struct i2c_adapter*) ;

u32 FUNC_1(struct i2c_adapter *VAR_0)
{
 struct dw_i2c_dev *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->functionality;
}
