
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct configuration {int dummy; } ;
typedef int fields ;
typedef int buffer ;
typedef int FILE ;


 int FUNC_0 (char*,char*,char const*,int) ;
 int FUNC_1 (int (*) (struct configuration*,char const*,char const**,int*)) ;
 int FUNC_2 (int (*) (struct configuration*,char const*,char const**,int*)) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct configuration*,char*,int) ;
 int FUNC_6 (struct configuration*,char*,int) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (char*,int,int *) ;
 int * FUNC_9 (char const*,char*) ;
 int FUNC_10 (char*,int,int) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*,int ,int) ;
 int FUNC_14 (struct configuration*,char*,int) ;
 int FUNC_15 (struct configuration*,char*,int) ;
 int FUNC_16 (struct configuration*,char*,int) ;
 int FUNC_17 (struct configuration*,char*,int) ;
 int FUNC_18 (struct configuration*,char*,int) ;
 int FUNC_19 (struct configuration*,char*,int) ;
 int FUNC_20 (struct configuration*,char*,int) ;
 int FUNC_21 (struct configuration*,char*,int) ;
 int FUNC_22 (struct configuration*,char*,int) ;
 int FUNC_23 (struct configuration*,int) ;
 int FUNC_24 (char*,char**,int) ;
 int FUNC_25 (char*,char*) ;

int
FUNC_26(struct configuration *VAR_0,
 const char *VAR_1, char const **VAR_2, int *VAR_3)
{
 FILE *VAR_4;
 char VAR_5[255];
 char *VAR_6[128];
 int VAR_7, VAR_8, VAR_9;
 int VAR_10;

 FUNC_1(FUNC_26);
 FUNC_3(VAR_0 != ((void*)0));
 FUNC_3(VAR_1 != ((void*)0));

 VAR_4 = FUNC_9(VAR_1, "r");
 if (VAR_4 == ((void*)0)) {
  FUNC_2(FUNC_26);
  return (-1);
 }

 VAR_10 = 0;
 VAR_8 = 0;
 FUNC_13(VAR_5, 0, sizeof(VAR_5));
 while ((VAR_10 == 0) && (FUNC_8(VAR_5, sizeof(VAR_5) - 1, VAR_4) != ((void*)0))) {
  VAR_7 = FUNC_24(VAR_5, VAR_6, sizeof(VAR_6));
  ++VAR_8;

  if (VAR_7 == 0)
   continue;

  switch (VAR_6[0][0]) {
  case '#':
  case '\0':
   continue;
  case 'e':
   if ((VAR_7 == 3) &&
   (FUNC_25(VAR_6[0], "enable-cache") == 0) &&
   (FUNC_4(VAR_6[1]) == 0) &&
   ((VAR_9 = FUNC_12(VAR_6[2])) != -1)) {
    FUNC_6(VAR_0, VAR_6[1], VAR_9);
    continue;
   }
   break;
  case 'd':
   if ((VAR_7 == 2) &&
   (FUNC_25(VAR_6[0], "debug-level") == 0) &&
   ((VAR_9 = FUNC_10(VAR_6[1], 0, 10)) != -1)) {
    continue;
   }
   break;
  case 'p':
   if ((VAR_7 == 3) &&
   (FUNC_25(VAR_6[0], "positive-time-to-live") == 0) &&
   (FUNC_4(VAR_6[1]) == 0) &&
   ((VAR_9 = FUNC_10(VAR_6[2], 0, -1)) != -1)) {
    FUNC_21(VAR_0,
     VAR_6[1], VAR_9);
    continue;
   } else if ((VAR_7 == 3) &&
   (FUNC_25(VAR_6[0], "positive-confidence-threshold") == 0) &&
   ((VAR_9 = FUNC_10(VAR_6[2], 1, -1)) != -1)) {
    FUNC_19(VAR_0,
     VAR_6[1], VAR_9);
    continue;
   } else if ((VAR_7 == 3) &&
   (FUNC_25(VAR_6[0], "positive-policy") == 0) &&
   (FUNC_4(VAR_6[1]) == 0) &&
   ((VAR_9 = FUNC_11(VAR_6[2])) != -1)) {
    FUNC_20(VAR_0, VAR_6[1], VAR_9);
    continue;
   } else if ((VAR_7 == 3) &&
   (FUNC_25(VAR_6[0], "perform-actual-lookups") == 0) &&
   (FUNC_4(VAR_6[1]) == 0) &&
   ((VAR_9 = FUNC_12(VAR_6[2])) != -1)) {
    FUNC_18(VAR_0, VAR_6[1],
     VAR_9);
    continue;
   }
   break;
  case 'n':
   if ((VAR_7 == 3) &&
   (FUNC_25(VAR_6[0], "negative-time-to-live") == 0) &&
   (FUNC_4(VAR_6[1]) == 0) &&
   ((VAR_9 = FUNC_10(VAR_6[2], 0, -1)) != -1)) {
    FUNC_17(VAR_0,
     VAR_6[1], VAR_9);
    continue;
   } else if ((VAR_7 == 3) &&
   (FUNC_25(VAR_6[0], "negative-confidence-threshold") == 0) &&
   ((VAR_9 = FUNC_10(VAR_6[2], 1, -1)) != -1)) {
    FUNC_15(VAR_0,
     VAR_6[1], VAR_9);
    continue;
   } else if ((VAR_7 == 3) &&
   (FUNC_25(VAR_6[0], "negative-policy") == 0) &&
   (FUNC_4(VAR_6[1]) == 0) &&
   ((VAR_9 = FUNC_11(VAR_6[2])) != -1)) {
    FUNC_16(VAR_0,
     VAR_6[1], VAR_9);
    continue;
   }
   break;
  case 's':
   if ((VAR_7 == 3) &&
   (FUNC_25(VAR_6[0], "suggested-size") == 0) &&
   (FUNC_4(VAR_6[1]) == 0) &&
   ((VAR_9 = FUNC_10(VAR_6[2], 1, -1)) != -1)) {
    FUNC_22(VAR_0, VAR_6[1], VAR_9);
    continue;
   }
   break;
  case 't':
   if ((VAR_7 == 2) &&
   (FUNC_25(VAR_6[0], "threads") == 0) &&
   ((VAR_9 = FUNC_10(VAR_6[1], 1, -1)) != -1)) {
    FUNC_23(VAR_0, VAR_9);
    continue;
   }
   break;
  case 'k':
   if ((VAR_7 == 3) &&
   (FUNC_25(VAR_6[0], "keep-hot-count") == 0) &&
   (FUNC_4(VAR_6[1]) == 0) &&
   ((VAR_9 = FUNC_10(VAR_6[2], 0, -1)) != -1)) {
    FUNC_14(VAR_0,
     VAR_6[1], VAR_9);
    continue;
   }
   break;
  case 'c':
   if ((VAR_7 == 3) &&
   (FUNC_25(VAR_6[0], "check-files") == 0) &&
   (FUNC_4(VAR_6[1]) == 0) &&
   ((VAR_9 = FUNC_12(VAR_6[2])) != -1)) {
    FUNC_5(VAR_0,
     VAR_6[1], VAR_9);
    continue;
   }
   break;
  default:
   break;
  }

  FUNC_0("config file parser", "error in file "
   "%s on line %d", VAR_1, VAR_8);
  *VAR_2 = "syntax error";
  *VAR_3 = VAR_8;
  VAR_10 = -1;
 }
 FUNC_7(VAR_4);

 FUNC_2(FUNC_26);
 return (VAR_10);
}
