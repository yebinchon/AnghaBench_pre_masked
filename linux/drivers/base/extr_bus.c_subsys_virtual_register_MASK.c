
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct bus_type {int dummy; } ;
struct attribute_group {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bus_type*,struct attribute_group const**,struct kobject*) ;
 struct kobject* FUNC_1 (int *) ;

int FUNC_2(struct bus_type *VAR_1,
       const struct attribute_group **VAR_2)
{
 struct kobject *VAR_3;

 VAR_3 = FUNC_1(((void*)0));
 if (!VAR_3)
  return -VAR_0;

 return FUNC_0(VAR_1, VAR_2, VAR_3);
}
