
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ltc2978_data {int dummy; } ;
struct i2c_client {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct i2c_client*,int,int) ;

__attribute__((used)) static int FUNC_2(struct ltc2978_data *VAR_0, struct i2c_client *VAR_1,
         int VAR_2, int VAR_3, u16 *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3);
 if (VAR_5 >= 0) {
  if (FUNC_0(VAR_5) > FUNC_0(*VAR_4))
   *VAR_4 = VAR_5;
  VAR_5 = *VAR_4;
 }
 return VAR_5;
}
