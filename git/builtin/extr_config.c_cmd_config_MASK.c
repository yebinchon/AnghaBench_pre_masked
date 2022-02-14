
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct worktree {int dummy; } ;
struct TYPE_8__ {int respect_includes; int git_dir; int commondir; } ;
struct TYPE_7__ {char* file; int use_stdin; scalar_t__ blob; } ;
struct TYPE_6__ {int have_repository; } ;


 int VAR_0 ;
 int VAR_1 ;
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
 char const* VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,int ,int ) ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_4 (int,int,int) ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;
 int VAR_29 ;
 TYPE_4__ VAR_30 ;
 scalar_t__ FUNC_7 (int ,int *,TYPE_2__*,TYPE_4__*) ;
 char* FUNC_8 () ;
 scalar_t__ VAR_31 ;
 char VAR_32 ;
 int FUNC_9 (int ,...) ;
 int FUNC_10 (int ,char*) ;
 int VAR_33 ;
 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 int FUNC_11 (int ,...) ;
 char* FUNC_12 (char*,int ) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (struct worktree**) ;
 int FUNC_15 (char const*,char const*) ;
 int FUNC_16 (char const*,int) ;
 int FUNC_17 () ;
 int FUNC_18 () ;
 int FUNC_19 (char const*,char const*) ;
 int FUNC_20 (char const*,char const*) ;
 struct worktree** FUNC_21 (int ) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int ,int *) ;
 int FUNC_24 (char*,char const*) ;
 int FUNC_25 (char*,char const*,char const*) ;
 int FUNC_26 (char*,char const*,char*) ;
 int FUNC_27 (char*,char const*,char*,char const*,int) ;
 int VAR_36 ;
 char* FUNC_28 () ;
 void* FUNC_29 (char*) ;
 TYPE_2__ VAR_37 ;
 int FUNC_30 (char*) ;
 char VAR_38 ;
 int FUNC_31 (char*,int *,int *) ;
 char* FUNC_32 (char const*,char const*) ;
 scalar_t__ VAR_39 ;
 int FUNC_33 (char*,int,int) ;
 int FUNC_34 (int,char const**,char const*,int ,int ,int ) ;
 char* FUNC_35 (char const*,char*) ;
 scalar_t__ VAR_40 ;
 int VAR_41 ;
 int FUNC_36 (char*,int) ;
 int VAR_42 ;
 int VAR_43 ;
 scalar_t__ VAR_44 ;
 TYPE_1__* VAR_45 ;
 int FUNC_37 (char*,char*) ;
 char VAR_46 ;
 scalar_t__ VAR_47 ;
 int FUNC_38 () ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int FUNC_39 (int,char*) ;
 char* FUNC_40 (char*) ;
 void* FUNC_41 (char*) ;
 char* FUNC_42 (int ) ;

int FUNC_43(int VAR_53, const char **VAR_54, const char *VAR_55)
{
 int VAR_56 = !VAR_45->have_repository;
 char *VAR_57;

 VAR_37.file = FUNC_42(FUNC_22(VAR_16));

 VAR_53 = FUNC_34(VAR_53, VAR_54, VAR_55, VAR_27,
        VAR_28,
        VAR_24);

 if (VAR_48 + VAR_51 + VAR_50 +
     VAR_52 +
     !!VAR_37.file + !!VAR_37.blob > 1) {
  FUNC_11(FUNC_2("only one config file at a time"));
  FUNC_38();
 }

 if (VAR_50 && VAR_56)
  FUNC_9(FUNC_2("--local can only be used inside a git repository"));

 if (VAR_37.blob && VAR_56)
  FUNC_9(FUNC_2("--blob can only be used inside a git repository"));

 if (VAR_37.file &&
   !FUNC_37(VAR_37.file, "-")) {
  VAR_37.file = ((void*)0);
  VAR_37.use_stdin = 1;
 }

 if (VAR_48) {
  char *VAR_58 = FUNC_12("~/.gitconfig", 0);
  char *VAR_59 = FUNC_40("config");

  if (!VAR_58)






   FUNC_9(FUNC_2("$HOME not set"));

  if (FUNC_3(VAR_58, VAR_25, 0) &&
      VAR_59 && !FUNC_3(VAR_59, VAR_25, 0)) {
   VAR_37.file = VAR_59;
   FUNC_13(VAR_58);
  } else {
   VAR_37.file = VAR_58;
   FUNC_13(VAR_59);
  }
 }
 else if (VAR_51)
  VAR_37.file = FUNC_28();
 else if (VAR_50)
  VAR_37.file = FUNC_29("config");
 else if (VAR_52) {
  struct worktree **VAR_60 = FUNC_21(0);
  if (VAR_40)
   VAR_37.file = FUNC_29("config.worktree");
  else if (VAR_60[0] && VAR_60[1])
   FUNC_9(FUNC_2("--worktree cannot be used with multiple "
         "working trees unless the config\n"
         "extension worktreeConfig is enabled. "
         "Please read \"CONFIGURATION FILE\"\n"
         "section in \"git help worktree\" for details"));
  else
   VAR_37.file = FUNC_29("config");
  FUNC_14(VAR_60);
 } else if (VAR_37.file) {
  if (!FUNC_30(VAR_37.file) && VAR_55)
   VAR_37.file =
    FUNC_35(VAR_55, VAR_37.file);
 }

 if (VAR_41 == -1)
  VAR_30.respect_includes = !VAR_37.file;
 else
  VAR_30.respect_includes = VAR_41;
 if (!VAR_56) {
  VAR_30.commondir = FUNC_17();
  VAR_30.git_dir = FUNC_18();
 }

 if (VAR_34) {
  VAR_46 = '\0';
  VAR_32 = '\n';
  VAR_38 = '\n';
 }

 if ((VAR_26 & (VAR_4|VAR_5)) && VAR_47) {
  FUNC_11(FUNC_2("--get-color and variable type are incoherent"));
  FUNC_38();
 }

 if (FUNC_0(VAR_26)) {
  FUNC_11(FUNC_2("only one action at a time"));
  FUNC_38();
 }
 if (VAR_26 == 0)
  switch (VAR_53) {
  case 1: VAR_26 = VAR_2; break;
  case 2: VAR_26 = VAR_12; break;
  case 3: VAR_26 = VAR_13; break;
  default:
   FUNC_38();
  }
 if (VAR_39 &&
     !(VAR_26 == VAR_8 || VAR_26 == VAR_6)) {
  FUNC_11(FUNC_2("--name-only is only applicable to --list or --get-regexp"));
  FUNC_38();
 }

 if (VAR_44 && !(VAR_26 &
  (VAR_2|VAR_3|VAR_6|VAR_8))) {
  FUNC_11(FUNC_2("--show-origin is only applicable to --get, --get-all, "
   "--get-regexp, and --list"));
  FUNC_38();
 }

 if (VAR_31 && !(VAR_26 & VAR_2)) {
  FUNC_11(FUNC_2("--default is only applicable to --get"));
  FUNC_38();
 }

 if (VAR_26 & VAR_23)
  FUNC_36("config", 1);

 if (VAR_26 == VAR_8) {
  FUNC_4(VAR_53, 0, 0);
  if (FUNC_7(VAR_42, ((void*)0),
     &VAR_37,
     &VAR_30) < 0) {
   if (VAR_37.file)
    FUNC_10(FUNC_2("unable to read config file '%s'"),
       VAR_37.file);
   else
    FUNC_9(FUNC_2("error processing config file(s)"));
  }
 }
 else if (VAR_26 == VAR_1) {
  char *VAR_61;

  FUNC_4(VAR_53, 0, 0);
  if (!VAR_37.file && VAR_56)
   FUNC_9(FUNC_2("not in a git directory"));
  if (VAR_37.use_stdin)
   FUNC_9(FUNC_2("editing stdin is not supported"));
  if (VAR_37.blob)
   FUNC_9(FUNC_2("editing blobs is not supported"));
  FUNC_23(VAR_36, ((void*)0));
  VAR_61 = VAR_37.file ?
    FUNC_41(VAR_37.file) :
    FUNC_29("config");
  if (VAR_48) {
   int VAR_62 = FUNC_33(VAR_61, VAR_20 | VAR_21 | VAR_22, 0666);
   if (VAR_62 >= 0) {
    char *VAR_63 = FUNC_8();
    FUNC_39(VAR_62, VAR_63);
    FUNC_13(VAR_63);
    FUNC_6(VAR_62);
   }
   else if (VAR_35 != VAR_19)
    FUNC_10(FUNC_2("cannot create configuration file %s"), VAR_61);
  }
  FUNC_31(VAR_61, ((void*)0), ((void*)0));
  FUNC_13(VAR_61);
 }
 else if (VAR_26 == VAR_12) {
  int VAR_64;
  FUNC_5();
  FUNC_4(VAR_53, 2, 2);
  VAR_57 = FUNC_32(VAR_54[0], VAR_54[1]);
  FUNC_1(VAR_57);
  VAR_64 = FUNC_26(VAR_37.file, VAR_54[0], VAR_57);
  if (VAR_64 == VAR_17)
   FUNC_11(FUNC_2("cannot overwrite multiple values with a single value\n"
   "       Use a regexp, --add or --replace-all to change %s."), VAR_54[0]);
  return VAR_64;
 }
 else if (VAR_26 == VAR_13) {
  FUNC_5();
  FUNC_4(VAR_53, 2, 3);
  VAR_57 = FUNC_32(VAR_54[0], VAR_54[1]);
  FUNC_1(VAR_57);
  return FUNC_27(VAR_37.file,
             VAR_54[0], VAR_57, VAR_54[2], 0);
 }
 else if (VAR_26 == VAR_0) {
  FUNC_5();
  FUNC_4(VAR_53, 2, 2);
  VAR_57 = FUNC_32(VAR_54[0], VAR_54[1]);
  FUNC_1(VAR_57);
  return FUNC_27(VAR_37.file,
             VAR_54[0], VAR_57,
             VAR_18, 0);
 }
 else if (VAR_26 == VAR_11) {
  FUNC_5();
  FUNC_4(VAR_53, 2, 3);
  VAR_57 = FUNC_32(VAR_54[0], VAR_54[1]);
  FUNC_1(VAR_57);
  return FUNC_27(VAR_37.file,
             VAR_54[0], VAR_57, VAR_54[2], 1);
 }
 else if (VAR_26 == VAR_2) {
  FUNC_4(VAR_53, 1, 2);
  return FUNC_20(VAR_54[0], VAR_54[1]);
 }
 else if (VAR_26 == VAR_3) {
  VAR_33 = 1;
  FUNC_4(VAR_53, 1, 2);
  return FUNC_20(VAR_54[0], VAR_54[1]);
 }
 else if (VAR_26 == VAR_6) {
  VAR_43 = 1;
  VAR_49 = 1;
  VAR_33 = 1;
  FUNC_4(VAR_53, 1, 2);
  return FUNC_20(VAR_54[0], VAR_54[1]);
 }
 else if (VAR_26 == VAR_7) {
  FUNC_4(VAR_53, 2, 2);
  return FUNC_19(VAR_54[0], VAR_54[1]);
 }
 else if (VAR_26 == VAR_14) {
  FUNC_5();
  FUNC_4(VAR_53, 1, 2);
  if (VAR_53 == 2)
   return FUNC_27(VAR_37.file,
              VAR_54[0], ((void*)0), VAR_54[1], 0);
  else
   return FUNC_26(VAR_37.file,
            VAR_54[0], ((void*)0));
 }
 else if (VAR_26 == VAR_15) {
  FUNC_5();
  FUNC_4(VAR_53, 1, 2);
  return FUNC_27(VAR_37.file,
             VAR_54[0], ((void*)0), VAR_54[1], 1);
 }
 else if (VAR_26 == VAR_10) {
  int VAR_65;
  FUNC_5();
  FUNC_4(VAR_53, 2, 2);
  VAR_65 = FUNC_25(VAR_37.file,
       VAR_54[0], VAR_54[1]);
  if (VAR_65 < 0)
   return VAR_65;
  if (VAR_65 == 0)
   FUNC_9(FUNC_2("no such section: %s"), VAR_54[0]);
 }
 else if (VAR_26 == VAR_9) {
  int VAR_66;
  FUNC_5();
  FUNC_4(VAR_53, 1, 1);
  VAR_66 = FUNC_25(VAR_37.file,
       VAR_54[0], ((void*)0));
  if (VAR_66 < 0)
   return VAR_66;
  if (VAR_66 == 0)
   FUNC_9(FUNC_2("no such section: %s"), VAR_54[0]);
 }
 else if (VAR_26 == VAR_4) {
  FUNC_4(VAR_53, 1, 2);
  FUNC_15(VAR_54[0], VAR_54[1]);
 }
 else if (VAR_26 == VAR_5) {
  FUNC_4(VAR_53, 1, 2);
  if (VAR_53 == 2)
   VAR_29 = FUNC_24("command line", VAR_54[1]);
  return FUNC_16(VAR_54[0], VAR_53 == 2);
 }

 return 0;
}
