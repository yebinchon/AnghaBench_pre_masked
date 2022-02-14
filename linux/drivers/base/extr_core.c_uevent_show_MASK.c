
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kset {TYPE_1__* uevent_ops; } ;
struct kobject {struct kset* kset; struct kobject* parent; } ;
struct kobj_uevent_env {int envp_idx; char** envp; } ;
struct device_attribute {int dummy; } ;
struct device {struct kobject kobj; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int (* uevent ) (struct kset*,struct kobject*,struct kobj_uevent_env*) ;int (* filter ) (struct kset*,struct kobject*) ;} ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kobj_uevent_env*) ;
 struct kobj_uevent_env* FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (char*,char*,char*) ;
 int FUNC_3 (struct kset*,struct kobject*) ;
 int FUNC_4 (struct kset*,struct kobject*,struct kobj_uevent_env*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_2, struct device_attribute *VAR_3,
      char *VAR_4)
{
 struct kobject *VAR_5;
 struct kset *VAR_6;
 struct kobj_uevent_env *VAR_7 = ((void*)0);
 int VAR_8;
 size_t VAR_9 = 0;
 int VAR_10;


 VAR_5 = &VAR_2->kobj;
 while (!VAR_5->kset && VAR_5->parent)
  VAR_5 = VAR_5->parent;
 if (!VAR_5->kset)
  goto out;

 VAR_6 = VAR_5->kset;
 if (!VAR_6->uevent_ops || !VAR_6->uevent_ops->uevent)
  goto out;


 if (VAR_6->uevent_ops && VAR_6->uevent_ops->filter)
  if (!VAR_6->uevent_ops->filter(VAR_6, &VAR_2->kobj))
   goto out;

 VAR_7 = FUNC_1(sizeof(struct kobj_uevent_env), VAR_1);
 if (!VAR_7)
  return -VAR_0;


 VAR_10 = VAR_6->uevent_ops->uevent(VAR_6, &VAR_2->kobj, VAR_7);
 if (VAR_10)
  goto out;


 for (VAR_8 = 0; VAR_8 < VAR_7->envp_idx; VAR_8++)
  VAR_9 += FUNC_2(&VAR_4[VAR_9], "%s\n", VAR_7->envp[VAR_8]);
out:
 FUNC_0(VAR_7);
 return VAR_9;
}
