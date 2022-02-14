
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct stat {int st_mode; } ;
typedef scalar_t__ regoff_t ;
struct TYPE_3__ {scalar_t__ rm_eo; scalar_t__ rm_so; } ;
typedef TYPE_1__ regmatch_t ;
typedef int regex_t ;
typedef char* ccharp ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 char* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 () ;
 char** VAR_19 ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*,...) ;
 int * FUNC_4 (char*,int,int *) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (int) ;
 int * VAR_20 ;
 int FUNC_8 (char*,char*,scalar_t__) ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (char*,char*) ;
 int FUNC_11 (char*,char*) ;
 int FUNC_12 (char) ;
 char** VAR_28 ;
 char* FUNC_13 (char*,size_t) ;
 int FUNC_14 (int *,char*,int) ;
 int FUNC_15 (int,int *,char*,int) ;
 scalar_t__ FUNC_16 (int *,char*,int,TYPE_1__*,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int,char**) ;
 int FUNC_19 (char*,int ,int) ;
 int FUNC_20 (int ,char*) ;
 char** VAR_29 ;
 int FUNC_21 (char*,char*,char*) ;
 scalar_t__ FUNC_22 (char*,struct stat*) ;
 int VAR_30 ;
 int FUNC_23 (char*,char*) ;
 char* FUNC_24 (char*,char) ;
 scalar_t__ FUNC_25 (char*,char*) ;
 int FUNC_26 (char*,char*) ;
 char* FUNC_27 (char*) ;
 int FUNC_28 (char*) ;
 scalar_t__ FUNC_29 (char*,char*,int) ;
 char* FUNC_30 (char*,char) ;

int
FUNC_31(int VAR_31, char **VAR_32)
{
 int VAR_33, VAR_34, VAR_35;
 char *VAR_36, VAR_37[VAR_0], *VAR_38, *VAR_39, *VAR_40, *VAR_41, *VAR_42;
 ccharp *VAR_43;
 size_t VAR_44, VAR_45, VAR_46;
 struct stat VAR_47;
 regex_t VAR_48, VAR_49;
 regmatch_t VAR_50[2];
 regoff_t VAR_51;
 FILE *VAR_52;

 FUNC_20(VAR_3, "");

 FUNC_18(VAR_31, VAR_32);
 FUNC_2();

 if (VAR_20 == ((void*)0))
  VAR_23 = 0;
 if (VAR_19 == ((void*)0))
  VAR_22 = 0;
 if (VAR_29 == ((void*)0))
  VAR_25 = 0;
 if (VAR_23 + VAR_22 + VAR_25 == 0)
  FUNC_3(VAR_1, "no directories to search");

 if (VAR_23) {
  FUNC_19("MANPATH", FUNC_1(VAR_20), 1);
  if ((VAR_34 = FUNC_14(&VAR_48, VAR_7, VAR_11)) != 0) {
   FUNC_15(VAR_34, &VAR_48, VAR_37, VAR_0 - 1);
   FUNC_3(VAR_2, "regcomp(%s) failed: %s",
        VAR_7, VAR_37);
  }
 }

 for (; (VAR_41 = *VAR_28) != ((void*)0); VAR_28++) {

  if ((VAR_38 = FUNC_30(VAR_41, '/')) != ((void*)0))
   VAR_41 = VAR_38 + 1;

  if (FUNC_28(VAR_41) > 2 && FUNC_29(VAR_41, "s.", 2) == 0)
   VAR_41 += 2;
  if ((VAR_46 = FUNC_28(VAR_41)) > 2 && FUNC_25(VAR_41 + VAR_46 - 2, ",v") == 0)
   VAR_41[VAR_46 - 2] = '\0';

  VAR_46 = FUNC_28(VAR_41);
  if (VAR_46 > 2 &&
      (FUNC_25(VAR_41 + VAR_46 - 2, ".z") == 0 ||
       FUNC_25(VAR_41 + VAR_46 - 2, ".Z") == 0))
   VAR_41[VAR_46 - 2] = '\0';
  else if (VAR_46 > 3 &&
    FUNC_25(VAR_41 + VAR_46 - 3, ".gz") == 0)
   VAR_41[VAR_46 - 3] = '\0';
  else if (VAR_46 > 4 &&
    FUNC_25(VAR_41 + VAR_46 - 4, ".bz2") == 0)
   VAR_41[VAR_46 - 4] = '\0';

  VAR_33 = 0;
  VAR_36 = VAR_40 = VAR_42 = ((void*)0);
  VAR_46 = FUNC_28(VAR_41);

  if (VAR_22) {




   VAR_33 = VAR_33 | VAR_8;
   for (VAR_43 = VAR_19; *VAR_43 != ((void*)0); VAR_43++) {
    VAR_38 = FUNC_7(FUNC_28(*VAR_43) + 1 + VAR_46 + 1);
    if (VAR_38 == ((void*)0))
     FUNC_0();
    FUNC_26(VAR_38, *VAR_43);
    FUNC_23(VAR_38, "/");
    FUNC_23(VAR_38, VAR_41);
    if (FUNC_22(VAR_38, &VAR_47) == 0 &&
        (VAR_47.st_mode & VAR_14) == VAR_15 &&
        (VAR_47.st_mode & (VAR_18 | VAR_16 | VAR_17))
        != 0) {
     VAR_33 = VAR_33 & ~VAR_8;
     if (VAR_36 == ((void*)0)) {
      VAR_36 = FUNC_27(VAR_38);
     } else {
      VAR_45 = FUNC_28(VAR_36);
      VAR_44 = FUNC_28(VAR_38);
      VAR_36 = FUNC_13(VAR_36,
             VAR_45 + VAR_44 + 2);
      if (VAR_36 == ((void*)0))
       FUNC_0();
      FUNC_23(VAR_36, " ");
      FUNC_23(VAR_36, VAR_38);
     }
     if (!VAR_21) {
      FUNC_6(VAR_38);
      break;
     }
    }
    FUNC_6(VAR_38);
   }
  }

  if (VAR_23) {



   VAR_33 = VAR_33 | VAR_9;
   if (VAR_21)
    VAR_38 = FUNC_7(sizeof VAR_5 - 2 + VAR_46);
   else
    VAR_38 = FUNC_7(sizeof VAR_6 - 2 + VAR_46);

   if (VAR_38 == ((void*)0))
    FUNC_0();

   if (VAR_21)
    FUNC_21(VAR_38, VAR_5, VAR_41);
   else
    FUNC_21(VAR_38, VAR_6, VAR_41);

   if ((VAR_52 = FUNC_10(VAR_38, "r")) != ((void*)0)) {

    while (FUNC_4(VAR_37, VAR_0 - 1, VAR_52) != ((void*)0)) {
     VAR_33 = VAR_33 & ~VAR_9;

     if ((VAR_39 = FUNC_24(VAR_37, '\n')) != ((void*)0))
      *VAR_39 = '\0';
     if (FUNC_16(&VAR_48, VAR_37, 2,
          VAR_50, 0) == 0 &&
         (VAR_51 = VAR_50[1].rm_eo -
          VAR_50[1].rm_so) > 0) {





      VAR_39 = FUNC_7(VAR_51 + 1);
      if (VAR_39 == ((void*)0))
       FUNC_0();
      FUNC_8(VAR_39,
             VAR_37 + VAR_50[1].rm_so,
             VAR_51);
      VAR_39[VAR_51] = '\0';
     } else {




      VAR_39 = FUNC_27(VAR_37);
      if (VAR_39 == ((void*)0))
       FUNC_0();
     }

     if (VAR_40 == ((void*)0)) {
      VAR_40 = FUNC_27(VAR_39);
     } else {
      VAR_45 = FUNC_28(VAR_40);
      VAR_44 = FUNC_28(VAR_39);
      VAR_40 = FUNC_13(VAR_40,
             VAR_45 + VAR_44 + 2);
      if (VAR_40 == ((void*)0))
       FUNC_0();
      FUNC_23(VAR_40, " ");
      FUNC_23(VAR_40, VAR_39);
     }

     FUNC_6(VAR_39);

     if (!VAR_21)
      break;
    }
    FUNC_9(VAR_52);
    FUNC_6(VAR_38);
   }
  }

  if (VAR_25) {




   VAR_33 = VAR_33 | VAR_10;
   for (VAR_43 = VAR_29; *VAR_43 != ((void*)0); VAR_43++) {
    VAR_38 = FUNC_7(FUNC_28(*VAR_43) + 1 + VAR_46 + 1);
    if (VAR_38 == ((void*)0))
     FUNC_0();
    FUNC_26(VAR_38, *VAR_43);
    FUNC_23(VAR_38, "/");
    FUNC_23(VAR_38, VAR_41);
    if (FUNC_22(VAR_38, &VAR_47) == 0 &&
        (VAR_47.st_mode & VAR_14) == VAR_13) {
     VAR_33 = VAR_33 & ~VAR_10;
     if (VAR_42 == ((void*)0)) {
      VAR_42 = FUNC_27(VAR_38);
     } else {
      VAR_45 = FUNC_28(VAR_42);
      VAR_44 = FUNC_28(VAR_38);
      VAR_42 = FUNC_13(VAR_42,
             VAR_45 + VAR_44 + 2);
      if (VAR_42 == ((void*)0))
       FUNC_0();
      FUNC_23(VAR_42, " ");
      FUNC_23(VAR_42, VAR_38);
     }
     if (!VAR_21) {
      FUNC_6(VAR_38);
      break;
     }
    }
    FUNC_6(VAR_38);
   }
   if (VAR_27 || (VAR_42 && !VAR_21))
    goto done_sources;

   VAR_38 = FUNC_7(sizeof VAR_4 - 2 + VAR_46);
   if (VAR_38 == ((void*)0))
    FUNC_0();
   FUNC_21(VAR_38, VAR_4, VAR_41);
   if ((VAR_52 = FUNC_10(VAR_38, "r")) == ((void*)0))
    goto done_sources;
   while ((VAR_42 == ((void*)0) || VAR_21) &&
          (FUNC_4(VAR_37, VAR_0 - 1, VAR_52)) != ((void*)0)) {
    if ((VAR_39 = FUNC_24(VAR_37, '\n')) != ((void*)0))
     *VAR_39 = '\0';
    for (VAR_43 = VAR_29;
         (VAR_42 == ((void*)0) || VAR_21) && *VAR_43 != ((void*)0);
         VAR_43++) {
     VAR_39 = FUNC_7(FUNC_28(*VAR_43) + 9);
     if (VAR_39 == ((void*)0))
      FUNC_0();
     FUNC_26(VAR_39, "^");
     FUNC_23(VAR_39, *VAR_43);
     FUNC_23(VAR_39, "/[^/]+/");
     if ((VAR_34 = FUNC_14(&VAR_49, VAR_39,
        VAR_11|VAR_12))
         != 0) {
      FUNC_15(VAR_34, &VAR_48, VAR_37,
        VAR_0 - 1);
      FUNC_3(VAR_2,
           "regcomp(%s) failed: %s",
           VAR_39, VAR_37);
     }
     FUNC_6(VAR_39);
     if (FUNC_16(&VAR_49, VAR_37, 0,
          (regmatch_t *)((void*)0), 0)
         == 0) {
      VAR_33 = VAR_33 &
                ~VAR_10;
      if (VAR_42 == ((void*)0)) {
       VAR_42 = FUNC_27(VAR_37);
      } else {
       VAR_45 = FUNC_28(VAR_42);
       VAR_44 = FUNC_28(VAR_37);
       VAR_42 = FUNC_13(VAR_42,
              VAR_45 +
              VAR_44 + 2);
       if (VAR_42 == ((void*)0))
        FUNC_0();
       FUNC_23(VAR_42, " ");
       FUNC_23(VAR_42, VAR_37);
      }
     }
     FUNC_17(&VAR_49);
    }
   }
   FUNC_9(VAR_52);
   FUNC_6(VAR_38);
  }
   done_sources:

  if (VAR_26 && !VAR_33)
   continue;

  VAR_35 = 0;
  if (!VAR_24) {
   FUNC_11("%s:", VAR_41);
   VAR_35++;
  }
  if (VAR_36) {
   if (VAR_35++)
    FUNC_12(' ');
   FUNC_5(VAR_36, VAR_30);
  }
  if (VAR_40) {
   if (VAR_35++)
    FUNC_12(' ');
   FUNC_5(VAR_40, VAR_30);
  }
  if (VAR_42) {
   if (VAR_35++)
    FUNC_12(' ');
   FUNC_5(VAR_42, VAR_30);
  }
  if (VAR_35)
   FUNC_12('\n');
 }

 if (VAR_23)
  FUNC_17(&VAR_48);

 return (0);
}
