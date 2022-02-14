
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tfname2 ;
struct stat {int st_size; } ;
struct cjobinfo {char* cji_accthost; char* cji_acctuser; char* cji_class; char* cji_jobname; char* cji_headruser; char* cji_mailto; int cji_dfcount; } ;
typedef int errm ;
typedef int cfname2 ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct cjobinfo*) ;
 char* FUNC_2 (struct cjobinfo*) ;
 struct cjobinfo* FUNC_3 (char const*,char const*) ;
 int FUNC_4 (struct cjobinfo*) ;
 int VAR_7 ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int,char*) ;
 int FUNC_7 (int *,char*,char*) ;
 char* VAR_8 ;
 int * FUNC_8 (char*) ;
 int FUNC_9 (int) ;
 scalar_t__ FUNC_10 (char) ;
 scalar_t__ FUNC_11 (char) ;
 scalar_t__ FUNC_12 (char) ;
 int FUNC_13 (char const*,char*) ;
 int FUNC_14 (char*,int,int) ;
 int FUNC_15 (char const*,char*) ;
 int FUNC_16 (char*,int,char*,char const*,...) ;
 int FUNC_17 (char const*,struct stat*) ;
 char* FUNC_18 (char*,char) ;
 scalar_t__ FUNC_19 (char*,char*) ;
 char* FUNC_20 (char*) ;
 char* FUNC_21 (int ) ;
 int FUNC_22 (char*,char*,int) ;
 int FUNC_23 (char*,char const*,int) ;
 int FUNC_24 (char*,char*,size_t) ;
 char FUNC_25 (char) ;
 int FUNC_26 (char const*) ;

char *
FUNC_27(const char *VAR_9, const char *VAR_10)
{
 int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
 FILE *VAR_16;
 struct cjobinfo *VAR_17;
 char *VAR_18, *VAR_19, *VAR_20;
 char VAR_21[VAR_1+1], VAR_22[VAR_1+1];
 char VAR_23[VAR_0];
 VAR_17 = ((void*)0);
 VAR_16 = ((void*)0);
 *VAR_23 = '\0';

 VAR_11 = VAR_10[2];
 if ((VAR_10[0] != 't') || (VAR_10[1] != 'f') || (!FUNC_9(VAR_11))) {
  FUNC_16(VAR_23, sizeof(VAR_23),
      "ctl_renametf invalid filename: %s", VAR_10);
  goto error_ret;
 }

 VAR_17 = FUNC_3(VAR_9, VAR_10);
 if (VAR_17 == ((void*)0)) {
  FUNC_16(VAR_23, sizeof(VAR_23),
      "ctl_renametf error cti_readcf(%s)", VAR_10);
  goto error_ret;
 }





 FUNC_23(VAR_21, VAR_10, sizeof(VAR_21));
 VAR_21[0] = 'r';
 VAR_13 = FUNC_14(VAR_21, VAR_5|VAR_3|VAR_4, 0660);
 if (VAR_13 == -1) {
  FUNC_16(VAR_23, sizeof(VAR_23),
      "ctl_renametf error open(%s): %s", VAR_21,
      FUNC_21(VAR_7));
  goto error_ret;
 }
 VAR_16 = FUNC_6(VAR_13, "w");
 if (VAR_16 == ((void*)0)) {
  FUNC_0(VAR_13);
  FUNC_16(VAR_23, sizeof(VAR_23),
      "ctl_renametf error fopen(%s): %s", VAR_21,
      FUNC_21(VAR_7));
  goto error_ret;
 }
 VAR_14 = 0;
 if (VAR_17->cji_accthost == ((void*)0))
  VAR_14 = 1;
 else if (FUNC_19(VAR_17->cji_accthost, ".na.") == 0)
  VAR_14 = 1;
 else if (FUNC_19(VAR_17->cji_accthost, "localhost") == 0)
  VAR_14 = 1;
 else {
  for (VAR_20 = VAR_17->cji_accthost; *VAR_20 != '\0'; VAR_20++) {
   if (*VAR_20 <= ' ') {
    VAR_14 = 1;
    break;
   }
  }
 }
 if (VAR_14)
  FUNC_7(VAR_16, "H%s\n", VAR_8);
 else
  FUNC_7(VAR_16, "H%s\n", VAR_17->cji_accthost);
 VAR_14 = 0;
 if (VAR_17->cji_acctuser == ((void*)0))
  VAR_14 = 1;
 else if (FUNC_19(VAR_17->cji_acctuser, ".na.") == 0)
  ;
 else {
  VAR_12 = 0;
  VAR_20 = VAR_17->cji_acctuser;
  if (*VAR_20 == '-')
   *VAR_20++ = '_';
  for (; *VAR_20 != '\0'; VAR_20++) {
   if (FUNC_11(*VAR_20) || FUNC_10(*VAR_20))
    continue;
   if (FUNC_18(VAR_2, *VAR_20) != ((void*)0))
    continue;
   if (FUNC_12(*VAR_20)) {
    VAR_12 = 1;
    continue;
   }
   *VAR_20 = '_';
  }







  if (VAR_12 && (FUNC_8(VAR_17->cji_acctuser) == ((void*)0))) {
   for (VAR_20 = VAR_17->cji_acctuser; *VAR_20 != '\0'; VAR_20++) {
    if (FUNC_12(*VAR_20))
     *VAR_20 = FUNC_25(*VAR_20);
   }
  }
 }
 if (VAR_14)
  FUNC_7(VAR_16, "P%s\n", ".na.");
 else
  FUNC_7(VAR_16, "P%s\n", VAR_17->cji_acctuser);


 if (VAR_17->cji_class != ((void*)0))
  FUNC_7(VAR_16, "C%s\n", VAR_17->cji_class);
 if (VAR_17->cji_jobname != ((void*)0))
  FUNC_7(VAR_16, "J%s\n", VAR_17->cji_jobname);
 if (VAR_17->cji_headruser != ((void*)0))
  FUNC_7(VAR_16, "L%s\n", VAR_17->cji_headruser);
 VAR_14 = 0;
 if (VAR_17->cji_mailto == ((void*)0))
  VAR_14 = 1;
 else {
  for (VAR_20 = VAR_17->cji_mailto; *VAR_20 != '\0'; VAR_20++) {
   if (*VAR_20 <= ' ') {
    VAR_14 = 1;
    break;
   }
  }
 }
 if (!VAR_14)
  FUNC_7(VAR_16, "M%s\n", VAR_17->cji_mailto);





 FUNC_4(VAR_17);
 VAR_18 = FUNC_2(VAR_17);
 while (VAR_18 != ((void*)0)) {
  switch (VAR_18[0]) {
  case 'H':
  case 'P':
  case 'C':
  case 'J':
  case 'L':
  case 'M':

   break;
  case 'N':

   if (VAR_17->cji_dfcount == 0) {

    break;
   }
   FUNC_7(VAR_16, "%s\n", VAR_18);
   break;
  case 'U':
   VAR_19 = FUNC_18(VAR_18, '/');
   if (VAR_19 != ((void*)0)) {
    break;
   }
   if (VAR_17->cji_dfcount == 0) {
    VAR_18++;
    if (FUNC_24(VAR_18, "df", (size_t)2) == 0) {
     FUNC_7(VAR_16, "f%s\n", VAR_18);
     FUNC_7(VAR_16, "U%s\n", VAR_18);
     FUNC_7(VAR_16, "N%s\n", VAR_18);
    }
    break;
   }
   FUNC_7(VAR_16, "%s\n", VAR_18);
   break;
  default:
   FUNC_7(VAR_16, "%s\n", VAR_18);
   break;
  }
  VAR_18 = FUNC_2(VAR_17);
 }

 FUNC_1(VAR_17);
 VAR_17 = ((void*)0);

 VAR_15 = FUNC_5(VAR_16);
 VAR_16 = ((void*)0);
 if (VAR_15 != 0) {
  FUNC_16(VAR_23, sizeof(VAR_23),
      "ctl_renametf error fclose(%s): %s", VAR_21,
      FUNC_21(VAR_7));
  goto error_ret;
 }

 FUNC_23(VAR_22, VAR_10, sizeof(VAR_22));
 VAR_22[0] = 'c';
 VAR_15 = FUNC_13(VAR_21, VAR_22);
 if (VAR_15 != 0) {
  FUNC_16(VAR_23, sizeof(VAR_23),
      "ctl_renametf error link(%s,%s): %s", VAR_21, VAR_22,
      FUNC_21(VAR_7));
  goto error_ret;
 }
 FUNC_26(VAR_10);
 FUNC_26(VAR_21);

 return ((void*)0);

error_ret:
 if (VAR_17 != ((void*)0))
  FUNC_1(VAR_17);
 if (VAR_16 != ((void*)0))
  FUNC_5(VAR_16);

 if (*VAR_23 != '\0')
  return FUNC_20(VAR_23);
 return FUNC_20("ctl_renametf internal (missed) error");
}
