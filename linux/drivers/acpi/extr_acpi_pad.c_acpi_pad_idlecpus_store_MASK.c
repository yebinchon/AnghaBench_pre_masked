
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (char const*,int ,unsigned long*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2,
 struct device_attribute *VAR_3, const char *VAR_4, size_t VAR_5)
{
 unsigned long VAR_6;
 if (FUNC_1(VAR_4, 0, &VAR_6))
  return -VAR_0;
 FUNC_2(&VAR_1);
 FUNC_0(VAR_6);
 FUNC_3(&VAR_1);
 return VAR_5;
}
