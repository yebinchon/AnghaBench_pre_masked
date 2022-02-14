
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuidle_device {int use_deepest_state; } ;


 struct cpuidle_device* FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;

void FUNC_3(bool VAR_0)
{
 struct cpuidle_device *VAR_1;

 FUNC_1();
 VAR_1 = FUNC_0();
 if (VAR_1)
  VAR_1->use_deepest_state = VAR_0;
 FUNC_2();
}
