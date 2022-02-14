
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (long) ;
 long FUNC_1 () ;
 int FUNC_2 (long) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;

void FUNC_6(void)
{
 long VAR_0;

 while (1) {
  VAR_0 = FUNC_1();
  if (!FUNC_0(VAR_0))
   break;
  FUNC_4(FUNC_2(VAR_0));
 }
 if (VAR_0 && !FUNC_3())
  FUNC_5("Could not enable big endian exceptions");
}
