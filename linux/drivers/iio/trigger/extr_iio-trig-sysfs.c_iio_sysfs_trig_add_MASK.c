
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (char const*,int,unsigned long*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
      struct device_attribute *VAR_1,
      const char *VAR_2,
      size_t VAR_3)
{
 int VAR_4;
 unsigned long VAR_5;

 VAR_4 = FUNC_1(VAR_2, 10, &VAR_5);
 if (VAR_4)
  return VAR_4;
 VAR_4 = FUNC_0(VAR_5);
 if (VAR_4)
  return VAR_4;
 return VAR_3;
}
