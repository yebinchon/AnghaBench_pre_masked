
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (struct i2c_client*,int,int*) ;
 int FUNC_1 (struct i2c_client*,int,int) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_0, u8 VAR_1, u8 VAR_2,
     u8 VAR_3)
{
 int VAR_4;
 u8 VAR_5;

 VAR_4 = FUNC_0(VAR_0, VAR_1, &VAR_5);
 if (VAR_4)
  return VAR_4;
 VAR_5 &= ~VAR_2;
 VAR_5 |= VAR_3 & VAR_2;
 return FUNC_1(VAR_0, VAR_1, VAR_5);
}
