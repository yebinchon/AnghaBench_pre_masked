
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cpumask_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 () ;
 scalar_t__ VAR_4 ;
 int FUNC_8 (int) ;

void FUNC_9(void)
{
 unsigned long VAR_5;

 if (FUNC_3() > 1) {
  cpumask_t VAR_6;

  FUNC_1(&VAR_6, VAR_3);
  FUNC_0(FUNC_7(), &VAR_6);

  if (VAR_4 <= VAR_1)
   FUNC_4("SMP: stopping secondary CPUs\n");
  FUNC_6(&VAR_6, VAR_0);
 }


 VAR_5 = VAR_2;
 while (FUNC_3() > 1 && VAR_5--)
  FUNC_8(1);

 if (FUNC_3() > 1)
  FUNC_5("SMP: failed to stop secondary CPUs %*pbl\n",
      FUNC_2(VAR_3));
}
