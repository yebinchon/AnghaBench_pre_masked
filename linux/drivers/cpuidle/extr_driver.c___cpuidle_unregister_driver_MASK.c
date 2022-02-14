
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuidle_driver {scalar_t__ refcnt; int cpumask; scalar_t__ bctimer; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct cpuidle_driver*) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,int *,int) ;

__attribute__((used)) static void FUNC_3(struct cpuidle_driver *VAR_1)
{
 if (FUNC_0(VAR_1->refcnt > 0))
  return;

 if (VAR_1->bctimer) {
  VAR_1->bctimer = 0;
  FUNC_2(VAR_1->cpumask, VAR_0,
     ((void*)0), 1);
 }

 FUNC_1(VAR_1);
}
