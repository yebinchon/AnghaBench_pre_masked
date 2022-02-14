
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kset {int dummy; } ;
struct kobject {int dummy; } ;
struct kobj_type {int dummy; } ;
struct device {scalar_t__ class; scalar_t__ bus; } ;


 struct kobj_type VAR_0 ;
 struct kobj_type* FUNC_0 (struct kobject*) ;
 struct device* FUNC_1 (struct kobject*) ;

__attribute__((used)) static int FUNC_2(struct kset *VAR_1, struct kobject *VAR_2)
{
 struct kobj_type *VAR_3 = FUNC_0(VAR_2);

 if (VAR_3 == &VAR_0) {
  struct device *VAR_4 = FUNC_1(VAR_2);
  if (VAR_4->bus)
   return 1;
  if (VAR_4->class)
   return 1;
 }
 return 0;
}
