
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,char*) ;

__attribute__((used)) static ssize_t FUNC_1(struct device *VAR_2,
     struct device_attribute *VAR_3,
     const char *VAR_4, size_t VAR_5)
{
 if (FUNC_0(VAR_4, "online"))
  VAR_1 = 1;
 else if (FUNC_0(VAR_4, "offline"))
  VAR_1 = 0;
 else
  return -VAR_0;

 return VAR_5;
}
