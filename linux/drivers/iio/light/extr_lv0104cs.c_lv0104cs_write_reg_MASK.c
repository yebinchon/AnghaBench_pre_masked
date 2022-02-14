
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dummy; } ;
typedef int regval ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_client*,char*,int) ;

__attribute__((used)) static int FUNC_1(struct i2c_client *VAR_1, u8 VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1, (char *)&VAR_2, sizeof(VAR_2));
 if (VAR_3 < 0)
  return VAR_3;
 if (VAR_3 != sizeof(VAR_2))
  return -VAR_0;

 return 0;
}
