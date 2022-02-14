
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct i2c_client {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_client*,int,int) ;

__attribute__((used)) static s32 FUNC_1(struct i2c_client *VAR_1, u16 VAR_2, u8 VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_0, VAR_2 >> 8);
 if (VAR_4 == 0)
  VAR_4 = FUNC_0(VAR_1, VAR_2 & 0xff, VAR_3);

 return VAR_4;
}
