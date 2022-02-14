
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct i2c_client {int dummy; } ;
typedef int __be32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (struct i2c_client*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_0, u32 VAR_1,
     u8 *VAR_2)
{
 __be32 VAR_3, VAR_4;

 FUNC_1(&VAR_3, VAR_2, 4);
 FUNC_1(&VAR_4, VAR_2 + 4, 4);

 return FUNC_2(VAR_0, VAR_1, FUNC_0(VAR_3),
          FUNC_0(VAR_4));
}
