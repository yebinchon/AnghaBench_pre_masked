
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int kobj; } ;
struct cpuidle_device_kobj {int kobj; int kobj_unregister; struct cpuidle_device* dev; } ;
struct cpuidle_device {struct cpuidle_device_kobj* kobj_dev; scalar_t__ cpu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct device* FUNC_0 (unsigned long) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct cpuidle_device_kobj*) ;
 int FUNC_3 (int *,int *,int *,char*) ;
 int FUNC_4 (int *,int ) ;
 int VAR_4 ;
 struct cpuidle_device_kobj* FUNC_5 (int,int ) ;

int FUNC_6(struct cpuidle_device *VAR_5)
{
 struct cpuidle_device_kobj *VAR_6;
 struct device *VAR_7 = FUNC_0((unsigned long)VAR_5->cpu);
 int VAR_8;
 if (!VAR_7)
  return -VAR_0;

 VAR_6 = FUNC_5(sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return -VAR_1;
 VAR_6->dev = VAR_5;
 VAR_5->kobj_dev = VAR_6;

 FUNC_1(&VAR_6->kobj_unregister);

 VAR_8 = FUNC_3(&VAR_6->kobj, &VAR_4, &VAR_7->kobj,
       "cpuidle");
 if (VAR_8) {
  FUNC_2(VAR_6);
  return VAR_8;
 }

 FUNC_4(&VAR_6->kobj, VAR_3);

 return 0;
}
