
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_adapter {int dummy; } ;
struct axxia_i2c_dev {scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct axxia_i2c_dev* FUNC_0 (struct i2c_adapter*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct i2c_adapter *VAR_2)
{
 struct axxia_i2c_dev *VAR_3 = FUNC_0(VAR_2);

 return !!(FUNC_1(VAR_3->base + VAR_1) & VAR_0);
}
