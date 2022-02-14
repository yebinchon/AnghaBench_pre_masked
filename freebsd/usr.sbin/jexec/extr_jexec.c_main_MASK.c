
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {char const* pw_name; char const* pw_dir; char const* pw_shell; int pw_uid; int pw_gid; } ;
typedef int login_cap_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char const* VAR_5 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 () ;
 char** VAR_6 ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (int,char*,int ) ;
 scalar_t__ FUNC_4 (char const*,char const*,char*,int *) ;
 scalar_t__ FUNC_5 (char*,char**) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char const*,struct passwd const**,int **) ;
 char* FUNC_8 (char*) ;
 int FUNC_9 (int,char**,char*) ;
 int FUNC_10 (int) ;
 int VAR_7 ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int *) ;
 char* VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_13 (char*,char const*,int) ;
 scalar_t__ FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int *,struct passwd const*,int ,int) ;
 int FUNC_16 () ;

int
FUNC_17(int VAR_10, char *VAR_11[])
{
 int VAR_12;
 login_cap_t *VAR_13 = ((void*)0);
 int VAR_14, VAR_15, VAR_16, VAR_17;
 char *VAR_18;
 const struct passwd *VAR_19 = ((void*)0);
 const char *VAR_20, *VAR_21, *VAR_22;

 VAR_14 = VAR_15 = VAR_16 = VAR_17 = 0;
 VAR_20 = ((void*)0);

 while ((VAR_14 = FUNC_9(VAR_10, VAR_11, "lnu:U:")) != -1) {
  switch (VAR_14) {
  case 'l':
   VAR_15 = 1;
   break;
  case 'n':

   break;
  case 'u':
   VAR_20 = VAR_8;
   VAR_16 = 1;
   break;
  case 'U':
   VAR_20 = VAR_8;
   VAR_17 = 1;
   break;
  default:
   FUNC_16();
  }
 }
 VAR_10 -= VAR_9;
 VAR_11 += VAR_9;
 if (VAR_10 < 1)
  FUNC_16();
 if (VAR_16 && VAR_17)
  FUNC_16();
 if (VAR_16 || (VAR_15 && !VAR_17))

  FUNC_7(VAR_20, &VAR_19, &VAR_13);


 VAR_12 = FUNC_11(VAR_11[0]);
 if (VAR_12 < 0)
  FUNC_3(1, "%s", VAR_7);
 if (FUNC_10(VAR_12) == -1)
  FUNC_2(1, "jail_attach(%d)", VAR_12);
 if (FUNC_0("/") == -1)
  FUNC_2(1, "chdir(): /");


 if (VAR_15 || VAR_20 != ((void*)0)) {
  if (VAR_17)

   FUNC_7(VAR_20, &VAR_19, &VAR_13);
  if (VAR_15) {
   VAR_22 = FUNC_8("TERM");
   VAR_18 = ((void*)0);
   VAR_6 = &VAR_18;
   FUNC_13("PATH", "/bin:/usr/bin", 1);
   if (VAR_22 != ((void*)0))
    FUNC_13("TERM", VAR_22, 1);
  }
  if (FUNC_14(VAR_19->pw_gid) != 0)
   FUNC_2(1, "setgid");
  if (FUNC_15(VAR_13, VAR_19, VAR_19->pw_uid, VAR_20
      ? VAR_0 & ~VAR_2 & ~VAR_3
      : VAR_4 | VAR_1) != 0)
   FUNC_2(1, "setusercontext");
  FUNC_12(VAR_13);
  FUNC_13("USER", VAR_19->pw_name, 1);
  FUNC_13("HOME", VAR_19->pw_dir, 1);
  FUNC_13("SHELL",
      *VAR_19->pw_shell ? VAR_19->pw_shell : VAR_5, 1);
  if (VAR_15 && FUNC_0(VAR_19->pw_dir) < 0)
   FUNC_2(1, "chdir: %s", VAR_19->pw_dir);
  FUNC_1();
 }


 if (VAR_10 > 1) {
  if (FUNC_5(VAR_11[1], VAR_11 + 1) < 0)
   FUNC_2(1, "execvp: %s", VAR_11[1]);
 } else {
  if (!(VAR_21 = FUNC_8("SHELL")))
   VAR_21 = VAR_5;
  if (FUNC_4(VAR_21, VAR_21, "-i", ((void*)0)) < 0)
   FUNC_2(1, "execlp: %s", VAR_21);
 }
 FUNC_6(0);
}
