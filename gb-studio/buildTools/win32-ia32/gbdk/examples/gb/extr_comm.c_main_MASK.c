
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UBYTE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char VAR_8 ;
 scalar_t__ VAR_9 ;
 char* VAR_10 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 char* VAR_11 ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;

int FUNC_8(void)
{
  UBYTE VAR_12, VAR_13 = 0;
  char *VAR_14;

  FUNC_3("Byte");
  FUNC_3("  A      : Send");
  FUNC_3("  B      : Receive");
  FUNC_3("String");
  FUNC_3("  START  : Send");
  FUNC_3("  SELECT : Receive");

  while(1) {
    VAR_12 = FUNC_6(VAR_3 | VAR_4 | VAR_6 | VAR_5);
    FUNC_7();

    if(VAR_12 == VAR_3) {

      FUNC_1("Sending b... ");
      VAR_8 = VAR_13++;
      FUNC_5();

      while(VAR_9 == VAR_2 && FUNC_0() == 0)
 ;
      if(VAR_9 == VAR_0)
 FUNC_1("OK\n");
      else
 FUNC_1("#%d\n", VAR_9);
    } else if(VAR_12 == VAR_4) {

      FUNC_1("Receiving b... ");
      FUNC_4();

      while(VAR_9 == VAR_1 && FUNC_0() == 0)
 ;
      if(VAR_9 == VAR_0)
 FUNC_1("OK\n%d\n", VAR_7);
      else
 FUNC_1("#%d\n", VAR_9);
    } else if(VAR_12 == VAR_6) {

      FUNC_1("Sending s... ");
      VAR_14 = VAR_11;
      while(1) {
 VAR_8 = *VAR_14;
 do {
   FUNC_5();

   while(VAR_9 == VAR_2 && FUNC_0() == 0)
     ;
 } while(VAR_9 != VAR_0 && FUNC_0() == 0);
 if(VAR_9 != VAR_0) {
   FUNC_1("#%d\n", VAR_9);
   break;
 }
 if(*VAR_14 == 0)
   break;
 VAR_14++;
      }
      if(VAR_9 == VAR_0)
 FUNC_1("OK\n");
    } else if(VAR_12 == VAR_5) {

      FUNC_1("Receiving s... ");
      VAR_14 = VAR_10;
      while(1) {
 FUNC_4();

 while(VAR_9 == VAR_1 && FUNC_0() == 0)
   ;
 if(VAR_9 != VAR_0) {
   FUNC_1("#%d\n", VAR_9);
   break;
 }
 FUNC_2(VAR_7);
 *VAR_14 = VAR_7;
 if(*VAR_14 == 0)
   break;
 VAR_14++;
      }
      if(VAR_9 == VAR_0)
 FUNC_1("OK\n%s\n", VAR_10);
    }

    FUNC_7();
  }
}
