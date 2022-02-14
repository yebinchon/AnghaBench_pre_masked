
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 unsigned int FUNC_2 () ;
 int FUNC_3 (unsigned int) ;

int FUNC_4(void)
{
 unsigned int VAR_1;
 unsigned int VAR_2;
 if (FUNC_1()) {
  VAR_2 = FUNC_2();
  FUNC_3(VAR_2);
  FUNC_0();
  while (FUNC_2() < (VAR_2 + VAR_0))
   if (!FUNC_1())
    break;
  if (FUNC_1())
   return 0;
 }

 for (VAR_1 = 0x10; VAR_1 <= 0x400000; VAR_1 <<= 1) {
  VAR_2 = FUNC_2();
  VAR_2 += VAR_1;
  FUNC_3(VAR_2);
  FUNC_0();
  if ((int)(FUNC_2() - VAR_2) < 0)
      break;

 }

 while ((int)(FUNC_2() - VAR_2) <= 0)
  ;

 while (FUNC_2() < (VAR_2 + VAR_0))
  if (FUNC_1())
   break;
 if (!FUNC_1())
  return 0;
 VAR_2 = FUNC_2();
 FUNC_3(VAR_2);
 FUNC_0();
 while (FUNC_2() < (VAR_2 + VAR_0))
  if (!FUNC_1())
   break;
 if (FUNC_1())
  return 0;




 return 1;
}
