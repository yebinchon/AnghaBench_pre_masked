
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct i2c_adapter*,int ) ;

__attribute__((used)) static u32 FUNC_1(struct i2c_adapter *VAR_4)
{
 if (FUNC_0(VAR_4, VAR_0))
  return VAR_1 |
   (VAR_2 & ~VAR_3);
 else
  return VAR_1 | VAR_2;
}
