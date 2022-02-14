
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char const*,int ,unsigned long*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_3,
 struct device_attribute *VAR_4, const char *VAR_5, size_t VAR_6)
{
 unsigned long VAR_7;
 if (FUNC_0(VAR_5, 0, &VAR_7))
  return -VAR_0;
 if (VAR_7 < 1 || VAR_7 >= 100)
  return -VAR_0;
 FUNC_1(&VAR_2);
 VAR_1 = VAR_7;
 FUNC_2(&VAR_2);
 return VAR_6;
}
