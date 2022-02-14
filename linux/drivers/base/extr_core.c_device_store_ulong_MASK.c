
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct dev_ext_attribute {scalar_t__ var; } ;
typedef int ssize_t ;


 int FUNC_0 (char const*,int ,unsigned long*) ;
 struct dev_ext_attribute* FUNC_1 (struct device_attribute*) ;

ssize_t FUNC_2(struct device *VAR_0,
      struct device_attribute *VAR_1,
      const char *VAR_2, size_t VAR_3)
{
 struct dev_ext_attribute *VAR_4 = FUNC_1(VAR_1);
 int VAR_5;
 unsigned long VAR_6;

 VAR_5 = FUNC_0(VAR_2, 0, &VAR_6);
 if (VAR_5)
  return VAR_5;
 *(unsigned long *)(VAR_4->var) = VAR_6;

 return VAR_3;
}
