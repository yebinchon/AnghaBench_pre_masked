
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (struct i2c_client*,int,int) ;
 int FUNC_1 (struct i2c_client*,int) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_0,
     int VAR_1, int VAR_2, u8 VAR_3, u8 VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(VAR_0, VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_5 = (VAR_5 & ~VAR_3) | ((VAR_1 << VAR_2) & VAR_3);
 return FUNC_0(VAR_0, VAR_4, VAR_5);
}
