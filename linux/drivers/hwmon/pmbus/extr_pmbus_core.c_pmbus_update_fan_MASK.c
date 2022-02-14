
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (struct i2c_client*,int,int ,int ) ;
 int * VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (struct i2c_client*,int,int ) ;
 int FUNC_2 (struct i2c_client*,int,int ,int) ;

int FUNC_3(struct i2c_client *VAR_2, int VAR_3, int VAR_4,
       u8 VAR_5, u8 VAR_6, u16 VAR_7)
{
 int VAR_8;
 int VAR_9;
 u8 VAR_10;

 VAR_8 = FUNC_1(VAR_2, VAR_3,
        VAR_1[VAR_4]);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_10 = (VAR_8 & ~VAR_6) | (VAR_5 & VAR_6);
 if (VAR_10 != VAR_8) {
  VAR_9 = FUNC_2(VAR_2, VAR_3,
        VAR_1[VAR_4], VAR_10);
  if (VAR_9 < 0)
   return VAR_9;
 }

 return FUNC_0(VAR_2, VAR_3,
          VAR_0[VAR_4], VAR_7);
}
