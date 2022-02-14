
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_gmbus {int force_bit; } ;
struct i2c_adapter {int dummy; } ;


 struct intel_gmbus* FUNC_0 (struct i2c_adapter*) ;

bool FUNC_1(struct i2c_adapter *VAR_0)
{
 struct intel_gmbus *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->force_bit;
}
