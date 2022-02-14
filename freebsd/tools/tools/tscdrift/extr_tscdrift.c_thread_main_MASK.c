
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int VAR_1 ;
 int FUNC_3 () ;
 int VAR_2 ;

__attribute__((used)) static void *
FUNC_4(void *VAR_3)
{
 int VAR_4, VAR_5;

 VAR_4 = (intptr_t)VAR_3;
 FUNC_1(VAR_4);
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_1 = 1;
  while (VAR_1 == 1)
   FUNC_2();
  FUNC_0();

  __asm __volatile("lfence");
  VAR_2 = FUNC_3();

  FUNC_0();
  VAR_1 = 3;
  while (VAR_1 == 3)
   FUNC_2();
 }
 return (((void*)0));
}
