
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 char* VAR_6 ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int VAR_7 ;
 int FUNC_6 (int,char*,char*) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (char*,char*) ;
 int FUNC_9 (int *,char*,char*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int,char**,char*) ;
 int FUNC_12 () ;
 int FUNC_13 (char*,int,int ) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 char* VAR_10 ;
 char* VAR_11 ;
 char* VAR_12 ;
 int * VAR_13 ;
 int FUNC_14 (int ) ;
 int * VAR_14 ;
 int FUNC_15 (int ) ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 scalar_t__ VAR_18 ;

int
FUNC_18(int VAR_19, char *VAR_20[])
{
    int VAR_21;

    FUNC_16();

    while ((VAR_21 = FUNC_11(VAR_19, VAR_20, "ef:r:sSt:T:U:vV")) != -1) {
 switch (VAR_21) {
 case 'e':
     ++VAR_7;
     break;

 case 'f':
     if (VAR_6 != ((void*)0))
  FUNC_10(VAR_6);
     VAR_6 = FUNC_4(VAR_8);
     break;

 case 'r':
     if (VAR_13 != ((void*)0))
  FUNC_7(VAR_13);
     if (VAR_12 != ((void*)0))
  FUNC_10(VAR_12);
     VAR_12 = FUNC_4(VAR_8);
     VAR_13 = FUNC_8(VAR_12, "a");
     if (VAR_13 != ((void*)0)) {
  if (VAR_18)
      FUNC_9(VAR_13, "Opening \"%s\"...\n", VAR_12);
     } else
  FUNC_6(2, "cannot open \"%s\" for appending", VAR_12);
     break;

 case 's':
     ++VAR_17;
     break;

 case 'S':
     VAR_16 = 0;
     break;

 case 't':
     VAR_15 = FUNC_1(VAR_8);
     break;

 case 'T':
     if (VAR_10 != ((void*)0))
  FUNC_10(VAR_10);
     VAR_10 = FUNC_4(VAR_8);
     break;

 case 'U':
     if (VAR_11 != ((void*)0))
  FUNC_10(VAR_11);
     VAR_11 = FUNC_4(VAR_8);
     break;

 case 'v':
     ++VAR_18;
     break;

 case 'V':
     ++VAR_5;
     break;

 default:
     FUNC_17();
     break;
 }
    }

    VAR_19 -= VAR_9;
    VAR_20 += VAR_9;




    if (VAR_13 == ((void*)0))
 VAR_13 = VAR_14;

    if (VAR_16) {
 FUNC_13("chat", VAR_3 | VAR_2, VAR_1);

 if (VAR_18)
     FUNC_14(FUNC_0(VAR_0));
 else
     FUNC_14(FUNC_0(VAR_4));
    }

    if (VAR_6 != ((void*)0)) {
 if (*VAR_20 != ((void*)0))
     FUNC_17();
 else {
            FUNC_12();
     FUNC_5(VAR_6);
 }
    } else {
 FUNC_12();
 while (*VAR_20 != ((void*)0) && VAR_19 > 0) {
     FUNC_2(*VAR_20);
     VAR_20++;
     VAR_19--;

     if (*VAR_20 != ((void*)0) && VAR_19 > 0) {
  FUNC_3(*VAR_20);
  VAR_20++;
  VAR_19--;
     }
 }
    }

    FUNC_15(0);
    return 0;
}
