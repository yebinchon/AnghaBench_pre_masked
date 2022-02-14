
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (struct i2c_client*,int,int) ;
 int FUNC_1 (struct i2c_client*,int,int,unsigned int) ;

int FUNC_2(struct i2c_client *VAR_0, int VAR_1, u8 VAR_2,
      u8 VAR_3, u8 VAR_4)
{
 unsigned int VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_2);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_5 = (VAR_6 & ~VAR_3) | (VAR_4 & VAR_3);

 if (VAR_5 != VAR_6)
  VAR_6 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_5);

 return VAR_6;
}
