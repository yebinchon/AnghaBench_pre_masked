
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuidle_driver {int refcnt; } ;


 int VAR_0 ;
 struct cpuidle_driver* FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

struct cpuidle_driver *FUNC_3(void)
{
 struct cpuidle_driver *VAR_1;

 FUNC_1(&VAR_0);

 VAR_1 = FUNC_0();
 if (VAR_1)
  VAR_1->refcnt++;

 FUNC_2(&VAR_0);
 return VAR_1;
}
