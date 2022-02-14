
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct kobject {int dummy; } ;
struct device {TYPE_3__* class; struct kobject kobj; } ;
struct TYPE_6__ {TYPE_2__* p; } ;
struct TYPE_4__ {int kobj; } ;
struct TYPE_5__ {TYPE_1__ subsys; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*,char const*) ;
 int FUNC_1 (struct device*) ;
 struct device* FUNC_2 (struct device*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct kobject*) ;
 int FUNC_5 (struct kobject*,char const*) ;
 char* FUNC_6 (int ,int ) ;
 int FUNC_7 (struct device*) ;
 int FUNC_8 (int *,struct kobject*,char*,char const*,int ) ;

int FUNC_9(struct device *VAR_3, const char *VAR_4)
{
 struct kobject *VAR_5 = &VAR_3->kobj;
 char *VAR_6 = ((void*)0);
 int VAR_7;

 VAR_3 = FUNC_2(VAR_3);
 if (!VAR_3)
  return -VAR_0;

 FUNC_0(VAR_3, "renaming to %s\n", VAR_4);

 VAR_6 = FUNC_6(FUNC_1(VAR_3), VAR_2);
 if (!VAR_6) {
  VAR_7 = -VAR_1;
  goto out;
 }

 if (VAR_3->class) {
  VAR_7 = FUNC_8(&VAR_3->class->p->subsys.kobj,
          VAR_5, VAR_6,
          VAR_4, FUNC_4(VAR_5));
  if (VAR_7)
   goto out;
 }

 VAR_7 = FUNC_5(VAR_5, VAR_4);
 if (VAR_7)
  goto out;

out:
 FUNC_7(VAR_3);

 FUNC_3(VAR_6);

 return VAR_7;
}
