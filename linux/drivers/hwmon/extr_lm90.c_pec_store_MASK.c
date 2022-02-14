
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int flags; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,int,long*) ;
 struct i2c_client* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_2, struct device_attribute *VAR_3,
    const char *VAR_4, size_t VAR_5)
{
 struct i2c_client *VAR_6 = FUNC_1(VAR_2);
 long VAR_7;
 int VAR_8;

 VAR_8 = FUNC_0(VAR_4, 10, &VAR_7);
 if (VAR_8 < 0)
  return VAR_8;

 switch (VAR_7) {
 case 0:
  VAR_6->flags &= ~VAR_1;
  break;
 case 1:
  VAR_6->flags |= VAR_1;
  break;
 default:
  return -VAR_0;
 }

 return VAR_5;
}
