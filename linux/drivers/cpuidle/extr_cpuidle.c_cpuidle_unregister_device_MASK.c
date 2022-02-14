
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuidle_device {scalar_t__ registered; } ;


 int FUNC_0 (struct cpuidle_device*) ;
 int FUNC_1 (struct cpuidle_device*) ;
 int FUNC_2 (struct cpuidle_device*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct cpuidle_device*) ;
 int FUNC_5 () ;

void FUNC_6(struct cpuidle_device *VAR_0)
{
 if (!VAR_0 || VAR_0->registered == 0)
  return;

 FUNC_3();

 FUNC_2(VAR_0);

 FUNC_4(VAR_0);

 FUNC_0(VAR_0);

 FUNC_1(VAR_0);

 FUNC_5();
}
