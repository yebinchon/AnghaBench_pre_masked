
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 () ;
 unsigned long FUNC_1 () ;

__attribute__((used)) static bool FUNC_2(void)
{
 unsigned long VAR_3;

 if (FUNC_0() < VAR_2)
  return 0;

 VAR_3 = FUNC_1();
 if (!(VAR_3 & VAR_0))
  return 0;
 return !!(VAR_3 & VAR_1);
}
