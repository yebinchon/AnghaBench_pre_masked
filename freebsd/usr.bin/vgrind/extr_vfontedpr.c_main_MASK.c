
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mtime; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int * FUNC_0 (char*,char*,char) ;
 int FUNC_1 (char**,char**,char*) ;
 int FUNC_2 (char*,char*,char**) ;
 void* FUNC_3 (char*) ;
 char* FUNC_4 (int *) ;
 char** VAR_4 ;
 int FUNC_5 (int,char*,char*) ;
 int FUNC_6 (int ) ;
 int * FUNC_7 (char*,int,int ) ;
 int FUNC_8 (int ) ;
 int VAR_5 ;
 int FUNC_9 (int ,char*,char*) ;
 int * FUNC_10 (char*,char*,int ) ;
 int FUNC_11 (int ,struct stat*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 char VAR_18 ;
 char** VAR_19 ;
 void* VAR_20 ;
 int VAR_21 ;
 void* VAR_22 ;
 void* VAR_23 ;
 void* VAR_24 ;
 int VAR_25 ;
 char* VAR_26 ;
 scalar_t__ VAR_27 ;
 char* VAR_28 ;
 char* VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 scalar_t__* VAR_32 ;
 int VAR_33 ;
 int FUNC_12 (char*,...) ;
 int FUNC_13 (char*) ;
 size_t VAR_34 ;
 char** VAR_35 ;
 int FUNC_14 (char*) ;
 int VAR_36 ;
 int VAR_37 ;
 int FUNC_15 (char*,char*) ;
 int FUNC_16 (char*,char*,int) ;

int
FUNC_17(int VAR_38, char **VAR_39)
{
    const char *VAR_40 = "";
    struct stat VAR_41;
    char VAR_42[VAR_0];
    char *VAR_43;
    int VAR_44 = 0;

    VAR_38--, VAR_39++;
    do {
 char *VAR_45;
 int VAR_46;

 if (VAR_38 > 0) {
     if (!FUNC_15(VAR_39[0], "-h")) {
  if (VAR_38 == 1) {
      FUNC_12("'ds =H\n");
      VAR_38 = 0;
      goto rest;
  }
  FUNC_12("'ds =H %s\n", VAR_39[1]);
  VAR_38--, VAR_39++;
  VAR_38--, VAR_39++;
  if (VAR_38 > 0)
      continue;
  goto rest;
     }


     if (!FUNC_15(VAR_39[0], "-f")) {
  VAR_5 = 1;
  VAR_39[0] = VAR_39[VAR_38-1];
  VAR_39[VAR_38-1] = VAR_28;
  continue;
     }


     if (!FUNC_15(VAR_39[0], "-")) {
  VAR_38 = 0;
  goto rest;
     }


     if (!FUNC_15(VAR_39[0], "-x")) {
  VAR_6 = 1;
  VAR_39[0] = VAR_29;
     }


     if (!FUNC_15(VAR_39[0], "-n")) {
  VAR_30 = 1;
  VAR_38--, VAR_39++;
  continue;
     }


     if (!FUNC_16(VAR_39[0], "-s", 2)) {
  VAR_46 = 0;
  VAR_45 = VAR_39[0] + 2;
  while (*VAR_45)
      VAR_46 = VAR_46 * 10 + (*VAR_45++ - '0');
  FUNC_12("'ps %d\n'vs %d\n", VAR_46, VAR_46+1);
  VAR_38--, VAR_39++;
  continue;
     }


     if (!FUNC_16(VAR_39[0], "-l", 2)) {
  VAR_26 = VAR_39[0]+2;
  VAR_38--, VAR_39++;
  continue;
     }


     if (!FUNC_16(VAR_39[0], "-d", 2)) {
  VAR_4[0] = VAR_39[1];
  VAR_38--, VAR_39++;
  VAR_38--, VAR_39++;
  continue;
     }


     if (FUNC_10(VAR_39[0], "r", VAR_37) == ((void*)0))
  FUNC_5(1, "%s", VAR_39[0]);
     if (VAR_6)
  FUNC_12("'ta 4i 4.25i 5.5iR\n'in .5i\n");
     VAR_40 = VAR_39[0];
     VAR_38--, VAR_39++;
 }
    rest:




 VAR_46 = FUNC_1(&VAR_43, VAR_4, VAR_26);
 if (VAR_46 == -1) {
     FUNC_9 (VAR_36, "no entry for language %s\n", VAR_26);
     FUNC_6(0);
 } else if (VAR_46 == -2) { FUNC_9(VAR_36,
     "cannot find vgrindefs file %s\n", VAR_4[0]);
     FUNC_6(0);
 } else if (VAR_46 == -3) { FUNC_9(VAR_36,
     "potential reference loop detected in vgrindefs file %s\n",
            VAR_4[0]);
     FUNC_6(0);
 }
 if (FUNC_2(VAR_43, "kw", &VAR_45) == -1)
     VAR_30 = 1;
 else {
     char **VAR_47;

     VAR_47 = VAR_19;
     while (*VAR_45) {
  while (*VAR_45 == ' ' || *VAR_45 =='\t')
      *VAR_45++ = '\0';
  if (*VAR_45)
      *VAR_47++ = VAR_45;
  while (*VAR_45 != ' ' && *VAR_45 != '\t' && *VAR_45)
      VAR_45++;
     }
     *VAR_47 = ((void*)0);
 }
 FUNC_2(VAR_43, "pb", &VAR_45);
 VAR_22 = FUNC_3(VAR_45);
 FUNC_2(VAR_43, "cb", &VAR_45);
 VAR_16 = FUNC_3(VAR_45);
 FUNC_2(VAR_43, "ce", &VAR_45);
 VAR_17 = FUNC_3(VAR_45);
 FUNC_2(VAR_43, "ab", &VAR_45);
 VAR_10 = FUNC_3(VAR_45);
 FUNC_2(VAR_43, "ae", &VAR_45);
 VAR_11 = FUNC_3(VAR_45);
 FUNC_2(VAR_43, "sb", &VAR_45);
 VAR_23 = FUNC_3(VAR_45);
 FUNC_2(VAR_43, "se", &VAR_45);
 VAR_24 = FUNC_3(VAR_45);
 FUNC_2(VAR_43, "bb", &VAR_45);
 VAR_12 = FUNC_3(VAR_45);
 FUNC_2(VAR_43, "be", &VAR_45);
 VAR_13 = FUNC_3(VAR_45);
 FUNC_2(VAR_43, "lb", &VAR_45);
 VAR_14 = FUNC_3(VAR_45);
 FUNC_2(VAR_43, "le", &VAR_45);
 VAR_15 = FUNC_3(VAR_45);
 if (FUNC_2(VAR_43, "nc", &VAR_45) >= 0)
  VAR_20 = FUNC_3(VAR_45);
 VAR_18 = '\\';
 VAR_21 = (FUNC_0(VAR_43, "oc", ':') != ((void*)0));
 VAR_25 = (FUNC_0(VAR_43, "tl", ':') != ((void*)0));



 VAR_8 = 0;
 VAR_9 = 0;
 VAR_7 = 0;
 VAR_2 = 0;
 VAR_3 = 0;
 for (VAR_34=0; VAR_34<VAR_1; VAR_34++) {
     VAR_35[VAR_34][0] = '\0';
     VAR_32[VAR_34] = 0;
 }
 VAR_34 = -1;
 FUNC_13("'-F\n");
 if (!VAR_5) {
     FUNC_12(".ds =F %s\n", VAR_40);
     FUNC_13("'wh 0 vH\n");
     FUNC_13("'wh -1i vF\n");
 }
 if (VAR_44) {
     VAR_44 = 0;
     FUNC_12(".()\n");
     FUNC_12(".bp\n");
 }
 if (!VAR_5) {
     FUNC_11(FUNC_8(VAR_37), &VAR_41);
     VAR_45 = FUNC_4(&VAR_41.st_mtime);
     VAR_45[16] = '\0';
     VAR_45[24] = '\0';
     FUNC_12(".ds =M %s %s\n", VAR_45+4, VAR_45+20);
 }




 while (FUNC_7(VAR_42, sizeof VAR_42, VAR_37) != ((void*)0)) {
     if (VAR_42[0] == '\f') {
  FUNC_12(".bp\n");
     }
     if (VAR_42[0] == '.') {
  FUNC_12("%s", VAR_42);
  if (!FUNC_16 (VAR_42+1, "vS", 2))
      VAR_31 = 1;
  if (!FUNC_16 (VAR_42+1, "vE", 2))
      VAR_31 = 0;
  continue;
     }
     VAR_33 = 0;
     if (!VAR_5 || VAR_31)
  FUNC_14(VAR_42);
     else
  FUNC_12("%s", VAR_42);
     if (VAR_33 && (VAR_34 >= 0)) {
  FUNC_13("'FC ");
  FUNC_13(VAR_35[VAR_34]);
  FUNC_13("\n");
     }



     VAR_27 = 0;
 }
 VAR_44 = 1;
    } while (VAR_38 > 0);
    FUNC_6(0);
}
