
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union i2c_smbus_data {int * block; } ;
typedef int u8 ;
struct i2c_client {int flags; int addr; int adapter; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int ,union i2c_smbus_data*) ;
 int FUNC_1 (int *,int const*,int ) ;

s32 FUNC_2(const struct i2c_client *VAR_3, u8 VAR_4,
       u8 VAR_5, const u8 *VAR_6)
{
 union i2c_smbus_data VAR_7;

 if (VAR_5 > VAR_0)
  VAR_5 = VAR_0;
 VAR_7.block[0] = VAR_5;
 FUNC_1(VAR_7.block + 1, VAR_6, VAR_5);
 return FUNC_0(VAR_3->adapter, VAR_3->addr, VAR_3->flags,
         VAR_2, VAR_4,
         VAR_1, &VAR_7);
}
