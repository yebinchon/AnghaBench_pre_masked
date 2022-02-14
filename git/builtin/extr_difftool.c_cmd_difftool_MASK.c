
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct option {int dummy; } ;
struct TYPE_2__ {int have_repository; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int * FUNC_0 (char*) ;
 struct option FUNC_1 (char*,int*,int *) ;
 struct option FUNC_2 (char,char*,int*,int *) ;
 struct option FUNC_3 () ;
 struct option FUNC_4 (char,char*,int*,int *,int,int) ;
 struct option FUNC_5 (char,char*,char**,int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (int ) ;
 int VAR_6 ;
 int FUNC_8 (int ) ;
 int VAR_7 ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (int ,int *) ;
 int VAR_8 ;
 int FUNC_12 (int,char const**,char const*,struct option*,int ,int) ;
 int FUNC_13 () ;
 int FUNC_14 (char*,int,char const*,int,char const**) ;
 int FUNC_15 (int,char const*,int,char const**) ;
 int FUNC_16 (char*,char*,int) ;
 int FUNC_17 () ;
 TYPE_1__* VAR_9 ;
 int VAR_10 ;

int FUNC_18(int VAR_11, const char **VAR_12, const char *VAR_13)
{
 int VAR_14 = 0, VAR_15 = 0, VAR_16 = -1, VAR_17 = 0,
     VAR_18 = 0, VAR_19 = 0;
 static char *VAR_20 = ((void*)0), *VAR_21 = ((void*)0);
 struct option VAR_22[] = {
  FUNC_2('g', "gui", &VAR_14,
    FUNC_0("use `diff.guitool` instead of `diff.tool`")),
  FUNC_2('d', "dir-diff", &VAR_15,
    FUNC_0("perform a full-directory diff")),
  FUNC_4('y', "no-prompt", &VAR_16,
   FUNC_0("do not prompt before launching a diff tool"),
   0, VAR_5),
  FUNC_4(0, "prompt", &VAR_16, ((void*)0),
   1, VAR_5 | VAR_2),
  FUNC_2(0, "symlinks", &VAR_17,
    FUNC_0("use symlinks in dir-diff mode")),
  FUNC_5('t', "tool", &VAR_20, FUNC_0("tool"),
      FUNC_0("use the specified diff tool")),
  FUNC_2(0, "tool-help", &VAR_18,
    FUNC_0("print a list of diff tools that may be used with "
       "`--tool`")),
  FUNC_2(0, "trust-exit-code", &VAR_10,
    FUNC_0("make 'git-difftool' exit when an invoked diff "
       "tool returns a non - zero exit code")),
  FUNC_5('x', "extcmd", &VAR_21, FUNC_0("command"),
      FUNC_0("specify a custom command for viewing diffs")),
  FUNC_1("no-index", &VAR_19, FUNC_0("passed to `diff`")),
  FUNC_3()
 };

 FUNC_11(VAR_7, ((void*)0));
 VAR_17 = VAR_8;

 VAR_11 = FUNC_12(VAR_11, VAR_12, VAR_13, VAR_22,
        VAR_6, VAR_4 |
        VAR_3);

 if (VAR_18)
  return FUNC_13();

 if (!VAR_19 && !VAR_9->have_repository)
  FUNC_8(FUNC_6("difftool requires worktree or --no-index"));

 if (!VAR_19){
  FUNC_17();
  FUNC_16(VAR_0, FUNC_7(FUNC_9()), 1);
  FUNC_16(VAR_1, FUNC_7(FUNC_10()), 1);
 } else if (VAR_15)
  FUNC_8(FUNC_6("--dir-diff is incompatible with --no-index"));

 if (VAR_14 + !!VAR_20 + !!VAR_21 > 1)
  FUNC_8(FUNC_6("--gui, --tool and --extcmd are mutually exclusive"));

 if (VAR_14)
  FUNC_16("GIT_MERGETOOL_GUI", "true", 1);
 else if (VAR_20) {
  if (*VAR_20)
   FUNC_16("GIT_DIFF_TOOL", VAR_20, 1);
  else
   FUNC_8(FUNC_6("no <tool> given for --tool=<tool>"));
 }

 if (VAR_21) {
  if (*VAR_21)
   FUNC_16("GIT_DIFFTOOL_EXTCMD", VAR_21, 1);
  else
   FUNC_8(FUNC_6("no <cmd> given for --extcmd=<cmd>"));
 }

 FUNC_16("GIT_DIFFTOOL_TRUST_EXIT_CODE",
        VAR_10 ? "true" : "false", 1);







 if (VAR_15)
  return FUNC_14(VAR_21, VAR_17, VAR_13, VAR_11, VAR_12);
 return FUNC_15(VAR_16, VAR_13, VAR_11, VAR_12);
}
