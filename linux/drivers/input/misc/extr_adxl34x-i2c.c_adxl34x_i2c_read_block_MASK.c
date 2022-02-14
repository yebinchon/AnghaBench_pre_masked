
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_client*,void*,int) ;
 int FUNC_1 (struct i2c_client*,unsigned char*,int) ;
 struct i2c_client* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_1,
      unsigned char VAR_2, int VAR_3,
      void *VAR_4)
{
 struct i2c_client *VAR_5 = FUNC_2(VAR_1);
 int VAR_6;

 VAR_6 = FUNC_1(VAR_5, &VAR_2, 1);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_6 = FUNC_0(VAR_5, VAR_4, VAR_3);
 if (VAR_6 < 0)
  return VAR_6;

 if (VAR_6 != VAR_3)
  return -VAR_0;

 return 0;
}
