
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct dev_ext_attribute {int var; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (char const*,int ) ;
 struct dev_ext_attribute* FUNC_1 (struct device_attribute*) ;

ssize_t FUNC_2(struct device *VAR_1, struct device_attribute *VAR_2,
     const char *VAR_3, size_t VAR_4)
{
 struct dev_ext_attribute *VAR_5 = FUNC_1(VAR_2);

 if (FUNC_0(VAR_3, VAR_5->var) < 0)
  return -VAR_0;

 return VAR_4;
}
