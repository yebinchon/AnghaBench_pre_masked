
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (struct i2c_client*,int ,int *) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_0, u32 VAR_1,
      u32 VAR_2, u32 VAR_3)
{
 u8 VAR_4[8];

 FUNC_0(VAR_4, &VAR_2, 4);
 FUNC_0(VAR_4 + 4, &VAR_3, 4);

 return FUNC_1(VAR_0, VAR_1, VAR_4);
}
