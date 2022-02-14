
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct coresight_device {int activated; } ;
typedef int ssize_t ;


 int FUNC_0 (char const*,int,unsigned long*) ;
 struct coresight_device* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
     struct device_attribute *VAR_1,
     const char *VAR_2, size_t VAR_3)
{
 int VAR_4;
 unsigned long VAR_5;
 struct coresight_device *VAR_6 = FUNC_1(VAR_0);

 VAR_4 = FUNC_0(VAR_2, 10, &VAR_5);
 if (VAR_4)
  return VAR_4;

 if (VAR_5)
  VAR_6->activated = 1;
 else
  VAR_6->activated = 0;

 return VAR_3;

}
