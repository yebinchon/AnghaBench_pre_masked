
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ VAR_0 ;
 unsigned char FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;

void
FUNC_5(void *VAR_1, size_t VAR_2)
{
 unsigned char *VAR_3 = VAR_1;
 FUNC_0();
 FUNC_4();
 while (VAR_2--) {
  if (--VAR_0 <= 0)
   FUNC_3();
  VAR_3[VAR_2] = FUNC_2();
 }
 FUNC_1();
}
