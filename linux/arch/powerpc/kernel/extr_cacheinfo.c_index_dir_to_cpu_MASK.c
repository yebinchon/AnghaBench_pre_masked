
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {struct kobject* parent; } ;
struct device {unsigned int id; } ;
struct cache_index_dir {struct kobject kobj; } ;


 struct device* FUNC_0 (struct kobject*) ;

__attribute__((used)) static unsigned int FUNC_1(struct cache_index_dir *VAR_0)
{
 struct kobject *VAR_1 = &VAR_0->kobj;
 struct kobject *VAR_2 = VAR_1->parent;
 struct kobject *VAR_3 = VAR_2->parent;
 struct device *VAR_4 = FUNC_0(VAR_3);

 return VAR_4->id;
}
