
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * ktype; void* kset; } ;
struct TYPE_3__ {TYPE_2__ kobj; } ;
struct subsys_private {TYPE_1__ subsys; struct class* class; int mutex; int glue_dirs; int interfaces; int klist_devices; } ;
struct lock_class_key {int dummy; } ;
struct class {int class_groups; struct subsys_private* p; scalar_t__ dev_kobj; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,struct lock_class_key*) ;
 struct class VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct class*) ;
 void* VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct class*) ;
 int FUNC_5 (struct subsys_private*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (TYPE_2__*,char*,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_1__*) ;
 struct subsys_private* FUNC_10 (int,int ) ;
 int FUNC_11 (char*,int ) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;

int FUNC_12(struct class *VAR_9, struct lock_class_key *VAR_10)
{
 struct subsys_private *VAR_11;
 int VAR_12;

 FUNC_11("device class '%s': registering\n", VAR_9->name);

 VAR_11 = FUNC_10(sizeof(*VAR_11), VAR_1);
 if (!VAR_11)
  return -VAR_0;
 FUNC_6(&VAR_11->klist_devices, VAR_5, VAR_6);
 FUNC_0(&VAR_11->interfaces);
 FUNC_8(&VAR_11->glue_dirs);
 FUNC_1(&VAR_11->mutex, "subsys mutex", VAR_10);
 VAR_12 = FUNC_7(&VAR_11->subsys.kobj, "%s", VAR_9->name);
 if (VAR_12) {
  FUNC_5(VAR_11);
  return VAR_12;
 }


 if (!VAR_9->dev_kobj)
  VAR_9->dev_kobj = VAR_8;






 VAR_11->subsys.kobj.kset = VAR_3;

 VAR_11->subsys.kobj.ktype = &VAR_4;
 VAR_11->class = VAR_9;
 VAR_9->p = VAR_11;

 VAR_12 = FUNC_9(&VAR_11->subsys);
 if (VAR_12) {
  FUNC_5(VAR_11);
  return VAR_12;
 }
 VAR_12 = FUNC_2(FUNC_3(VAR_9), VAR_9->class_groups);
 FUNC_4(VAR_9);
 return VAR_12;
}
