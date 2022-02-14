
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(void)
{
 unsigned long VAR_4 = (FUNC_1() - FUNC_0()) * VAR_0 / 100;

 if (!VAR_2)
  return;

 VAR_4 /= VAR_2;
 if (VAR_4 < VAR_1)
  VAR_4 = VAR_1;
 VAR_3 = VAR_4;
}
