
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dummy; } ;
typedef int s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct i2c_client*,int ,int,int *) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static s32 FUNC_2(struct i2c_client *VAR_4, u8 VAR_5)
{
 s32 VAR_6;
 int VAR_7;


 for (VAR_7 = 0, VAR_6 = -1; VAR_7 < VAR_2 && VAR_6 < 0; VAR_7++) {
  VAR_6 = FUNC_0(VAR_4, VAR_3, 1, &VAR_5);
  if (VAR_6 < 0)
   FUNC_1(VAR_0, VAR_0
         + VAR_1);
 }
 return VAR_6;
}
