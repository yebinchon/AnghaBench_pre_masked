
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i2c_adapter*,int) ;

__attribute__((used)) static int FUNC_1(struct i2c_adapter *VAR_2, u16 VAR_3, u16 VAR_4,
      const u8 *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_0(VAR_2, VAR_3 << 1 |
         VAR_1 |
         VAR_0);
 if (VAR_6)
  return VAR_6;

 while (VAR_4--) {
  VAR_6 = FUNC_0(VAR_2,
          VAR_0 | *VAR_5++);
  if (VAR_6)
   return VAR_6;
 }

 return 0;
}
