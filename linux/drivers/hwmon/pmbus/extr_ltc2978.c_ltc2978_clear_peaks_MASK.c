
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ltc2978_data {int dummy; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ltc2978_data*) ;
 int FUNC_1 (struct i2c_client*,int,int ) ;

__attribute__((used)) static int FUNC_2(struct ltc2978_data *VAR_2,
          struct i2c_client *VAR_3, int VAR_4)
{
 int VAR_5;

 if (FUNC_0(VAR_2))
  VAR_5 = FUNC_1(VAR_3, 0, VAR_0);
 else
  VAR_5 = FUNC_1(VAR_3, VAR_4, VAR_1);

 return VAR_5;
}
