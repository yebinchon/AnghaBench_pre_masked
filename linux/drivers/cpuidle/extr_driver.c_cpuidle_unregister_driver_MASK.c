
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuidle_driver {int dummy; } ;


 int FUNC_0 (struct cpuidle_driver*) ;
 int VAR_0 ;
 struct cpuidle_driver* FUNC_1 () ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct cpuidle_driver *VAR_3)
{
 bool VAR_4 = (FUNC_1() == VAR_3);

 FUNC_5(&VAR_0);
 FUNC_0(VAR_3);
 FUNC_6(&VAR_0);

 if (!VAR_4)
  return;

 FUNC_3(&VAR_1);
 if (VAR_2) {
  if (!FUNC_2(VAR_2))
   VAR_2 = ((void*)0);
 }
 FUNC_4(&VAR_1);
}
