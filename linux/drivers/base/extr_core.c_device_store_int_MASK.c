
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct dev_ext_attribute {scalar_t__ var; } ;
typedef int ssize_t ;


 int VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 int FUNC_0 (char const*,int ,long*) ;
 struct dev_ext_attribute* FUNC_1 (struct device_attribute*) ;

ssize_t FUNC_2(struct device *VAR_3,
    struct device_attribute *VAR_4,
    const char *VAR_5, size_t VAR_6)
{
 struct dev_ext_attribute *VAR_7 = FUNC_1(VAR_4);
 int VAR_8;
 long VAR_9;

 VAR_8 = FUNC_0(VAR_5, 0, &VAR_9);
 if (VAR_8)
  return VAR_8;

 if (VAR_9 > VAR_1 || VAR_9 < VAR_2)
  return -VAR_0;
 *(int *)(VAR_7->var) = VAR_9;

 return VAR_6;
}
