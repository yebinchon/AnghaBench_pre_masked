
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uid_t ;
typedef int u_int ;
struct sigaction {void* sa_handler; int sa_mask; int sa_flags; } ;
struct passwd {scalar_t__ pw_uid; char const* pw_name; char* pw_shell; char const* pw_dir; } ;
struct pam_conv {int * member_1; int member_0; } ;
typedef int shellbuf ;
typedef int pid_t ;
struct TYPE_6__ {char* lc_class; } ;
typedef TYPE_1__ login_cap_t ;
typedef enum tristate { ____Placeholder_tristate } tristate ;
typedef int au_id_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
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
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 () ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_1 (int ,char const*) ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 void* VAR_36 ;
 void* VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_40 ;
 int VAR_41 ;
 char* VAR_42 ;
 scalar_t__ FUNC_4 (int ,int ,int ,int,char*,...) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int) ;
 char** VAR_43 ;
 int VAR_44 ;
 int FUNC_8 (int,char*,...) ;
 scalar_t__ VAR_45 ;
 int FUNC_9 (int,char*,...) ;
 int FUNC_10 (char const*,char* const*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 scalar_t__ FUNC_14 (int *) ;
 char* FUNC_15 (char*) ;
 scalar_t__ FUNC_16 () ;
 char* FUNC_17 () ;
 int FUNC_18 (int,char**,char*) ;
 int FUNC_19 (int) ;
 int FUNC_20 () ;
 int FUNC_21 () ;
 int FUNC_22 (int ,int ) ;
 struct passwd* FUNC_23 (char const*) ;
 struct passwd* FUNC_24 (scalar_t__) ;
 scalar_t__ FUNC_25 () ;
 int FUNC_26 (int,int ) ;
 int FUNC_27 (TYPE_1__*) ;
 TYPE_1__* FUNC_28 (char*) ;
 TYPE_1__* FUNC_29 (struct passwd*) ;
 char** FUNC_30 (int) ;
 char const* FUNC_31 () ;
 int FUNC_32 (char*,int ,int) ;
 int VAR_46 ;
 char* VAR_47 ;
 int VAR_48 ;
 int FUNC_33 (int ,int ) ;
 int FUNC_34 (int ,int ) ;
 int FUNC_35 (int ,int ) ;
 int FUNC_36 (int ,int ,void const**) ;
 char* FUNC_37 (int ,char*) ;
 int FUNC_38 (int ) ;
 int FUNC_39 (int ,int ) ;
 int FUNC_40 (int ,int ) ;
 int FUNC_41 (char*,char const*,struct pam_conv*,int *) ;
 char* FUNC_42 (int ,int) ;
 int VAR_49 ;
 int FUNC_43 (int*) ;
 int FUNC_44 (int,int*,int) ;
 int FUNC_45 (char*,char const*,int) ;
 int FUNC_46 (int,int) ;
 int FUNC_47 (int ,int ,int) ;
 scalar_t__ FUNC_48 (TYPE_1__*,struct passwd*,scalar_t__,int) ;
 int FUNC_49 (int ,struct sigaction*,struct sigaction*) ;
 int FUNC_50 (int *) ;
 scalar_t__ FUNC_51 (char const*,char*) ;
 char* FUNC_52 (char const*) ;
 int FUNC_53 (scalar_t__) ;
 int FUNC_54 (char*,char*,int) ;
 int FUNC_55 (char const*) ;
 char* FUNC_56 (char const*,char) ;
 int FUNC_57 (int,char*,char*,...) ;
 int FUNC_58 (int ) ;
 int FUNC_59 (int ,int) ;
 char* FUNC_60 (int ) ;
 int FUNC_61 () ;
 int FUNC_62 (int,int*,int ) ;

int
FUNC_63(int VAR_50, char *VAR_51[])
{
 static char *VAR_52;
 struct passwd *VAR_53 = ((void*)0);
 struct pam_conv VAR_54 = { &VAR_46, ((void*)0) };
 enum tristate VAR_55;
 login_cap_t *VAR_56;
 union {
  const char **a;
  char * const *b;
 } VAR_57;
 uid_t VAR_58;
 pid_t VAR_59, VAR_60, VAR_61;
 int VAR_62, VAR_63, VAR_64, VAR_65, VAR_66, VAR_67, VAR_68,
   VAR_69, VAR_70;
 u_int VAR_71;
 char *VAR_72, *VAR_73, VAR_74[VAR_18];
 const char *VAR_75, *VAR_76, *VAR_77, *VAR_78, **VAR_79;
 const void *VAR_80;
 struct sigaction VAR_81, VAR_82, VAR_83, VAR_84;
 int VAR_85, VAR_86[2];





 VAR_75 = VAR_77 = VAR_73 = VAR_52 = ((void*)0);
 VAR_62 = VAR_64 = VAR_65 = VAR_69 = 0;
 VAR_76 = "root";
 VAR_55 = VAR_39;
 VAR_70 = 0;

 while ((VAR_63 = FUNC_18(VAR_50, VAR_51, "-flmsc:")) != -1)
  switch ((char)VAR_63) {
  case 'f':
   VAR_65 = 1;
   break;
  case '-':
  case 'l':
   VAR_62 = 0;
   VAR_64 = 1;
   break;
  case 'm':
   VAR_62 = 1;
   VAR_64 = 0;
   break;
  case 's':
   VAR_70 = 1;
   break;
  case 'c':
   VAR_73 = VAR_47;
   break;
  case '?':
  default:
   FUNC_61();

  }

 if (VAR_48 < VAR_50)
  VAR_76 = VAR_51[VAR_48++];

 if (VAR_76 == ((void*)0))
  FUNC_61();






 if (FUNC_16() != 0)
  FUNC_9(1, "not running setuid");







 if (FUNC_55(VAR_76) > VAR_17 - 1) {





  FUNC_9(1, "username too long");
 }

 VAR_79 = FUNC_30(sizeof(char *) * (size_t)(VAR_50 + 4));
 if (VAR_79 == ((void*)0))
  FUNC_9(1, "malloc failure");

 VAR_79[VAR_50 + 3] = ((void*)0);
 for (VAR_67 = VAR_50; VAR_67 >= VAR_48; VAR_67--)
  VAR_79[VAR_67 + 3] = VAR_51[VAR_67];
 VAR_57.a = &VAR_79[VAR_67 + 3];

 VAR_51 += VAR_48;

 VAR_45 = 0;
 VAR_66 = FUNC_22(VAR_27, 0);
 if (VAR_45)
  VAR_66 = 0;

 FUNC_47(VAR_27, 0, -2);
 FUNC_32("su", VAR_13, VAR_12);


 VAR_58 = FUNC_25();
 VAR_72 = FUNC_17();
 if (VAR_72 != ((void*)0))
  VAR_53 = FUNC_23(VAR_72);
 if (VAR_53 == ((void*)0) || VAR_53->pw_uid != VAR_58)
  VAR_53 = FUNC_24(VAR_58);
 if (VAR_53 == ((void*)0)) {





  FUNC_9(1, "who are you?");
 }

 VAR_72 = FUNC_52(VAR_53->pw_name);
 if (VAR_72 == ((void*)0))
  FUNC_8(1, "strdup failure");

 if (VAR_62) {
  if (VAR_53->pw_shell != ((void*)0) && *VAR_53->pw_shell != '\0') {

   FUNC_54(VAR_74, VAR_53->pw_shell,
       sizeof(VAR_74));
   VAR_77 = VAR_74;
  }
  else {
   VAR_77 = VAR_42;
   VAR_55 = VAR_19;
  }
 }


 VAR_68 = FUNC_41("su", VAR_76, &VAR_54, &VAR_49);
 if (VAR_68 != VAR_24) {
  FUNC_57(VAR_14, "pam_start: %s", FUNC_42(VAR_49, VAR_68));
  FUNC_9(1, "pam_start: %s", FUNC_42(VAR_49, VAR_68));
 }

 FUNC_1(VAR_23, VAR_72);

 VAR_78 = FUNC_60(VAR_38);
 if (!VAR_78)
  VAR_78 = "tty";
 FUNC_1(VAR_25, VAR_78);

 VAR_68 = FUNC_34(VAR_49, 0);
 if (VAR_68 != VAR_24) {





  FUNC_57(VAR_12|VAR_16, "BAD SU %s to %s on %s",
      VAR_72, VAR_76, VAR_78);
  FUNC_9(1, "Sorry");
 }




 VAR_68 = FUNC_36(VAR_49, VAR_26, &VAR_80);
 if (VAR_68 == VAR_24)
  VAR_76 = VAR_80;
 else
  FUNC_57(VAR_14, "pam_get_item(PAM_USER): %s",
      FUNC_42(VAR_49, VAR_68));
 VAR_53 = FUNC_23(VAR_76);
 if (VAR_53 == ((void*)0)) {





  FUNC_9(1, "unknown login: %s", VAR_76);
 }

 VAR_68 = FUNC_33(VAR_49, 0);
 if (VAR_68 == VAR_22) {
  VAR_68 = FUNC_35(VAR_49,
   VAR_20);
  if (VAR_68 != VAR_24) {
   FUNC_57(VAR_14, "pam_chauthtok: %s",
       FUNC_42(VAR_49, VAR_68));
   FUNC_9(1, "Sorry");
  }
 }
 if (VAR_68 != VAR_24) {





  FUNC_57(VAR_14, "pam_acct_mgmt: %s",
   FUNC_42(VAR_49, VAR_68));
  FUNC_9(1, "Sorry");
 }


 if (VAR_73 == ((void*)0))
  VAR_56 = FUNC_29(VAR_53);
 else {
  if (VAR_58 != 0) {





   FUNC_9(1, "only root may use -c");
  }
  VAR_56 = FUNC_28(VAR_73);
  if (VAR_56 == ((void*)0))
   FUNC_8(1, "login_getclass");
  if (VAR_56->lc_class == ((void*)0) || FUNC_51(VAR_73, VAR_56->lc_class) != 0)
   FUNC_9(1, "unknown class: %s", VAR_73);
 }


 if (VAR_62) {
  if (VAR_58 != 0 && !FUNC_6(VAR_53->pw_shell))
   FUNC_9(1, "permission denied (shell)");
 }
 else if (VAR_53->pw_shell && *VAR_53->pw_shell) {
  VAR_77 = VAR_53->pw_shell;
  VAR_55 = VAR_39;
 }
 else {
  VAR_77 = VAR_42;
  VAR_55 = VAR_19;
 }


 if (VAR_55 == VAR_39) {
  VAR_75 = FUNC_56(VAR_77, '/');
  if (VAR_75)
   ++VAR_75;
  else
   VAR_75 = VAR_77;
  VAR_55 = FUNC_51(VAR_75, "csh") ? (FUNC_51(VAR_75, "tcsh") ? VAR_19 : VAR_41) : VAR_41;
 }
 FUNC_47(VAR_27, 0, VAR_66);





 if (FUNC_48(VAR_56, VAR_53, VAR_53->pw_uid, VAR_5) < 0)
  FUNC_8(1, "setusercontext");

 VAR_68 = FUNC_40(VAR_49, VAR_21);
 if (VAR_68 != VAR_24) {
  FUNC_57(VAR_14, "pam_setcred: %s",
      FUNC_42(VAR_49, VAR_68));
  FUNC_9(1, "failed to establish credentials.");
 }
 if (VAR_64) {
  VAR_68 = FUNC_39(VAR_49, 0);
  if (VAR_68 != VAR_24) {
   FUNC_57(VAR_14, "pam_open_session: %s",
       FUNC_42(VAR_49, VAR_68));
   FUNC_9(1, "failed to open session.");
  }
 }





 VAR_81.sa_flags = VAR_28;
 VAR_81.sa_handler = VAR_37;
 FUNC_50(&VAR_81.sa_mask);
 FUNC_49(VAR_30, &VAR_81, &VAR_82);
 FUNC_49(VAR_32, &VAR_81, &VAR_83);
 FUNC_49(VAR_31, &VAR_81, &VAR_84);
 VAR_81.sa_handler = VAR_36;
 FUNC_49(VAR_34, &VAR_81, ((void*)0));
 VAR_69 = 1;
 if (FUNC_43(VAR_86) == -1) {
  FUNC_0();
  FUNC_8(1, "pipe");
 }
 VAR_59 = FUNC_13();
 switch (VAR_59) {
 default:
  VAR_81.sa_handler = VAR_37;
  FUNC_49(VAR_35, &VAR_81, ((void*)0));
  FUNC_7(VAR_86[0]);
  FUNC_46(VAR_59, VAR_59);
  if (FUNC_58(VAR_38) == FUNC_20())
   FUNC_59(VAR_38, VAR_59);
  FUNC_7(VAR_86[1]);
  FUNC_49(VAR_31, &VAR_84, ((void*)0));
  while ((VAR_61 = FUNC_62(VAR_59, &VAR_69, VAR_40)) != -1) {
   if (FUNC_3(VAR_69)) {
    VAR_60 = FUNC_19(VAR_59);
    if (FUNC_58(VAR_38) == VAR_60)
     FUNC_59(VAR_38, FUNC_20());
    FUNC_26(FUNC_21(), VAR_33);
    if (FUNC_58(VAR_38) == FUNC_20()) {
     VAR_60 = FUNC_19(VAR_59);
     FUNC_59(VAR_38, VAR_60);
    }
    FUNC_26(VAR_59, VAR_29);
    VAR_69 = 1;
    continue;
   }
   break;
  }
  FUNC_59(VAR_38, FUNC_20());
  if (VAR_61 == -1)
   FUNC_8(1, "waitpid");
  FUNC_0();
  FUNC_11(FUNC_2(VAR_69));
 case -1:
  FUNC_0();
  FUNC_8(1, "fork");
 case 0:
  FUNC_7(VAR_86[1]);
  FUNC_44(VAR_86[0], &VAR_85, 1);
  FUNC_7(VAR_86[0]);
  FUNC_49(VAR_31, &VAR_84, ((void*)0));
  FUNC_49(VAR_30, &VAR_82, ((void*)0));
  FUNC_49(VAR_32, &VAR_83, ((void*)0));





  VAR_71 = VAR_3 & ~(VAR_4 | VAR_11 |
      VAR_6 | VAR_8 | VAR_5 |
      VAR_7);



  if (VAR_70)
   VAR_71 |= VAR_7;




  if ((VAR_62 || (!VAR_64 && VAR_73 == ((void*)0))) && VAR_53->pw_uid)
   VAR_71 &= ~(VAR_9 | VAR_10);
  if (FUNC_48(VAR_56, VAR_53, VAR_53->pw_uid, VAR_71) < 0)
   FUNC_8(1, "setusercontext");

  if (!VAR_62) {
   if (VAR_64) {
    VAR_75 = FUNC_15("TERM");
    VAR_43 = &VAR_52;
   }

   if (VAR_64 || VAR_53->pw_uid)
    FUNC_45("USER", VAR_53->pw_name, 1);
   FUNC_45("HOME", VAR_53->pw_dir, 1);
   FUNC_45("SHELL", VAR_77, 1);

   if (VAR_64) {




    VAR_44 = FUNC_38(VAR_49);
    if (VAR_44)
     FUNC_12();


    FUNC_48(VAR_56, VAR_53, VAR_53->pw_uid,
     VAR_8 | VAR_11 |
     VAR_4);
    if (VAR_75)
     FUNC_45("TERM", VAR_75, 1);

    VAR_75 = FUNC_37(VAR_49, "HOME");
    if (FUNC_5(VAR_75 ? VAR_75 : VAR_53->pw_dir) < 0)
     FUNC_9(1, "no directory");
   }
  }
  FUNC_27(VAR_56);

  if (VAR_55 == VAR_41) {
   if (VAR_65)
    *VAR_57.a-- = "-f";
   if (VAR_62)
    *VAR_57.a-- = "-m";
  }

  *VAR_57.a = VAR_64 ? "-su" : VAR_55 == VAR_41 ? "_su" : "su";

  if (VAR_58 != 0)
   FUNC_57(VAR_15, "%s to %s%s", VAR_72, VAR_76,
       FUNC_31());

  FUNC_10(VAR_77, VAR_57.b);
  FUNC_8(1, "%s", VAR_77);
 }
}
