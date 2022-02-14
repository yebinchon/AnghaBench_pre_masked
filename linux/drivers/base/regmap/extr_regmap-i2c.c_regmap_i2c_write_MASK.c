
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_client*,void const*,size_t) ;
 struct i2c_client* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(void *VAR_1, const void *VAR_2, size_t VAR_3)
{
 struct device *VAR_4 = VAR_1;
 struct i2c_client *VAR_5 = FUNC_1(VAR_4);
 int VAR_6;

 VAR_6 = FUNC_0(VAR_5, VAR_2, VAR_3);
 if (VAR_6 == VAR_3)
  return 0;
 else if (VAR_6 < 0)
  return VAR_6;
 else
  return -VAR_0;
}
