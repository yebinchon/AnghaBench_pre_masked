
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kobject {int * kset; } ;
struct class_dir {struct kobject kobj; struct class* class; } ;
struct class {int name; TYPE_1__* p; } ;
struct TYPE_2__ {int glue_dirs; } ;


 int VAR_0 ;
 struct kobject* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct kobject*,struct kobject*,char*,int ) ;
 int FUNC_2 (struct kobject*,int *) ;
 int FUNC_3 (struct kobject*) ;
 struct class_dir* FUNC_4 (int,int ) ;

__attribute__((used)) static struct kobject *
FUNC_5(struct class *VAR_3, struct kobject *VAR_4)
{
 struct class_dir *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_4(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return FUNC_0(-VAR_0);

 VAR_5->class = VAR_3;
 FUNC_2(&VAR_5->kobj, &VAR_2);

 VAR_5->kobj.kset = &VAR_3->p->glue_dirs;

 VAR_6 = FUNC_1(&VAR_5->kobj, VAR_4, "%s", VAR_3->name);
 if (VAR_6 < 0) {
  FUNC_3(&VAR_5->kobj);
  return FUNC_0(VAR_6);
 }
 return &VAR_5->kobj;
}
