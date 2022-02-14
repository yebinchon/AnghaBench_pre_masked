
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (long) ;
 long VAR_0 ;
 long FUNC_1 () ;
 int FUNC_2 (long) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,long) ;

void FUNC_5(void)
{
 long VAR_1;

 while (1) {
  VAR_1 = FUNC_1();
  if (!FUNC_0(VAR_1))
   break;
  FUNC_3(FUNC_2(VAR_1));
 }
 if (VAR_1 != VAR_0)
  FUNC_4("Warning: Failed to disable relocation on exceptions: %ld\n",
   VAR_1);
}
