
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuidle_driver {scalar_t__ refcnt; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct cpuidle_driver* FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(void)
{
 struct cpuidle_driver *VAR_1;

 FUNC_2(&VAR_0);

 VAR_1 = FUNC_1();
 if (VAR_1 && !FUNC_0(VAR_1->refcnt <= 0))
  VAR_1->refcnt--;

 FUNC_3(&VAR_0);
}
