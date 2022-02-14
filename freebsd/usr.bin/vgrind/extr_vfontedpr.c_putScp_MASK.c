
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 char* FUNC_0 (char*,int ,char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (char*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__* VAR_23 ;
 char* VAR_24 ;
 int VAR_25 ;
 int FUNC_2 (char*) ;
 size_t VAR_26 ;
 char** VAR_27 ;
 int FUNC_3 (char*,char*,int) ;
 char* VAR_28 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,size_t) ;

__attribute__((used)) static void
FUNC_6(char *VAR_29)
{
    register char *VAR_30 = VAR_29;
    char VAR_31[VAR_1];
    char *VAR_32;
    char *VAR_33;
    char *VAR_34;
    char *VAR_35;
    char *VAR_36;
    char *VAR_37;
    char *VAR_38;

    VAR_28 = VAR_29;
    VAR_5 = 0;
    if (VAR_22 || VAR_9 || VAR_10)
 goto skip;
    if (FUNC_1(VAR_30)) {
 FUNC_2("'FN ");
 FUNC_2(VAR_24);
        FUNC_2("\n");
 if (VAR_26 < VAR_3) {
     ++VAR_26;
     FUNC_5 (VAR_27[VAR_26], VAR_24, VAR_2);
     VAR_27[VAR_26][VAR_2] = '\0';
     VAR_23[VAR_26] = VAR_6;
 }
    }
skip:
    do {

 if (!VAR_9 && !VAR_10 && !VAR_8) {

     VAR_37 = FUNC_0(VAR_30, VAR_14, VAR_31);
     VAR_36 = FUNC_0(VAR_30, VAR_13, VAR_31);
     VAR_32 = FUNC_0(VAR_30, VAR_17, VAR_31);
     VAR_33 = FUNC_0(VAR_30, VAR_11, VAR_31);
     VAR_34 = FUNC_0(VAR_30, VAR_20, VAR_31);
     VAR_35 = FUNC_0(VAR_30, VAR_15, VAR_31);
     VAR_38 = FUNC_0 (VAR_30, VAR_19, VAR_31);


     if (VAR_38 != ((void*)0))
  if ((VAR_38 <= VAR_32 || VAR_32 == ((void*)0))
    && (VAR_38 <= VAR_33 || VAR_33 == ((void*)0))) {

      FUNC_3 (VAR_30, VAR_38-1, 0);
      VAR_30 = VAR_38;
      continue;
  }


     if (VAR_32 != ((void*)0))
  if ((VAR_32 < VAR_34 || VAR_34 == ((void*)0))
    && (VAR_32 < VAR_33 || VAR_33 == ((void*)0))
    && (VAR_32 < VAR_35 || VAR_35 == ((void*)0))
    && (VAR_32 < VAR_36 || VAR_36 == ((void*)0))
    && (VAR_32 < VAR_37 || VAR_37 == ((void*)0))) {
      FUNC_3(VAR_30, VAR_32-1, 0);
      VAR_30 = VAR_32;
      VAR_9 = 1;
      VAR_7 = VAR_4;
      if (VAR_30 != VAR_29)
   FUNC_2("\\c");
      FUNC_2("\\c\n'+C\n");
      continue;
  }


     if (VAR_33 != ((void*)0))
  if ((VAR_33 < VAR_34 || VAR_34 == ((void*)0))
    && (VAR_33 < VAR_35 || VAR_35 == ((void*)0))
    && (VAR_33 < VAR_36 || VAR_36 == ((void*)0))
    && (VAR_33 < VAR_37 || VAR_37 == ((void*)0))) {
      FUNC_3(VAR_30, VAR_33-1, 0);
      VAR_30 = VAR_33;
      VAR_9 = 1;
      VAR_7 = VAR_0;
      if (VAR_30 != VAR_29)
   FUNC_2("\\c");
      FUNC_2("\\c\n'+C\n");
      continue;
  }


     if (VAR_34 != ((void*)0))
  if ((VAR_34 < VAR_35 || VAR_35 == ((void*)0))
    && (VAR_34 < VAR_36 || VAR_36 == ((void*)0))
    && (VAR_34 < VAR_37 || VAR_37 == ((void*)0))) {
      FUNC_3(VAR_30, VAR_34-1, 0);
      VAR_30 = VAR_34;
      VAR_10 = 1;
      continue;
  }


     if (VAR_35 != ((void*)0))
  if ((VAR_35 < VAR_36 || VAR_36 == ((void*)0))
    && (VAR_35 < VAR_37 || VAR_37 == ((void*)0))) {
      FUNC_3(VAR_30, VAR_35-1, 0);
      VAR_30 = VAR_35;
      VAR_8 = 1;
      continue;
  }


     if (VAR_37 != ((void*)0)) {
  if (VAR_37 < VAR_36 || VAR_36 == ((void*)0)) {
      FUNC_3(VAR_30, VAR_37 - 1, 0);
      VAR_30 = VAR_37;
      if (VAR_6 > 0 )
       VAR_6--;
      if (VAR_26 >= 0 && VAR_23[VAR_26] >= VAR_6) {


   if (VAR_30 != VAR_29)
       FUNC_2("\\c");
   FUNC_2("\\c\n'-F\n");
   VAR_6 = VAR_23[VAR_26];


   if (--VAR_26 >= 0)
       VAR_25 = 1;
   else
       VAR_26 = -1;
      }
      continue;
  }
     }


     if (VAR_36 != ((void*)0)) {
  FUNC_3(VAR_30, VAR_36 - 1, 0);
  VAR_30 = VAR_36;
  VAR_6++;
  continue;
     }


 } else if (VAR_9) {
     VAR_32 = FUNC_0(VAR_30, VAR_18, VAR_31);
     VAR_33 = FUNC_0(VAR_30, VAR_12, VAR_31);
     if (((VAR_7 == VAR_4) && (VAR_32 != ((void*)0))) ||
         ((VAR_7 == VAR_0) && (VAR_33 != ((void*)0)))) {
  if (VAR_7 == VAR_4) {
      FUNC_3(VAR_30, VAR_32-1, 1);
      VAR_30 = VAR_32;
  } else {
      FUNC_3(VAR_30, VAR_33-1, 1);
      VAR_30 = VAR_33;
  }
  VAR_9 = 0;
  FUNC_2("\\c\n'-C\n");
  continue;
     } else {
  FUNC_3(VAR_30, VAR_30 + FUNC_4(VAR_30) -1, 1);
  VAR_30 = VAR_30 + FUNC_4(VAR_30);
  continue;
     }


 } else if (VAR_10) {
     if ((VAR_34 = FUNC_0(VAR_30, VAR_21, VAR_31)) != ((void*)0)) {
  FUNC_3(VAR_30, VAR_34-1, 1);
  VAR_30 = VAR_34;
  VAR_10 = 0;
  continue;
     } else {
  FUNC_3(VAR_30, VAR_30+FUNC_4(VAR_30)-1, 1);
  VAR_30 = VAR_30 + FUNC_4(VAR_30);
  continue;
     }


 } else if (VAR_8) {
     if ((VAR_35 = FUNC_0(VAR_30, VAR_16, VAR_31)) != ((void*)0)) {
  FUNC_3(VAR_30, VAR_35-1, 1);
  VAR_30 = VAR_35;
  VAR_8 = 0;
  continue;
     } else {
  FUNC_3(VAR_30, VAR_30+FUNC_4(VAR_30)-1, 1);
  VAR_30 = VAR_30 + FUNC_4(VAR_30);
  continue;
     }
 }


 FUNC_3(VAR_30, VAR_30 + FUNC_4(VAR_30) -1, 0);
 VAR_30 = VAR_30 + FUNC_4(VAR_30);
    } while (*VAR_30);
}
