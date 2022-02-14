
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uintmax_t ;
struct userconf {char* nispasswd; } ;
struct stat {int dummy; } ;
struct passwd {int pw_fields; scalar_t__ pw_uid; char* pw_name; int pw_gid; int pw_dir; } ;
struct group {char** gr_mem; int gr_name; } ;
typedef scalar_t__ intmax_t ;
typedef int home ;
typedef int file ;
struct TYPE_4__ {scalar_t__ _altdir; } ;
struct TYPE_3__ {int rootfd; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct group* FUNC_1 () ;
 struct group* FUNC_2 (int ) ;
 struct group* FUNC_3 (char*) ;
 struct passwd* FUNC_4 (int ) ;
 struct passwd* FUNC_5 (scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_6 () ;
 TYPE_2__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_7 () ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 char* VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_8 (char*,int ) ;
 int FUNC_9 (char*,struct group*) ;
 TYPE_1__ VAR_19 ;
 int FUNC_10 (struct group*) ;
 int FUNC_11 (char*,char*) ;
 int FUNC_12 (struct passwd*) ;
 int FUNC_13 (int ,char*,...) ;
 int FUNC_14 (int ,char*,...) ;
 int FUNC_15 (int ,char*,int ) ;
 int FUNC_16 (int ,char*,struct stat*,int ) ;
 struct userconf* FUNC_17 (char const*) ;
 int FUNC_18 (int,char**,char*) ;
 int * FUNC_19 (scalar_t__) ;
 char* VAR_20 ;
 scalar_t__ FUNC_20 (char*,int ) ;
 int FUNC_21 (char*,int ) ;
 int FUNC_22 (struct userconf*,int ,int ,char*,char*,int ,...) ;
 int FUNC_23 (int ,char*,scalar_t__) ;
 int FUNC_24 (scalar_t__) ;
 int FUNC_25 (char*) ;
 int FUNC_26 (char*,int,char*,char*,...) ;
 int VAR_21 ;
 scalar_t__ FUNC_27 (char*,char*) ;
 int FUNC_28 (char*,int ,int) ;
 size_t FUNC_29 (char*,char*) ;
 int FUNC_30 (char*) ;
 int FUNC_31 (int ,char*,int ) ;
 int FUNC_32 (char*) ;
 int FUNC_33 (char*,char*) ;

int
FUNC_34(int VAR_22, char **VAR_23, char *VAR_24)
{
 struct userconf *VAR_25 = ((void*)0);
 struct passwd *VAR_26 = ((void*)0);
 struct group *VAR_27, *VAR_28;
 char *VAR_29 = ((void*)0);
 char VAR_30[VAR_6];
 char *VAR_31 = ((void*)0);
 char VAR_32[VAR_7];
 char VAR_33[VAR_7];
 const char *VAR_34 = ((void*)0);
 struct stat VAR_35;
 intmax_t VAR_36 = -1;
 int VAR_37, VAR_38;
 bool VAR_39 = 0;
 bool VAR_40 = 0;
 bool VAR_41 = 0;

 if (VAR_24 != ((void*)0)) {
  if (VAR_24[FUNC_29(VAR_24, "0123456789")] == '\0')
   VAR_36 = FUNC_20(VAR_24, VAR_12);
  else
   VAR_29 = VAR_24;
 }

 while ((VAR_37 = FUNC_18(VAR_22, VAR_23, "C:qn:u:rYy:")) != -1) {
  switch (VAR_37) {
  case 'C':
   VAR_34 = VAR_20;
   break;
  case 'q':
   VAR_41 = 1;
   break;
  case 'n':
   VAR_29 = VAR_20;
   break;
  case 'u':
   VAR_36 = FUNC_20(VAR_20, VAR_12);
   break;
  case 'r':
   VAR_40 = 1;
   break;
  case 'y':
   VAR_31 = VAR_20;
   break;
  case 'Y':
   VAR_39 = 1;
   break;
  }
 }

 if (VAR_41)
  FUNC_15(VAR_14, "w", VAR_21);

 if (VAR_36 < 0 && VAR_29 == ((void*)0))
  FUNC_14(VAR_1, "username or id required");

 VAR_25 = FUNC_17(VAR_34);

 if (VAR_31 == ((void*)0))
  VAR_31 = VAR_25->nispasswd;

 VAR_26 = (VAR_29 != ((void*)0)) ? FUNC_4(FUNC_21(VAR_29, 0)) : FUNC_5(VAR_36);
 if (VAR_26 == ((void*)0)) {
  if (VAR_29 == ((void*)0))
   FUNC_14(VAR_3, "no such uid `%ju'", (uintmax_t) VAR_36);
  FUNC_14(VAR_3, "no such user `%s'", VAR_29);
 }

 if (VAR_9._altdir == VAR_11 &&
     ((VAR_26->pw_fields & VAR_18) != VAR_16)) {
  if ((VAR_26->pw_fields & VAR_18) == VAR_17) {
   if (!VAR_39 && VAR_31 && *VAR_31 != '/')
    FUNC_14(VAR_3, "Cannot remove NIS user `%s'",
        VAR_29);
  } else {
   FUNC_14(VAR_3, "Cannot remove non local user `%s'",
       VAR_29);
  }
 }

 VAR_36 = VAR_26->pw_uid;
 if (VAR_29 == ((void*)0))
  VAR_29 = VAR_26->pw_name;

 if (FUNC_27(VAR_26->pw_name, "root") == 0)
  FUNC_14(VAR_1, "cannot remove user 'root'");


 if (FUNC_6() != VAR_10)
  FUNC_25(VAR_26->pw_name);

 if (!FUNC_6()) {

  FUNC_26(VAR_32, sizeof(VAR_32), "/var/cron/tabs/%s", VAR_26->pw_name);
  if (FUNC_8(VAR_32, VAR_4) == 0) {
   FUNC_26(VAR_32, sizeof(VAR_32), "crontab -u %s -r",
       VAR_26->pw_name);
   FUNC_30(VAR_32);
  }
 }





 FUNC_26(VAR_32, sizeof(VAR_32), "%s/%s", VAR_15, VAR_26->pw_name);
 FUNC_28(VAR_33, VAR_26->pw_dir, sizeof(VAR_33));
 VAR_27 = FUNC_2(VAR_26->pw_gid);
 if (VAR_27 != ((void*)0))
  FUNC_28(VAR_30, VAR_27->gr_name, VAR_5);
 else
  VAR_30[0] = '\0';

 VAR_38 = FUNC_12(VAR_26);
 if (VAR_38 == -1)
  FUNC_13(VAR_2, "user '%s' does not exist", VAR_26->pw_name);
 else if (VAR_38 != 0)
  FUNC_13(VAR_2, "passwd update");

 if (VAR_39 && VAR_31 && *VAR_31=='/') {
  VAR_38 = FUNC_11(VAR_31, VAR_29);
  if (VAR_38 == -1)
   FUNC_33("WARNING: user '%s' does not exist in NIS passwd",
       VAR_26->pw_name);
  else if (VAR_38 != 0)
   FUNC_32("WARNING: NIS passwd update");
 }

 VAR_28 = FUNC_3(VAR_29);
 if (VAR_28 != ((void*)0) &&
     (VAR_28->gr_mem == ((void*)0) || *VAR_28->gr_mem == ((void*)0)) &&
     FUNC_27(VAR_29, VAR_30) == 0)
  FUNC_10(FUNC_3(VAR_29));
 FUNC_7();
 while ((VAR_28 = FUNC_1()) != ((void*)0)) {
  int VAR_42, VAR_43;
  char VAR_44[VAR_6];
  if (VAR_28->gr_mem == ((void*)0))
   continue;

  for (VAR_42 = 0; VAR_28->gr_mem[VAR_42] != ((void*)0); VAR_42++) {
   if (FUNC_27(VAR_28->gr_mem[VAR_42], VAR_29) != 0)
    continue;

   for (VAR_43 = VAR_42; VAR_28->gr_mem[VAR_43] != ((void*)0); VAR_43++)
    VAR_28->gr_mem[VAR_43] = VAR_28->gr_mem[VAR_43+1];
   FUNC_28(VAR_44, VAR_28->gr_name, VAR_6);
   FUNC_9(VAR_44, VAR_28);
  }
 }
 FUNC_0();

 FUNC_22(VAR_25, VAR_8, VAR_13, "%s(%ju) account removed", VAR_29,
     (uintmax_t)VAR_36);


 if (FUNC_6() != VAR_10)
  FUNC_31(VAR_19.rootfd, VAR_32 + 1, 0);


 if (!FUNC_6() && FUNC_19(VAR_36) == ((void*)0))
  FUNC_24(VAR_36);


 if (FUNC_6() != VAR_10 && VAR_40 && *VAR_33 == '/' &&
     FUNC_5(VAR_36) == ((void*)0) &&
     FUNC_16(VAR_19.rootfd, VAR_33 + 1, &VAR_35, 0) != -1) {
  FUNC_23(VAR_19.rootfd, VAR_33, VAR_36);
  FUNC_22(VAR_25, VAR_8, VAR_13, "%s(%ju) home '%s' %s"
      "removed", VAR_29, (uintmax_t)VAR_36, VAR_33,
       FUNC_16(VAR_19.rootfd, VAR_33 + 1, &VAR_35, 0) == -1 ? "" : "not "
       "completely ");
 }

 return (VAR_0);
}
