
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int adapter; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct i2c_client const*,int) ;
 int FUNC_2 (struct i2c_client const*,int,int,int*) ;
 int FUNC_3 (struct i2c_client const*,int) ;

s32 FUNC_4(const struct i2c_client *VAR_5,
           u8 VAR_6, u8 VAR_7, u8 *VAR_8)
{
 u8 VAR_9 = 0;
 int VAR_10;

 if (VAR_7 > VAR_4)
  VAR_7 = VAR_4;

 if (FUNC_0(VAR_5->adapter, VAR_2))
  return FUNC_2(VAR_5, VAR_6, VAR_7, VAR_8);

 if (!FUNC_0(VAR_5->adapter, VAR_1))
  return -VAR_0;

 if (FUNC_0(VAR_5->adapter, VAR_3)) {
  while ((VAR_9 + 2) <= VAR_7) {
   VAR_10 = FUNC_3(VAR_5, VAR_6 + VAR_9);
   if (VAR_10 < 0)
    return VAR_10;
   VAR_8[VAR_9] = VAR_10 & 0xff;
   VAR_8[VAR_9 + 1] = VAR_10 >> 8;
   VAR_9 += 2;
  }
 }

 while (VAR_9 < VAR_7) {
  VAR_10 = FUNC_1(VAR_5, VAR_6 + VAR_9);
  if (VAR_10 < 0)
   return VAR_10;
  VAR_8[VAR_9] = VAR_10;
  VAR_9++;
 }

 return VAR_9;
}
