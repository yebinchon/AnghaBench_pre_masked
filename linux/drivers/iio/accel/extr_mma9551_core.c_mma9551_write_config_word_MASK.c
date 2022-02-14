
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct i2c_client {int dummy; } ;
typedef int __be16 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct i2c_client*,int ,int ,int ,int *,int,int *,int ) ;

int FUNC_2(struct i2c_client *VAR_1, u8 VAR_2,
         u16 VAR_3, u16 VAR_4)
{
 __be16 VAR_5 = FUNC_0(VAR_4);

 return FUNC_1(VAR_1, VAR_2, VAR_0, VAR_3,
    (u8 *)&VAR_5, 2, ((void*)0), 0);
}
