
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct i2c_adapter {int dummy; } ;
struct dibx000_i2c_master {scalar_t__ device_rev; scalar_t__ base_reg; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct dibx000_i2c_master*,scalar_t__,int) ;
 struct dibx000_i2c_master* FUNC_1 (struct i2c_adapter*) ;

int FUNC_2(struct i2c_adapter *VAR_1, u16 VAR_2)
{
 struct dibx000_i2c_master *VAR_3 = FUNC_1(VAR_1);

 if (VAR_3->device_rev < VAR_0 && VAR_2 < 235)
  VAR_2 = 235;
 return FUNC_0(VAR_3, VAR_3->base_reg + 3, (u16)(60000 / VAR_2));

}
