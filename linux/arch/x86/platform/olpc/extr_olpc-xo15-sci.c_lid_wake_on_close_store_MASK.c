
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct kobj_attribute {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*,char*,unsigned int*) ;

__attribute__((used)) static ssize_t FUNC_2(struct kobject *VAR_1,
           struct kobj_attribute *VAR_2,
           const char *VAR_3, size_t VAR_4)
{
 unsigned int VAR_5;

 if (FUNC_1(VAR_3, "%u", &VAR_5) != 1)
  return -VAR_0;

 FUNC_0(!!VAR_5);

 return VAR_4;
}
