
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int name; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct device*,char*,scalar_t__) ;
 int FUNC_1 (struct device*,char*,scalar_t__) ;
 int FUNC_2 (char*,char*,char*,int ) ;
 struct i2c_client* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_3, struct device_attribute *VAR_4, char *VAR_5)
{
 struct i2c_client *VAR_6 = FUNC_3(VAR_3);
 int VAR_7;

 VAR_7 = FUNC_1(VAR_3, VAR_5, VAR_2);
 if (VAR_7 != -VAR_0)
  return VAR_7;

 VAR_7 = FUNC_0(VAR_3, VAR_5, VAR_2 -1);
 if (VAR_7 != -VAR_0)
  return VAR_7;

 return FUNC_2(VAR_5, "%s%s\n", VAR_1, VAR_6->name);
}
