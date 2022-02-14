
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (char const*,char*,unsigned int*) ;

__attribute__((used)) static ssize_t FUNC_1(struct device *VAR_6,
           struct device_attribute *VAR_7,
           const char *VAR_8, size_t VAR_9)
{
 unsigned VAR_10;

 if (FUNC_0(VAR_8, "%u\n", &VAR_10) != 1)
  return -VAR_0;

 if (VAR_4 == VAR_1) {
  if (VAR_10 < VAR_2)
   return -VAR_0;
 } else {
  if (VAR_10 < VAR_3)
   return -VAR_0;
 }

 VAR_5 = VAR_10;

 return VAR_9;
}
