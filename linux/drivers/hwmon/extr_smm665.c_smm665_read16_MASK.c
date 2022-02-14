
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;


 int FUNC_0 (struct i2c_client*,int) ;

__attribute__((used)) static int FUNC_1(struct i2c_client *VAR_0, int VAR_1)
{
 int VAR_2, VAR_3;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2 < 0)
  return VAR_2;
 VAR_3 = VAR_2 << 8;
 VAR_2 = FUNC_0(VAR_0, VAR_1 + 1);
 if (VAR_2 < 0)
  return VAR_2;
 VAR_3 |= VAR_2;
 return VAR_3;
}
