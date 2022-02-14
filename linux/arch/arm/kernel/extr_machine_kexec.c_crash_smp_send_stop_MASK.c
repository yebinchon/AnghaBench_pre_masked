
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,scalar_t__) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int *,int) ;
 int VAR_1 ;

void FUNC_6(void)
{
 static int VAR_2;
 unsigned long VAR_3;

 if (VAR_2)
  return;

 FUNC_1(&VAR_1, FUNC_3() - 1);
 FUNC_5(VAR_0, ((void*)0), 0);
 VAR_3 = 1000;
 while ((FUNC_0(&VAR_1) > 0) && VAR_3) {
  FUNC_2(1);
  VAR_3--;
 }
 if (FUNC_0(&VAR_1) > 0)
  FUNC_4("Non-crashing CPUs did not react to IPI\n");

 VAR_2 = 1;
}
