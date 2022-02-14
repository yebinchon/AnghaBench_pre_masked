
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct kobj_attribute {int dummy; } ;
struct cache {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct cache*,unsigned int*) ;
 struct cache* FUNC_1 (struct kobject*) ;
 int FUNC_2 (char*,char*,unsigned int) ;

__attribute__((used)) static ssize_t FUNC_3(struct kobject *VAR_1, struct kobj_attribute *VAR_2, char *VAR_3)
{
 unsigned int VAR_4;
 struct cache *VAR_5;

 VAR_5 = FUNC_1(VAR_1);

 if (FUNC_0(VAR_5, &VAR_4))
  return -VAR_0;

 return FUNC_2(VAR_3, "%u\n", VAR_4);
}
