
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (long) ;
 long VAR_0 ;
 long VAR_1 ;
 long FUNC_1 () ;
 unsigned int FUNC_2 (long) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,unsigned int) ;

void FUNC_6(void)
{
 long VAR_2;
 unsigned int VAR_3, VAR_4 = 0;

 while (1) {
  VAR_2 = FUNC_1();
  if (!FUNC_0(VAR_2)) {
   if (VAR_2 == VAR_0) {
    FUNC_4("Relocation on exceptions not"
     " supported\n");
   } else if (VAR_2 != VAR_1) {
    FUNC_5("Unable to enable relocation"
     " on exceptions: %ld\n", VAR_2);
   }
   break;
  }

  VAR_3 = FUNC_2(VAR_2);
  VAR_4 += VAR_3;
  if (VAR_4 > 1000) {
   FUNC_5("Warning: Giving up waiting to enable "
    "relocation on exceptions (%u msec)!\n",
    VAR_4);
   return;
  }

  FUNC_3(VAR_3);
 }
}
