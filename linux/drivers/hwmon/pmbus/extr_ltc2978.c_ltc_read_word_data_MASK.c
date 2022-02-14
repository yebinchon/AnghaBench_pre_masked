
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;


 int FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct i2c_client*,int,int) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0);
 if (VAR_3 < 0)
  return VAR_3;

 return FUNC_1(VAR_0, VAR_1, VAR_2);
}
