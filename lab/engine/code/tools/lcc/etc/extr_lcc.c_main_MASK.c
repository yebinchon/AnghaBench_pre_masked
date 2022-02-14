
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* str; struct TYPE_3__* link; } ;
typedef TYPE_1__* List ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (char*) ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (char*,scalar_t__) ;
 int FUNC_3 (char*) ;
 int VAR_9 ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ VAR_10 ;
 int FUNC_5 (int ,scalar_t__,scalar_t__,scalar_t__) ;
 char* FUNC_6 (char*,int ) ;
 scalar_t__ VAR_11 ;
 int FUNC_7 (char*,char*) ;
 char* FUNC_8 (char*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,char*,char*,...) ;
 char* FUNC_13 (char*) ;
 int FUNC_14 () ;
 TYPE_1__* VAR_12 ;
 char** VAR_13 ;
 int FUNC_15 () ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 scalar_t__* VAR_16 ;
 int FUNC_16 (char*) ;
 int FUNC_17 (int ) ;
 char* VAR_17 ;
 scalar_t__ VAR_18 ;
 char* VAR_19 ;
 int FUNC_18 (int ) ;
 int VAR_20 ;
 scalar_t__ FUNC_19 (int ,scalar_t__) ;
 int VAR_21 ;
 scalar_t__ FUNC_20 (char*,char*) ;
 int FUNC_21 (char*,char*) ;
 int FUNC_22 (char*) ;
 scalar_t__ FUNC_23 (char*,int *,int) ;
 int * VAR_22 ;
 char* VAR_23 ;

int FUNC_24(int VAR_24, char *VAR_25[]) {
 int VAR_26, VAR_27, VAR_28;

 VAR_19 = VAR_25[0];

 FUNC_0( VAR_19 );

 VAR_8 = VAR_24 + 50;
 VAR_9 = FUNC_1(VAR_8*sizeof(char *));
 if (FUNC_19(VAR_4, VAR_6) != VAR_6)
  FUNC_19(VAR_4, VAR_14);
 if (FUNC_19(VAR_5, VAR_6) != VAR_6)
  FUNC_19(VAR_5, VAR_14);




 if (FUNC_13("TMP"))
  VAR_23 = FUNC_13("TMP");
 else if (FUNC_13("TEMP"))
  VAR_23 = FUNC_13("TEMP");
 else if (FUNC_13("TMPDIR"))
  VAR_23 = FUNC_13("TMPDIR");
 FUNC_3(VAR_23);
 VAR_26 = FUNC_22(VAR_23);
 for (; (VAR_26 > 0 && VAR_23[VAR_26-1] == '/') || VAR_23[VAR_26-1] == '\\'; VAR_26--)
  VAR_23[VAR_26-1] = '\0';
 if (VAR_24 <= 1) {
  FUNC_14();
  FUNC_9(0);
 }
 VAR_18 = FUNC_2("-D__LCC__", 0);
 FUNC_15();
 if (FUNC_13("LCCDIR"))
  FUNC_17(FUNC_21("-lccdir=%s", FUNC_13("LCCDIR")));
 for (VAR_28 = 0, VAR_26 = VAR_27 = 1; VAR_26 < VAR_24; VAR_26++) {
  if (FUNC_20(VAR_25[VAR_26], "-o") == 0) {
   if (++VAR_26 < VAR_24) {
    if (FUNC_23(VAR_25[VAR_26], VAR_22, 2) >= 0) {
     FUNC_7("-o would overwrite %s", VAR_25[VAR_26]);
     FUNC_9(8);
    }
    VAR_17 = VAR_25[VAR_26];
    continue;
   } else {
    FUNC_7("unrecognized option `%s'", VAR_25[VAR_26-1]);
    FUNC_9(8);
   }
  } else if (FUNC_20(VAR_25[VAR_26], "-target") == 0) {
   if (VAR_25[VAR_26+1] && *VAR_25[VAR_26+1] != '-')
    VAR_26++;
   continue;
  } else if (*VAR_25[VAR_26] == '-' && VAR_25[VAR_26][1] != 'l') {
   FUNC_16(VAR_25[VAR_26]);
   continue;
  } else if (*VAR_25[VAR_26] != '-' && FUNC_23(VAR_25[VAR_26], VAR_22, 3) >= 0)
   VAR_28++;
  VAR_25[VAR_27++] = VAR_25[VAR_26];
 }
 if ((VAR_10 || VAR_7) && VAR_17 && VAR_28 != 1) {
  FUNC_12(VAR_21, "%s: -o %s ignored\n", VAR_19, VAR_17);
  VAR_17 = 0;
 }
 VAR_25[VAR_27] = 0;
 for (VAR_26 = 0; VAR_13[VAR_26]; VAR_26++)
  VAR_18 = FUNC_2(VAR_13[VAR_26], VAR_18);
 if (VAR_12) {
  List VAR_29 = VAR_12;
  do {
   VAR_29 = VAR_29->link;
   VAR_18 = FUNC_2(VAR_29->str, VAR_18);
  } while (VAR_29 != VAR_12);
 }
 VAR_12 = 0;
 for (VAR_26 = 1; VAR_25[VAR_26]; VAR_26++)
  if (*VAR_25[VAR_26] == '-')
   FUNC_16(VAR_25[VAR_26]);
  else {
   char *VAR_30 = FUNC_8(VAR_25[VAR_26]);
   if (VAR_30) {
    if (FUNC_20(VAR_30, VAR_25[VAR_26]) != 0
    || (VAR_28 > 1 && FUNC_23(VAR_30, VAR_22, 3) >= 0))
     FUNC_12(VAR_21, "%s:\n", VAR_30);
    FUNC_10(VAR_30, 0);
   } else
    FUNC_7("can't find `%s'", VAR_25[VAR_26]);
  }
 if (VAR_11 == 0 && !VAR_2 && !VAR_7 && !VAR_10 && VAR_16[1]) {
  FUNC_5(VAR_15, VAR_16[0], VAR_16[1],
   FUNC_2(VAR_17 ? VAR_17 : FUNC_6("a", FUNC_11(VAR_22[4])), 0));
  if (FUNC_4(VAR_9))
   VAR_11++;
 }
 FUNC_18(VAR_20);
 return VAR_11 ? VAR_0 : VAR_1;
}
