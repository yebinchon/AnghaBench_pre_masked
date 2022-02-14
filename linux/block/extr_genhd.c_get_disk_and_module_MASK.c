
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct module {int dummy; } ;
struct kobject {int dummy; } ;
struct gendisk {TYPE_1__* fops; } ;
struct TYPE_4__ {int kobj; } ;
struct TYPE_3__ {struct module* owner; } ;


 TYPE_2__* FUNC_0 (struct gendisk*) ;
 struct kobject* FUNC_1 (int *) ;
 int FUNC_2 (struct module*) ;
 int FUNC_3 (struct module*) ;

struct kobject *FUNC_4(struct gendisk *VAR_0)
{
 struct module *VAR_1;
 struct kobject *VAR_2;

 if (!VAR_0->fops)
  return ((void*)0);
 VAR_1 = VAR_0->fops->owner;
 if (VAR_1 && !FUNC_3(VAR_1))
  return ((void*)0);
 VAR_2 = FUNC_1(&FUNC_0(VAR_0)->kobj);
 if (VAR_2 == ((void*)0)) {
  FUNC_2(VAR_1);
  return ((void*)0);
 }
 return VAR_2;

}
