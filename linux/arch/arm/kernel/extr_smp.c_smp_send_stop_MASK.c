
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpumask {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct cpumask*) ;
 int FUNC_1 (struct cpumask*,int ) ;
 int FUNC_2 (struct cpumask*) ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct cpumask*,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;

void FUNC_8(void)
{
 unsigned long VAR_3;
 struct cpumask VAR_4;

 FUNC_1(&VAR_4, VAR_2);
 FUNC_0(FUNC_6(), &VAR_4);
 if (!FUNC_2(&VAR_4))
  FUNC_5(&VAR_4, VAR_0);


 VAR_3 = VAR_1;
 while (FUNC_3() > 1 && VAR_3--)
  FUNC_7(1);

 if (FUNC_3() > 1)
  FUNC_4("SMP: failed to stop secondary CPUs\n");
}
