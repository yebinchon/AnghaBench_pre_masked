
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (struct i2c_client*,unsigned int*,int) ;

__attribute__((used)) static int FUNC_1(struct i2c_client *VAR_0, unsigned VAR_1)
{
 u8 VAR_2[2] = { VAR_1 & 0xff, VAR_1 >> 8, };
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_2, 2);
 return (VAR_3 < 0) ? VAR_3 : 0;
}
