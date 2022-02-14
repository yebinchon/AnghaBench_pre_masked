
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuidle_coupled {int prevent; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct cpuidle_coupled*) ;
 int FUNC_2 (int,struct cpuidle_coupled*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct cpuidle_coupled *VAR_0)
{
 int VAR_1 = FUNC_3();


 VAR_0->prevent++;
 FUNC_2(VAR_1, VAR_0);
 FUNC_4();
 while (!FUNC_1(VAR_0))
  FUNC_0();
}
