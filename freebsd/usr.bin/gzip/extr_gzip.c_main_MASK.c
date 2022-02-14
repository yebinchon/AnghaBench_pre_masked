
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* zipped; int ziplen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int,char*,char*) ;
 int FUNC_3 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int ,char*,char const*) ;
 char* FUNC_5 (char*) ;
 int FUNC_6 (int,char**,int ,int ,int *) ;
 char* FUNC_7 () ;
 int FUNC_8 (char*) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 char* VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_11 (char*,int*,char***) ;
 int FUNC_12 (int,int ,char*,int ) ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int FUNC_13 () ;
 int VAR_17 ;
 scalar_t__ FUNC_14 (char const*,char*) ;
 int FUNC_15 (char*) ;
 TYPE_1__* VAR_18 ;
 int VAR_19 ;
 int FUNC_16 () ;
 int VAR_20 ;

int
FUNC_17(int VAR_21, char **VAR_22)
{
 const char *VAR_23 = FUNC_7();

 char *VAR_24;
 int VAR_25;

 int VAR_26;

 FUNC_13();


 if ((VAR_24 = FUNC_5("GZIP")) != ((void*)0))
  FUNC_11(VAR_24, &VAR_21, &VAR_22);






 if (FUNC_14(VAR_23, "gunzip") == 0)
  VAR_5 = 1;
 else if (FUNC_14(VAR_23, "zcat") == 0 ||
   FUNC_14(VAR_23, "gzcat") == 0)
  VAR_5 = VAR_4 = 1;







 while ((VAR_26 = FUNC_6(VAR_21, VAR_22, "123456789acdfhklLNnqrS:tVv", VAR_10, ((void*)0))) != -1) {
  switch (VAR_26) {
  case '1': case '2': case '3':
  case '4': case '5': case '6':
  case '7': case '8': case '9':
   VAR_12 = VAR_26 - '0';
   break;
  case 'c':
   VAR_4 = 1;
   break;
  case 'd':
   VAR_5 = 1;
   break;
  case 'l':
   VAR_9 = 1;
   VAR_5 = 1;
   break;
  case 'V':
   FUNC_1();


  case 'a':
   FUNC_4(VAR_17, "%s: option --ascii ignored on this system\n", VAR_23);
   break;
  case 'f':
   VAR_7 = 1;
   break;
  case 'k':
   VAR_8 = 1;
   break;
  case 'L':
   FUNC_0();

  case 'N':
   VAR_11 = 0;
   VAR_1 = 1;
   break;
  case 'n':
   VAR_11 = 1;
   VAR_1 = 0;
   break;
  case 'q':
   VAR_15 = 1;
   break;
  case 'r':
   VAR_16 = 1;
   break;
  case 'S':
   VAR_25 = FUNC_15(VAR_13);
   if (VAR_25 != 0) {
    if (VAR_25 > VAR_3)
     FUNC_2(1, "incorrect suffix: '%s': too long", VAR_13);
    VAR_18[0].zipped = VAR_13;
    VAR_18[0].ziplen = VAR_25;
   } else {
    VAR_18[VAR_0 - 1].zipped = "";
    VAR_18[VAR_0 - 1].ziplen = 0;
   }
   break;
  case 't':
   VAR_4 = 1;
   VAR_19 = 1;
   VAR_5 = 1;
   break;
  case 'v':
   VAR_20 = 1;
   break;

  default:
   FUNC_16();

  }
 }
 VAR_22 += VAR_14;
 VAR_21 -= VAR_14;

 if (VAR_21 == 0) {
  if (VAR_5)
   FUNC_9();
  else
   FUNC_10();
 } else {
  do {
   FUNC_8(VAR_22[0]);
  } while (*++VAR_22);
 }

 if (VAR_15 == 0 && VAR_9 && VAR_21 > 1)
  FUNC_12(-1, 0, "(totals)", 0);

 FUNC_3(VAR_6);
}
