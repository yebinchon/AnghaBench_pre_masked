
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct i2c_client {int dummy; } ;
typedef int regval ;
typedef int __be16 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct i2c_client*,char*,int) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_1, u16 *VAR_2)
{
 __be16 VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_1, (char *)&VAR_3, sizeof(VAR_3));
 if (VAR_4 < 0)
  return VAR_4;
 if (VAR_4 != sizeof(VAR_3))
  return -VAR_0;

 *VAR_2 = FUNC_0(VAR_3);

 return 0;
}
