
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_adapter*,int,int) ;

__attribute__((used)) static int
FUNC_1(struct i2c_adapter *VAR_1, u8 VAR_2, u8 VAR_3,
   u8 VAR_4, u8 VAR_5, u8 VAR_6, u8 VAR_7,
   u16 VAR_8)
{
 int VAR_9 = FUNC_0(VAR_1, VAR_2, VAR_3);
 int VAR_10 = FUNC_0(VAR_1, VAR_2, VAR_5);

 if (VAR_9 < 0 || VAR_10 < 0)
  return -VAR_0;

 VAR_9 >>= VAR_4;
 VAR_10 >>= VAR_6;

 return VAR_10 * VAR_9 * VAR_8 / VAR_7;
}
