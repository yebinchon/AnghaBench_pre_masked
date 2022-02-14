
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_2 (char*,char*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_3 (char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_4 (char*,char*) ;
 int FUNC_5 (int) ;
 int VAR_9 ;

void
FUNC_6(char *VAR_10)
{
    char *VAR_11;
    char *VAR_12;

    if (FUNC_4(VAR_10, "HANGUP") == 0) {
 ++VAR_6;
        return;
    }

    if (FUNC_4(VAR_10, "ABORT") == 0) {
 ++VAR_0;
 return;
    }

    if (FUNC_4(VAR_10, "CLR_ABORT") == 0) {
 ++VAR_1;
 return;
    }

    if (FUNC_4(VAR_10, "REPORT") == 0) {
 ++VAR_7;
 return;
    }

    if (FUNC_4(VAR_10, "CLR_REPORT") == 0) {
 ++VAR_2;
 return;
    }

    if (FUNC_4(VAR_10, "TIMEOUT") == 0) {
 ++VAR_9;
 return;
    }

    if (FUNC_4(VAR_10, "ECHO") == 0) {
 ++VAR_3;
 return;
    }

    if (FUNC_4(VAR_10, "SAY") == 0) {
 ++VAR_8;
 return;
    }




    for (;;) {
 VAR_11 = FUNC_2 (VAR_10, "-");
 VAR_10 = (char *) 0;

 if (VAR_11 == (char *) 0)
     return;

 VAR_12 = FUNC_2 (VAR_10, "-");




 if (FUNC_3 (VAR_11))
     return;





 if (VAR_12 == (char *) 0 || VAR_4 != 3)
     break;

 FUNC_1 (VAR_12);
    }




    if (VAR_5)
 FUNC_0("Failed (%s)", VAR_5);
    else
 FUNC_0("Failed");
    FUNC_5(VAR_4);
}
