
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct i2c_client {int dummy; } ;
typedef int ssize_t ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_client*,char const*,int) ;
 int FUNC_1 (int*,int *,int) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_1, u32 VAR_2, u8 *VAR_3)
{
 u32 VAR_4[3];
 ssize_t VAR_5;


 VAR_2 <<= 1;


 VAR_4[0] = VAR_2;
 FUNC_1(&VAR_4[1], &VAR_3[4], sizeof(u32));
 FUNC_1(&VAR_4[2], VAR_3, sizeof(u32));

 VAR_5 = FUNC_0(VAR_1, (const char *)VAR_4, sizeof(VAR_4));
 if (VAR_5 < 0)
  return VAR_5;
 else if (VAR_5 != sizeof(VAR_4))
  return -VAR_0;

 return 0;
}
