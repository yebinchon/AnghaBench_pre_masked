
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuidle_device_kobj {int kobj_unregister; int kobj; } ;
struct cpuidle_device {struct cpuidle_device_kobj* kobj_dev; } ;


 int FUNC_0 (struct cpuidle_device_kobj*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct cpuidle_device *VAR_0)
{
 struct cpuidle_device_kobj *VAR_1 = VAR_0->kobj_dev;

 FUNC_1(&VAR_1->kobj);
 FUNC_2(&VAR_1->kobj_unregister);
 FUNC_0(VAR_1);
}
