
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int buf ;
struct TYPE_5__ {int st_mode; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;







 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 scalar_t__ VAR_29 ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,char*,int,int) ;
 int FUNC_3 (int,char*,...) ;
 int FUNC_4 (int,char*,...) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,TYPE_1__*) ;
 int FUNC_7 (int,char**,int ,int ,int *) ;
 int * VAR_30 ;
 int * VAR_31 ;
 int VAR_32 ;
 char* VAR_33 ;
 int VAR_34 ;
 int FUNC_8 (int) ;
 int ** VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int * VAR_38 ;
 int VAR_39 ;
 int FUNC_9 (char*,int *) ;
 int FUNC_10 (int ,char*,char*,char*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,char*,int) ;
 int FUNC_15 (int,int *,char*,int) ;
 int VAR_40 ;
 int FUNC_16 (char**,char**) ;
 int VAR_41 ;
 char* FUNC_17 (char*,char*) ;
 int * VAR_42 ;
 scalar_t__ FUNC_18 (char*,TYPE_1__*) ;
 int VAR_43 ;
 TYPE_1__ VAR_44 ;
 TYPE_1__ VAR_45 ;
 scalar_t__ FUNC_19 (char*,char*) ;
 long FUNC_20 (int *,char**,int) ;
 scalar_t__ FUNC_21 (int *,int,int,char const**) ;
 int VAR_46 ;
 int FUNC_22 () ;
 int FUNC_23 (char*) ;

int
FUNC_24(int VAR_47, char **VAR_48)
{
 const char *VAR_49 = ((void*)0);
 char *VAR_50, **VAR_51;
 long VAR_52;
 int VAR_53, VAR_54, VAR_55, VAR_56, VAR_57, VAR_58;

 VAR_51 = VAR_48;
 VAR_56 = 0;
 VAR_54 = 0;
 VAR_55 = '\0';
 VAR_57 = 1;
 VAR_58 = 1;
 VAR_28 = 3;
 VAR_29 = 0;
 while ((VAR_53 = FUNC_7(VAR_47, VAR_48, VAR_21, VAR_37, ((void*)0))) != -1) {
  switch (VAR_53) {
  case '0': case '1': case '2': case '3': case '4':
  case '5': case '6': case '7': case '8': case '9':
   if (VAR_58)
    FUNC_22();
   else if (VAR_55 == 'c' || VAR_55 == 'u')
    VAR_28 = 0;
   else if (!FUNC_8(VAR_55) || VAR_28 > VAR_19 / 10)
    FUNC_22();
   VAR_28 = (VAR_28 * 10) + (VAR_53 - '0');
   break;
  case 'a':
   VAR_54 |= VAR_6;
   break;
  case 'b':
   VAR_54 |= VAR_5;
   break;
  case 'C':
  case 'c':
   VAR_27 = 1;
   VAR_29 = VAR_2;
   if (VAR_38 != ((void*)0)) {
    VAR_52 = FUNC_20(VAR_38, &VAR_50, 10);
    if (*VAR_50 != '\0' || VAR_52 < 0 || VAR_52 >= VAR_19)
     FUNC_22();
    VAR_28 = (int)VAR_52;
   }
   break;
  case 'd':
   VAR_54 |= VAR_11;
   break;
  case 'D':
   VAR_29 = VAR_8;
   VAR_31 = VAR_38;
   break;
  case 'e':
   VAR_29 = VAR_3;
   break;
  case 'f':
   VAR_29 = VAR_15;
   break;
  case 'H':

   break;
  case 'h':

   break;
  case 'B':
   VAR_54 |= VAR_16;
   break;
  case 'I':
   FUNC_12(VAR_38);
   break;
  case 'i':
   VAR_54 |= VAR_10;
   break;
  case 'L':
   if (VAR_35[0] == ((void*)0))
    VAR_35[0] = VAR_38;
   else if (VAR_35[1] == ((void*)0))
    VAR_35[1] = VAR_38;
   else
    FUNC_22();
   break;
  case 'l':
   VAR_36 = 1;
   break;
  case 'N':
   VAR_20 = 1;
   break;
  case 'n':
   VAR_29 = VAR_13;
   break;
  case 'p':
   if (VAR_29 == 0)
    VAR_29 = VAR_2;
   VAR_54 |= VAR_14;
   break;
  case 'P':
   VAR_22 = 1;
   break;
  case 'r':
   VAR_40 = 1;
   break;
  case 'q':
   VAR_29 = VAR_1;
   break;
  case 'S':
   VAR_42 = VAR_38;
   break;
  case 's':
   VAR_41 = 1;
   break;
  case 'T':
   VAR_26 = 1;
   break;
  case 't':
   VAR_54 |= VAR_4;
   break;
  case 'U':
  case 'u':
   VAR_29 = VAR_18;
   if (VAR_38 != ((void*)0)) {
    VAR_52 = FUNC_20(VAR_38, &VAR_50, 10);
    if (*VAR_50 != '\0' || VAR_52 < 0 || VAR_52 >= VAR_19)
     FUNC_22();
    VAR_28 = (int)VAR_52;
   }
   break;
  case 'w':
   VAR_54 |= VAR_9;
   break;
  case 'X':
   FUNC_13(VAR_38);
   break;
  case 'x':
   FUNC_11(VAR_38);
   break;
  case 134:
   VAR_29 = VAR_7;
   VAR_30 = VAR_38;
   break;
  case 133:
   break;
  case 132:
   VAR_32 = 1;
   break;
  case 130:
   VAR_32 = 0;
   break;
  case 131:
   VAR_29 = VAR_12;
   break;
  case 128:
   VAR_46 = (int) FUNC_21(VAR_38, 1, VAR_19, &VAR_49);
   if (VAR_49) {
    FUNC_23("Invalid argument for tabsize");
    FUNC_22();
   }
   break;
  case 129:
   VAR_54 |= VAR_17;
   break;
  default:
   FUNC_22();
   break;
  }
  VAR_55 = VAR_53;
  VAR_58 = VAR_39 != VAR_57;
  VAR_57 = VAR_39;
 }
 VAR_47 -= VAR_39;
 VAR_48 += VAR_39;
 if (VAR_47 != 2)
  FUNC_22();
 if (VAR_33 != ((void*)0)) {
  char VAR_59[VAR_0];
  int VAR_60;

  if ((VAR_60 = FUNC_14(&VAR_34, VAR_33,
         VAR_24 | VAR_23)) != 0) {
   FUNC_15(VAR_60, &VAR_34, VAR_59, sizeof(VAR_59));
   if (*VAR_33 != '\0')
    FUNC_4(2, "%s: %s", VAR_33, VAR_59);
   else
    FUNC_4(2, "%s", VAR_59);
  }
 }
 if (FUNC_19(VAR_48[0], "-") == 0) {
  FUNC_6(VAR_25, &VAR_44);
  VAR_56 = 1;
 } else if (FUNC_18(VAR_48[0], &VAR_44) != 0)
  FUNC_3(2, "%s", VAR_48[0]);
 if (FUNC_19(VAR_48[1], "-") == 0) {
  FUNC_6(VAR_25, &VAR_45);
  VAR_56 = 1;
 } else if (FUNC_18(VAR_48[1], &VAR_45) != 0)
  FUNC_3(2, "%s", VAR_48[1]);
 if (VAR_56 && (FUNC_0(VAR_44) || FUNC_0(VAR_45)))
  FUNC_4(2, "can't compare - to a directory");
 FUNC_16(VAR_51, VAR_48);
 if (FUNC_0(VAR_44) && FUNC_0(VAR_45)) {
  if (VAR_29 == VAR_8)
   FUNC_4(2, "-D option not supported with directories");
  FUNC_1(VAR_48[0], VAR_48[1], VAR_54);
 } else {
  if (FUNC_0(VAR_44)) {
   VAR_48[0] = FUNC_17(VAR_48[0], VAR_48[1]);
   if (FUNC_18(VAR_48[0], &VAR_44) < 0)
    FUNC_3(2, "%s", VAR_48[0]);
  }
  if (FUNC_0(VAR_45)) {
   VAR_48[1] = FUNC_17(VAR_48[1], VAR_48[0]);
   if (FUNC_18(VAR_48[1], &VAR_45) < 0)
    FUNC_3(2, "%s", VAR_48[1]);
  }
  FUNC_10(FUNC_2(VAR_48[0], VAR_48[1], VAR_54, 1), VAR_48[0],
      VAR_48[1], "");
 }
 FUNC_5(VAR_43);
}
