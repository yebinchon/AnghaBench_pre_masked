
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int,char**,char const*) ;
 int VAR_4 ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (char*) ;
 char* FUNC_10 (int,char**,int*,float,int ) ;
 char* VAR_5 ;
 int VAR_6 ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (char*) ;
 int FUNC_18 (char*) ;
 int FUNC_19 (char*) ;
 int FUNC_20 (int,char**,int*) ;
 int FUNC_21 (int,char**,int*) ;
 int FUNC_22 (char*) ;
 int FUNC_23 (char*) ;
 int FUNC_24 (char*) ;
 int FUNC_25 (char*) ;
 int FUNC_26 (char*,char*,int *,int *) ;
 scalar_t__ FUNC_27 (char*,char*) ;
 int FUNC_28 () ;
 int FUNC_29 () ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_30 (int,char**,int*) ;
 scalar_t__ VAR_9 ;
 int FUNC_31 (char*,char*) ;

int
FUNC_32(int VAR_10, char **VAR_11)
{
 char *VAR_12, *VAR_13, *VAR_14;
 const char *VAR_15;
 int VAR_16, VAR_17, VAR_18;

 VAR_9 = FUNC_5();

 FUNC_4();

 VAR_16 = 0;
 VAR_17 = VAR_1;
 VAR_14 = ((void*)0);
 if (VAR_9)
  VAR_15 = "b:Cc:fg:h:Hi:M:m:pPr:S:s:T:t:x";
 else
  VAR_15 = "b:Cc:deE:fg:h:Hi:l:LM:m:pPr:S:s:T:t:x";

 while ((VAR_18 = FUNC_3(VAR_10, VAR_11, VAR_15)) != -1)
  switch(VAR_18) {
  case 'b':
   FUNC_13(VAR_5);
   break;
  case 'C':
   FUNC_0();
   break;
  case 'c':
   FUNC_15(VAR_5);
   break;
  case 'd':
   if (VAR_9)
    break;
   FUNC_11();
   break;
  case 'E':
   if (VAR_9)
    break;
   FUNC_23(VAR_5);
   break;
  case 'e':
   if (VAR_9)
    break;
   FUNC_2();
   break;
  case 'f':
   VAR_5 = FUNC_10(VAR_10, VAR_11, &VAR_6, 'f', 0);
   if (VAR_5 != ((void*)0)) {
    VAR_12 = FUNC_10(VAR_10, VAR_11, &VAR_6, 'f', 0);

    if (VAR_12 == ((void*)0)) {
     VAR_13 = ((void*)0);
     VAR_12 = VAR_5;
    } else
     VAR_13 = VAR_5;

    FUNC_8(VAR_13, VAR_12);
   } else {
    if (!VAR_9)
     FUNC_29();

    FUNC_7();
   }
   break;
  case 'g':
   if (FUNC_26(VAR_5, "%dx%d",
       &VAR_7, &VAR_8) != 2) {
    FUNC_12();
    FUNC_31("incorrect geometry: %s", VAR_5);
    FUNC_29();
   }
                 break;
  case 'h':
   FUNC_16(VAR_5);
   break;
  case 'H':
   VAR_17 = VAR_0;
   break;
  case 'i':
   FUNC_25(VAR_5);
   break;
  case 'l':
   if (VAR_9)
    break;
   FUNC_9(VAR_5);
   break;
  case 'L':
   if (VAR_9)
    break;
   FUNC_6();
   break;
  case 'M':
   FUNC_19(VAR_5);
   break;
  case 'm':
   FUNC_18(VAR_5);
   break;
  case 'p':
   VAR_16 = VAR_2;
   break;
  case 'P':
   VAR_16 = VAR_3;
   break;
  case 'r':
   FUNC_21(VAR_10, VAR_11, &VAR_6);
   break;
  case 'S':
   FUNC_17(VAR_5);
   break;
  case 's':
   FUNC_14(VAR_5);
   break;
  case 'T':
   if (FUNC_27(VAR_5, "xterm") != 0 &&
       FUNC_27(VAR_5, "cons25") != 0)
    FUNC_29();
   VAR_14 = VAR_5;
   break;
  case 't':
   FUNC_22(VAR_5);
   break;
  case 'x':
   VAR_4 = 1;
   break;
  default:
   FUNC_29();
  }

 if (VAR_16 != 0)
  FUNC_1(VAR_16, VAR_17);
 FUNC_30(VAR_10, VAR_11, &VAR_6);
 FUNC_20(VAR_10, VAR_11, &VAR_6);

 if (VAR_6 < VAR_10 && !FUNC_27(VAR_11[VAR_6], "show")) {
  FUNC_28();
  VAR_6++;
 }

 if (VAR_14 != ((void*)0))
  FUNC_24(VAR_14);

 if ((VAR_6 != VAR_10) || (VAR_10 == 1))
  FUNC_29();
 return (0);
}
