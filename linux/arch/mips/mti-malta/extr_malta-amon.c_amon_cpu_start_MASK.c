
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpulaunch {unsigned long pc; unsigned long gp; unsigned long sp; unsigned long a0; int flags; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;

int FUNC_6(int VAR_3,
      unsigned long VAR_4, unsigned long VAR_5,
      unsigned long VAR_6, unsigned long VAR_7)
{
 volatile struct cpulaunch *VAR_8 =
  (struct cpulaunch *)FUNC_0(VAR_0);

 if (!FUNC_1(VAR_3))
  return -1;
 if (VAR_3 == FUNC_3()) {
  FUNC_2("launch: I am cpu%d!\n", VAR_3);
  return -1;
 }
 VAR_8 += VAR_3;

 FUNC_2("launch: starting cpu%d\n", VAR_3);

 VAR_8->pc = VAR_4;
 VAR_8->gp = VAR_6;
 VAR_8->sp = VAR_5;
 VAR_8->a0 = VAR_7;

 FUNC_5();
 VAR_8->flags |= VAR_1;
 FUNC_5();

 while ((VAR_8->flags & VAR_2) == 0)
  ;
 FUNC_4();
 FUNC_2("launch: cpu%d gone!\n", VAR_3);

 return 0;
}
