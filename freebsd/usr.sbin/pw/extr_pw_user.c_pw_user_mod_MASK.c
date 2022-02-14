
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef char* uintmax_t ;
typedef scalar_t__ uid_t ;
typedef void* time_t ;
struct userconf {char* nispasswd; char* dotdir; scalar_t__ homemode; int default_password; int shells; int shelldir; } ;
struct stat {int st_mode; } ;
struct passwd {char* pw_name; int pw_fields; scalar_t__ pw_uid; scalar_t__ pw_gid; void* pw_change; void* pw_expire; char* pw_shell; char* pw_class; char* pw_dir; char* pw_gecos; int pw_passwd; } ;
struct group {scalar_t__ gr_gid; char** gr_mem; char* gr_name; } ;
typedef scalar_t__ mode_t ;
typedef int login_cap_t ;
typedef scalar_t__ intmax_t ;
struct TYPE_7__ {scalar_t__ _altdir; } ;
struct TYPE_6__ {int fd; int rootfd; } ;
struct TYPE_5__ {size_t sl_cur; char** sl_str; } ;
typedef TYPE_1__ StringList ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct group* FUNC_1 () ;
 struct group* FUNC_2 (scalar_t__) ;
 struct group* FUNC_3 (char*) ;
 struct passwd* FUNC_4 (char*) ;
 struct passwd* FUNC_5 (scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_6 () ;
 TYPE_4__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_9 (char*,struct group*) ;
 TYPE_3__ VAR_17 ;
 int FUNC_10 (struct userconf*,struct passwd*,char*,scalar_t__,int) ;
 int FUNC_11 (int ,char*,...) ;
 int FUNC_12 (struct group*) ;
 int FUNC_13 (int ,char*,int ) ;
 int FUNC_14 (int ,char*,struct stat*,int ) ;
 struct userconf* FUNC_15 (char const*) ;
 scalar_t__ FUNC_16 () ;
 int FUNC_17 (int,char**,char*) ;
 struct group* FUNC_18 (struct group*,char*) ;
 int FUNC_19 (char*) ;
 int FUNC_20 (int *) ;
 int * FUNC_21 (struct passwd*) ;
 int * FUNC_22 (int *,char*,int *) ;
 scalar_t__ FUNC_23 () ;
 char* VAR_18 ;
 void* FUNC_24 (void*,char*) ;
 int FUNC_25 (char*,int ) ;
 int FUNC_26 (char*,struct passwd*,char*) ;
 int FUNC_27 (struct passwd*,int,int) ;
 int FUNC_28 (char*) ;
 scalar_t__ FUNC_29 (char*,int ) ;
 char* FUNC_30 (char*,int) ;
 int FUNC_31 (struct userconf*,int ,int ,char*,...) ;
 int FUNC_32 (struct userconf*,char*,int) ;
 int FUNC_33 (struct passwd*,int,int,int) ;
 char* FUNC_34 (int ,int ,char*) ;
 int FUNC_35 (TYPE_1__**,char*) ;
 int VAR_19 ;
 scalar_t__ FUNC_36 (char*,char*) ;
 size_t FUNC_37 (char*,char*) ;
 void* FUNC_38 (int *) ;
 scalar_t__ FUNC_39 (char*) ;
 int FUNC_40 (char*) ;
 int FUNC_41 (char*,char*) ;

int
FUNC_42(int VAR_20, char **VAR_21, char *VAR_22)
{
 struct userconf *VAR_23;
 struct passwd *VAR_24;
 struct group *VAR_25;
 StringList *VAR_26 = ((void*)0);
 char VAR_27[] = "C:qn:u:c:d:e:p:g:G:mM:l:k:s:w:L:h:H:NPYy:";
 const char *VAR_28 = ((void*)0);
 char *VAR_29, *VAR_30, *VAR_31, *VAR_32, *VAR_33, *VAR_34, *VAR_35, *VAR_36;
 char *VAR_37, *VAR_38, *VAR_39;
 login_cap_t *VAR_40;
 struct stat VAR_41;
 intmax_t VAR_42 = -1;
 int VAR_43, VAR_44 = -1;
 size_t VAR_45, VAR_46;
 bool VAR_47, VAR_48, VAR_49, VAR_50, VAR_51, VAR_52;
 bool VAR_53;
 mode_t VAR_54 = 0;
 time_t VAR_55, VAR_56, VAR_57;

 VAR_55 = VAR_56 = -1;
 VAR_29 = VAR_30 = VAR_31 = VAR_32 = VAR_33 = VAR_35 = VAR_36 =((void*)0);
 VAR_37 = ((void*)0);
 VAR_38 = VAR_39 = ((void*)0);
 VAR_47 = VAR_48 = VAR_49 = VAR_50 = VAR_51 = VAR_53 = 0;
 VAR_52 = 0;
 VAR_57 = FUNC_38(((void*)0));

 if (VAR_22 != ((void*)0)) {
  if (VAR_22[FUNC_37(VAR_22, "0123456789")] == '\0')
   VAR_42 = FUNC_29(VAR_22, VAR_11);
  else
   VAR_32 = VAR_22;
 }

 while ((VAR_43 = FUNC_17(VAR_20, VAR_21, VAR_27)) != -1) {
  switch (VAR_43) {
  case 'C':
   VAR_28 = VAR_18;
   break;
  case 'q':
   VAR_47 = 1;
   break;
  case 'n':
   VAR_32 = VAR_18;
   break;
  case 'u':
   VAR_42 = FUNC_29(VAR_18, VAR_11);
   break;
  case 'c':
   VAR_29 = FUNC_30(VAR_18, 1);
   break;
  case 'd':
   VAR_30 = VAR_18;
   break;
  case 'e':
   VAR_55 = FUNC_24(VAR_57, VAR_18);
   break;
  case 'p':
   VAR_56 = FUNC_24(VAR_57, VAR_18);
   break;
  case 'g':
   FUNC_19(VAR_18);
   VAR_31 = VAR_18;
   break;
  case 'G':
   FUNC_35(&VAR_26, VAR_18);
   break;
  case 'm':
   VAR_48 = 1;
   break;
  case 'M':
   VAR_54 = FUNC_39(VAR_18);
   break;
  case 'l':
   VAR_33 = VAR_18;
   break;
  case 'k':
   VAR_34 = VAR_35 = VAR_18;
   if (*VAR_34 == '/')
    VAR_34++;
   if (FUNC_14(VAR_17.rootfd, VAR_34, &VAR_41, 0) == -1)
    FUNC_11(VAR_4, "skeleton `%s' does not "
        "exists", VAR_35);
   if (!FUNC_8(VAR_41.st_mode))
    FUNC_11(VAR_4, "skeleton `%s' is not a "
        "directory", VAR_35);
   break;
  case 's':
   VAR_36 = VAR_18;
   break;
  case 'w':
   VAR_37 = VAR_18;
   break;
  case 'L':
   VAR_38 = FUNC_30(VAR_18, 0);
   break;
  case 'H':
   if (VAR_44 != -1)
    FUNC_11(VAR_5, "'-h' and '-H' are mutually "
        "exclusive options");
   VAR_44 = FUNC_28(VAR_18);
   VAR_53 = 1;
   if (VAR_44 == '-')
    FUNC_11(VAR_5, "-H expects a file descriptor");
   break;
  case 'h':
   if (VAR_44 != -1)
    FUNC_11(VAR_5, "'-h' and '-H' are mutually "
        "exclusive options");
   VAR_44 = FUNC_28(VAR_18);
   break;
  case 'N':
   VAR_50 = 1;
   break;
  case 'P':
   VAR_49 = 1;
   break;
  case 'y':
   VAR_39 = VAR_18;
   break;
  case 'Y':
   VAR_51 = 1;
   break;
  }
 }

 if (FUNC_16() != 0 && ! VAR_50)
  FUNC_11(VAR_2, "you must be root");

 if (VAR_47)
  FUNC_13(VAR_13, "w", VAR_19);

 VAR_23 = FUNC_15(VAR_28);

 if (VAR_42 < 0 && VAR_32 == ((void*)0))
  FUNC_11(VAR_1, "username or id required");

 VAR_24 = (VAR_32 != ((void*)0)) ? FUNC_4(FUNC_30(VAR_32, 0)) : FUNC_5(VAR_42);
 if (VAR_24 == ((void*)0)) {
  if (VAR_32 == ((void*)0))
   FUNC_11(VAR_3, "no such uid `%ju'",
       (uintmax_t) VAR_42);
  FUNC_11(VAR_3, "no such user `%s'", VAR_32);
 }

 if (VAR_32 == ((void*)0))
  VAR_32 = VAR_24->pw_name;

 if (VAR_51 && VAR_39 == ((void*)0))
  VAR_39 = VAR_23->nispasswd;

 if (VAR_8._altdir == VAR_10 &&
     ((VAR_24->pw_fields & VAR_16) != VAR_14)) {
  if ((VAR_24->pw_fields & VAR_16) == VAR_15) {
   if (!VAR_51 && VAR_39 && *VAR_39 != '/')
    FUNC_11(VAR_3, "Cannot modify NIS user `%s'",
        VAR_32);
  } else {
   FUNC_11(VAR_3, "Cannot modify non local user `%s'",
       VAR_32);
  }
 }

 if (VAR_33) {
  if (FUNC_36(VAR_24->pw_name, "root") == 0)
   FUNC_11(VAR_1, "can't rename `root' account");
  if (FUNC_36(VAR_24->pw_name, VAR_33) != 0) {
   VAR_24->pw_name = FUNC_30(VAR_33, 0);
   VAR_52 = 1;
  }
 }

 if (VAR_42 >= 0 && VAR_24->pw_uid != VAR_42) {
  VAR_24->pw_uid = VAR_42;
  VAR_52 = 1;
  if (VAR_24->pw_uid != 0 && FUNC_36(VAR_24->pw_name, "root") == 0)
   FUNC_11(VAR_1, "can't change uid of `root' account");
  if (VAR_24->pw_uid == 0 && FUNC_36(VAR_24->pw_name, "root") != 0)
   FUNC_41("WARNING: account `%s' will have a uid of 0 "
       "(superuser access!)", VAR_24->pw_name);
 }

 if (VAR_31 && VAR_24->pw_uid != 0) {
  VAR_25 = FUNC_3(VAR_31);
  if (VAR_25 == ((void*)0))
   VAR_25 = FUNC_2(FUNC_29(VAR_31, VAR_6));
  if (VAR_25->gr_gid != VAR_24->pw_gid) {
   VAR_24->pw_gid = VAR_25->gr_gid;
   VAR_52 = 1;
  }
 }


 if (VAR_56 >= 0 && VAR_24->pw_change != VAR_56) {
  VAR_24->pw_change = VAR_56;
  VAR_52 = 1;
 }

 if (VAR_55 >= 0 && VAR_24->pw_expire != VAR_55) {
  VAR_24->pw_expire = VAR_55;
  VAR_52 = 1;
 }

 if (VAR_36) {
  VAR_36 = FUNC_34(VAR_23->shelldir, VAR_23->shells, VAR_36);
  if (VAR_36 == ((void*)0))
   VAR_36 = "";
  if (FUNC_36(VAR_36, VAR_24->pw_shell) != 0) {
   VAR_24->pw_shell = VAR_36;
   VAR_52 = 1;
  }
 }

 if (VAR_38 && FUNC_36(VAR_24->pw_class, VAR_38) != 0) {
  VAR_24->pw_class = VAR_38;
  VAR_52 = 1;
 }

 if (VAR_30 && FUNC_36(VAR_24->pw_dir, VAR_30) != 0) {
  VAR_24->pw_dir = VAR_30;
  VAR_52 = 1;
  if (FUNC_14(VAR_17.rootfd, VAR_24->pw_dir, &VAR_41, 0) == -1) {
   if (!VAR_48)
    FUNC_41("WARNING: home `%s' does not exist",
        VAR_24->pw_dir);
  } else if (!FUNC_8(VAR_41.st_mode)) {
   FUNC_41("WARNING: home `%s' is not a directory",
       VAR_24->pw_dir);
  }
 }

 if (VAR_37 && VAR_17.fd == -1) {
  VAR_40 = FUNC_21(VAR_24);
  if (VAR_40 == ((void*)0) || FUNC_22(VAR_40, "sha512", ((void*)0)) == ((void*)0))
   FUNC_40("setting crypt(3) format");
  FUNC_20(VAR_40);
  VAR_23->default_password = FUNC_25(VAR_37,
      VAR_23->default_password);
  VAR_24->pw_passwd = FUNC_32(VAR_23, VAR_24->pw_name, VAR_50);
  VAR_52 = 1;
 }

 if (VAR_29 && FUNC_36(VAR_24->pw_gecos, VAR_29) != 0) {
  VAR_24->pw_gecos = VAR_29;
  VAR_52 = 1;
 }

 if (VAR_44 != -1)
  VAR_52 = FUNC_33(VAR_24, VAR_44, VAR_53, 1);

 if (VAR_50)
  return (FUNC_27(VAR_24, VAR_49, 0));

 if (VAR_52)
  FUNC_26(VAR_32, VAR_24, VAR_51 ? VAR_39 : ((void*)0));

 if (VAR_26 != ((void*)0)) {

  FUNC_7();
  while ((VAR_25 = FUNC_1()) != ((void*)0)) {
   if (VAR_25->gr_mem == ((void*)0))
    continue;
   for (VAR_45 = 0; VAR_25->gr_mem[VAR_45] != ((void*)0); VAR_45++) {
    if (FUNC_36(VAR_25->gr_mem[VAR_45] , VAR_32) != 0)
     continue;
    for (VAR_46 = VAR_45; VAR_25->gr_mem[VAR_46] != ((void*)0) ; VAR_46++)
     VAR_25->gr_mem[VAR_46] = VAR_25->gr_mem[VAR_46+1];
    FUNC_9(VAR_25->gr_name, VAR_25);
    break;
   }
  }
  FUNC_0();

  for (VAR_45 = 0; VAR_45 < VAR_26->sl_cur; VAR_45++) {
   VAR_25 = FUNC_3(VAR_26->sl_str[VAR_45]);
   VAR_25 = FUNC_18(VAR_25, VAR_24->pw_name);
   if (VAR_25 == ((void*)0))
    continue;
   FUNC_9(VAR_25->gr_name, VAR_25);
   FUNC_12(VAR_25);
  }
 }

 if (VAR_33) {
  FUNC_7();
  while ((VAR_25 = FUNC_1()) != ((void*)0)) {
   if (VAR_25->gr_mem == ((void*)0))
    continue;
   for (VAR_45 = 0; VAR_25->gr_mem[VAR_45] != ((void*)0); VAR_45++) {
    if (FUNC_36(VAR_25->gr_mem[VAR_45], VAR_32) != 0)
     continue;
    VAR_25->gr_mem[VAR_45] = VAR_33;
    FUNC_9(VAR_25->gr_name, VAR_25);
    break;
   }
  }
 }


 if (VAR_33)
  VAR_32 = VAR_33;
 VAR_24 = FUNC_4(VAR_32);
 if (VAR_24 == ((void*)0))
  FUNC_11(VAR_3, "user '%s' disappeared during update", VAR_32);
 VAR_25 = FUNC_2(VAR_24->pw_gid);
 FUNC_31(VAR_23, VAR_7, VAR_12, "%s(%ju):%s(%ju):%s:%s:%s",
     VAR_24->pw_name, (uintmax_t)VAR_24->pw_uid,
     VAR_25 ? VAR_25->gr_name : "unknown",
     (uintmax_t)(VAR_25 ? VAR_25->gr_gid : (uid_t)-1),
     VAR_24->pw_gecos, VAR_24->pw_dir, VAR_24->pw_shell);






 if (FUNC_6() != VAR_9 && VAR_48 && VAR_24->pw_dir &&
     *VAR_24->pw_dir == '/' && VAR_24->pw_dir[1]) {
  if (!VAR_35)
   VAR_35 = VAR_23->dotdir;
  if (VAR_54 == 0)
   VAR_54 = VAR_23->homemode;
  FUNC_10(VAR_23, VAR_24, VAR_35, VAR_54, 1);
 }

 if (VAR_51 && FUNC_23() == 0)
  FUNC_31(VAR_23, VAR_7, VAR_12, "NIS maps updated");

 return (VAR_0);
}
