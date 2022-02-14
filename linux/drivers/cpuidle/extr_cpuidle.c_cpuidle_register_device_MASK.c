
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuidle_device {scalar_t__ registered; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cpuidle_device*) ;
 int FUNC_1 (struct cpuidle_device*) ;
 int FUNC_2 (struct cpuidle_device*) ;
 int FUNC_3 (struct cpuidle_device*) ;
 int FUNC_4 (struct cpuidle_device*) ;
 int FUNC_5 () ;
 int VAR_2 ;
 int FUNC_6 (struct cpuidle_device*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct cpuidle_device *VAR_3)
{
 int VAR_4 = -VAR_0;

 if (!VAR_3)
  return -VAR_1;

 FUNC_7(&VAR_2);

 if (VAR_3->registered)
  goto out_unlock;

 FUNC_0(VAR_3);

 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4)
  goto out_unlock;

 VAR_4 = FUNC_3(VAR_3);
 if (VAR_4)
  goto out_unregister;

 VAR_4 = FUNC_4(VAR_3);
 if (VAR_4)
  goto out_sysfs;

 FUNC_5();

out_unlock:
 FUNC_8(&VAR_2);

 return VAR_4;

out_sysfs:
 FUNC_6(VAR_3);
out_unregister:
 FUNC_2(VAR_3);
 goto out_unlock;
}
