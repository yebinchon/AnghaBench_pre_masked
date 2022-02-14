
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcp3021_data {int dummy; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct mcp3021_data* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (char*,char*,int) ;
 struct i2c_client* FUNC_3 (struct device*) ;
 int FUNC_4 (struct mcp3021_data*,int) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_0,
         struct device_attribute *VAR_1, char *VAR_2)
{
 struct i2c_client *VAR_3 = FUNC_3(VAR_0);
 struct mcp3021_data *VAR_4 = FUNC_0(VAR_3);
 int VAR_5, VAR_6;

 VAR_5 = FUNC_1(VAR_3);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_6 = FUNC_4(VAR_4, VAR_5);

 return FUNC_2(VAR_2, "%d\n", VAR_6);
}
