
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct temperature {int degrees; int fraction; } ;
struct i2c_client {int dummy; } ;


 scalar_t__ FUNC_0 (struct i2c_client*,int,int*) ;

__attribute__((used)) static void FUNC_1(struct i2c_client *VAR_0, u8 VAR_1,
          struct temperature *VAR_2)
{
 u8 VAR_3, VAR_4;

 if (FUNC_0(VAR_0, VAR_1, &VAR_3) < 0)
  return;

 if (FUNC_0(VAR_0, VAR_1 + 1, &VAR_4) < 0)
  return;

 VAR_2->degrees = VAR_3;
 VAR_2->fraction = (VAR_4 & 0xe0) >> 5;
}
