
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct completion {int dummy; } ;
struct cpufreq_policy {int rwsem; struct completion kobj_unregister; struct kobject kobj; } ;


 int FUNC_0 (struct cpufreq_policy*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct kobject*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct completion*) ;

__attribute__((used)) static void FUNC_6(struct cpufreq_policy *VAR_0)
{
 struct kobject *VAR_1;
 struct completion *VAR_2;

 FUNC_1(&VAR_0->rwsem);
 FUNC_0(VAR_0);
 VAR_1 = &VAR_0->kobj;
 VAR_2 = &VAR_0->kobj_unregister;
 FUNC_4(&VAR_0->rwsem);
 FUNC_2(VAR_1);






 FUNC_3("waiting for dropping of refcount\n");
 FUNC_5(VAR_2);
 FUNC_3("wait complete\n");
}
