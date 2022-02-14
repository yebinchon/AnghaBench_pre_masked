
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {int buf; } ;
struct ref_sorting {int ignore_case; } ;
struct ref_format {char const* format; } ;
struct TYPE_2__ {scalar_t__ nr; } ;
struct ref_filter {int kind; int abbrev; int detached; scalar_t__ merge; int ignore_case; char const** name_patterns; scalar_t__ verbose; scalar_t__ no_commit; TYPE_1__ points_at; scalar_t__ with_commit; } ;
struct option {char* member_2; int member_7; int member_6; int member_5; int member_4; TYPE_1__* member_3; int member_1; int member_0; } ;
struct branch {char const* name; int refname; } ;
typedef int filter ;
typedef enum branch_track { ____Placeholder_branch_track } branch_track ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int VAR_6 ;
 struct option FUNC_1 (char,char*,int*,int ,int) ;
 struct option FUNC_2 (char,char*,int*,int ) ;
 struct option FUNC_3 (int ,char*,scalar_t__*,int ) ;
 struct option FUNC_4 (scalar_t__*,int ) ;
 struct option FUNC_5 () ;
 struct option FUNC_6 (int ) ;
 struct option FUNC_7 (struct ref_filter*,int ) ;
 struct option FUNC_8 (scalar_t__*,int ) ;
 struct option FUNC_9 (struct ref_filter*,int ) ;
 struct option FUNC_10 (struct ref_sorting**) ;
 struct option FUNC_11 (char,char*,int*,int ,int) ;
 struct option FUNC_12 (int ,char*,int*,int ,int,int ) ;
 struct option FUNC_13 (unsigned char,char*,char const**,int ,int ) ;
 struct option FUNC_14 (scalar_t__*,int ) ;
 struct option FUNC_15 (scalar_t__*,int ) ;
 struct option FUNC_16 (int*) ;
 struct option FUNC_17 (int *,int ) ;
 struct option FUNC_18 (int*,int ,int ) ;
 struct option FUNC_19 (int*,int ) ;
 struct option FUNC_20 (scalar_t__*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 struct ref_format VAR_10 ;
 struct strbuf VAR_11 ;
 int FUNC_21 (char*) ;
 struct branch* FUNC_22 (char const*) ;
 int FUNC_23 (struct branch*) ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_24 (char const*,char const*,int,int) ;
 int FUNC_25 (int ,char const*,char const*,int,int ,int,int,int) ;
 int FUNC_26 (int,char const**,int,int,int) ;
 int FUNC_27 (int ,...) ;
 scalar_t__ FUNC_28 (char const*) ;
 int FUNC_29 (int ,char const*) ;
 scalar_t__ FUNC_30 (scalar_t__) ;
 int FUNC_31 (scalar_t__*,int) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_32 (int ,struct ref_sorting**) ;
 int FUNC_33 (int ,int *,int *,int) ;
 char const* VAR_17 ;
 int VAR_18 ;
 int FUNC_34 (struct ref_filter*,int ,int) ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_35 (int,char const**,char const*,struct option*,int ,int ) ;
 int FUNC_36 (int *,scalar_t__,int *) ;
 int FUNC_37 () ;
 int FUNC_38 (struct ref_filter*,struct ref_sorting*,struct ref_format*) ;
 struct ref_sorting* FUNC_39 () ;
 int FUNC_40 (int ) ;
 char* FUNC_41 (char*,int ,int *,int *) ;
 int FUNC_42 (char*,int) ;
 int FUNC_43 () ;
 int FUNC_44 (char const*,char*,char const**) ;
 int FUNC_45 (struct strbuf*,char*,char const*) ;
 int FUNC_46 (struct strbuf*) ;
 int FUNC_47 (struct strbuf*) ;
 int FUNC_48 (char const*,char*) ;
 int FUNC_49 (int *,int ) ;
 int VAR_21 ;
 int FUNC_50 (int ,struct option*) ;

int FUNC_51(int VAR_22, const char **VAR_23, const char *VAR_24)
{
 int VAR_25 = 0, VAR_26 = 0, VAR_27 = 0, VAR_28 = 0, VAR_29 = 0;
 int VAR_30 = 0;
 int VAR_31 = 0, VAR_32 = 0;
 int VAR_33 = 0, VAR_34 = 0;
 const char *VAR_35 = ((void*)0);
 enum branch_track VAR_36;
 struct ref_filter VAR_37;
 int VAR_38 = 0;
 static struct ref_sorting *VAR_39 = ((void*)0), **VAR_40 = &VAR_39;
 struct ref_format VAR_41 = VAR_10;

 struct option VAR_42[] = {
  FUNC_6(FUNC_0("Generic options")),
  FUNC_20(&VAR_37.verbose,
   FUNC_0("show hash and subject, give twice for upstream branch")),
  FUNC_19(&VAR_33, FUNC_0("suppress informational messages")),
  FUNC_11('t', "track", &VAR_36, FUNC_0("set up tracking mode (see git-pull(1))"),
   VAR_0),
  FUNC_12(0, "set-upstream", &VAR_36, FUNC_0("do not use"),
   VAR_1, VAR_7),
  FUNC_13('u', "set-upstream-to", &VAR_35, FUNC_0("upstream"), FUNC_0("change the upstream info")),
  FUNC_2(0, "unset-upstream", &VAR_34, FUNC_0("Unset the upstream info")),
  FUNC_17(&VAR_12, FUNC_0("use colored output")),
  FUNC_11('r', "remotes", &VAR_37.kind, FUNC_0("act on remote-tracking branches"),
   VAR_5),
  FUNC_4(&VAR_37.with_commit, FUNC_0("print only branches that contain the commit")),
  FUNC_8(&VAR_37.no_commit, FUNC_0("print only branches that don't contain the commit")),
  FUNC_14(&VAR_37.with_commit, FUNC_0("print only branches that contain the commit")),
  FUNC_15(&VAR_37.no_commit, FUNC_0("print only branches that don't contain the commit")),
  FUNC_16(&VAR_37.abbrev),

  FUNC_6(FUNC_0("Specific git-branch actions:")),
  FUNC_11('a', "all", &VAR_37.kind, FUNC_0("list both remote-tracking and local branches"),
   VAR_5 | VAR_3),
  FUNC_1('d', "delete", &VAR_25, FUNC_0("delete fully merged branch"), 1),
  FUNC_1('D', ((void*)0), &VAR_25, FUNC_0("delete branch (even if not merged)"), 2),
  FUNC_1('m', "move", &VAR_26, FUNC_0("move/rename a branch and its reflog"), 1),
  FUNC_1('M', ((void*)0), &VAR_26, FUNC_0("move/rename a branch, even if target exists"), 2),
  FUNC_1('c', "copy", &VAR_27, FUNC_0("copy a branch and its reflog"), 1),
  FUNC_1('C', ((void*)0), &VAR_27, FUNC_0("copy a branch, even if target exists"), 2),
  FUNC_2('l', "list", &VAR_29, FUNC_0("list branch names")),
  FUNC_2(0, "show-current", &VAR_30, FUNC_0("show current branch name")),
  FUNC_2(0, "create-reflog", &VAR_31, FUNC_0("create the branch's reflog")),
  FUNC_2(0, "edit-description", &VAR_32,
    FUNC_0("edit the description for the branch")),
  FUNC_18(&VAR_28, FUNC_0("force creation, move/rename, deletion"), VAR_8),
  FUNC_7(&VAR_37, FUNC_0("print only branches that are merged")),
  FUNC_9(&VAR_37, FUNC_0("print only branches that are not merged")),
  FUNC_3(0, "column", &VAR_14, FUNC_0("list branches in columns")),
  FUNC_10(VAR_40),
  {
   VAR_6, 0, "points-at", &VAR_37.points_at, FUNC_0("object"),
   FUNC_0("print only branches of the object"), 0, VAR_20
  },
  FUNC_2('i', "ignore-case", &VAR_38, FUNC_0("sorting and filtering are case insensitive")),
  FUNC_13( 0 , "format", &VAR_41.format, FUNC_0("format"), FUNC_0("format to use for the output")),
  FUNC_5(),
 };

 FUNC_43();

 FUNC_34(&VAR_37, 0, sizeof(VAR_37));
 VAR_37.kind = VAR_3;
 VAR_37.abbrev = -1;

 if (VAR_22 == 2 && !FUNC_48(VAR_23[1], "-h"))
  FUNC_50(VAR_13, VAR_42);

 FUNC_32(VAR_15, VAR_40);

 VAR_36 = VAR_16;

 VAR_17 = FUNC_41("HEAD", 0, &VAR_18, ((void*)0));
 if (!VAR_17)
  FUNC_27(FUNC_21("Failed to resolve HEAD as a valid ref."));
 if (!FUNC_48(VAR_17, "HEAD"))
  VAR_37.detached = 1;
 else if (!FUNC_44(VAR_17, "refs/heads/", &VAR_17))
  FUNC_27(FUNC_21("HEAD not found below refs/heads!"));

 VAR_22 = FUNC_35(VAR_22, VAR_23, VAR_24, VAR_42, VAR_13,
        0);

 if (!VAR_25 && !VAR_26 && !VAR_27 && !VAR_32 && !VAR_35 &&
     !VAR_30 && !VAR_34 && VAR_22 == 0)
  VAR_29 = 1;

 if (VAR_37.with_commit || VAR_37.merge != VAR_9 || VAR_37.points_at.nr ||
     VAR_37.no_commit)
  VAR_29 = 1;

 if (!!VAR_25 + !!VAR_26 + !!VAR_27 + !!VAR_35 + !!VAR_30 +
     VAR_29 + VAR_34 > 1)
  FUNC_50(VAR_13, VAR_42);

 if (VAR_37.abbrev == -1)
  VAR_37.abbrev = VAR_2;
 VAR_37.ignore_case = VAR_38;

 FUNC_31(&VAR_14, -1);
 if (VAR_37.verbose) {
  if (FUNC_30(VAR_14))
   FUNC_27(FUNC_21("--column and --verbose are incompatible"));
  VAR_14 = 0;
 }

 if (VAR_28) {
  VAR_25 *= 2;
  VAR_26 *= 2;
  VAR_27 *= 2;
 }

 if (VAR_29)
  FUNC_42("branch", 1);

 if (VAR_25) {
  if (!VAR_22)
   FUNC_27(FUNC_21("branch name required"));
  return FUNC_26(VAR_22, VAR_23, VAR_25 > 1, VAR_37.kind, VAR_33);
 } else if (VAR_30) {
  FUNC_37();
  return 0;
 } else if (VAR_29) {

  if ((VAR_37.kind & VAR_3) && VAR_37.detached)
   VAR_37.kind |= VAR_4;
  VAR_37.name_patterns = VAR_23;







  if (!VAR_39)
   VAR_39 = FUNC_39();
  VAR_39->ignore_case = VAR_38;
  FUNC_38(&VAR_37, VAR_39, &VAR_41);
  FUNC_36(&VAR_19, VAR_14, ((void*)0));
  FUNC_49(&VAR_19, 0);
  return 0;
 } else if (VAR_32) {
  const char *VAR_43;
  struct strbuf VAR_44 = VAR_11;

  if (!VAR_22) {
   if (VAR_37.detached)
    FUNC_27(FUNC_21("Cannot give description to detached HEAD"));
   VAR_43 = VAR_17;
  } else if (VAR_22 == 1)
   VAR_43 = VAR_23[0];
  else
   FUNC_27(FUNC_21("cannot edit description of more than one branch"));

  FUNC_45(&VAR_44, "refs/heads/%s", VAR_43);
  if (!FUNC_40(VAR_44.buf)) {
   FUNC_46(&VAR_44);

   if (!VAR_22)
    return FUNC_29(FUNC_21("No commit on branch '%s' yet."),
          VAR_43);
   else
    return FUNC_29(FUNC_21("No branch named '%s'."),
          VAR_43);
  }
  FUNC_46(&VAR_44);

  if (FUNC_28(VAR_43))
   return 1;
 } else if (VAR_27) {
  if (!VAR_22)
   FUNC_27(FUNC_21("branch name required"));
  else if (VAR_22 == 1)
   FUNC_24(VAR_17, VAR_23[0], 1, VAR_27 > 1);
  else if (VAR_22 == 2)
   FUNC_24(VAR_23[0], VAR_23[1], 1, VAR_27 > 1);
  else
   FUNC_27(FUNC_21("too many branches for a copy operation"));
 } else if (VAR_26) {
  if (!VAR_22)
   FUNC_27(FUNC_21("branch name required"));
  else if (VAR_22 == 1)
   FUNC_24(VAR_17, VAR_23[0], 0, VAR_26 > 1);
  else if (VAR_22 == 2)
   FUNC_24(VAR_23[0], VAR_23[1], 0, VAR_26 > 1);
  else
   FUNC_27(FUNC_21("too many arguments for a rename operation"));
 } else if (VAR_35) {
  struct branch *VAR_45 = FUNC_22(VAR_23[0]);

  if (VAR_22 > 1)
   FUNC_27(FUNC_21("too many arguments to set new upstream"));

  if (!VAR_45) {
   if (!VAR_22 || !FUNC_48(VAR_23[0], "HEAD"))
    FUNC_27(FUNC_21("could not set upstream of HEAD to %s when "
          "it does not point to any branch."),
        VAR_35);
   FUNC_27(FUNC_21("no such branch '%s'"), VAR_23[0]);
  }

  if (!FUNC_40(VAR_45->refname))
   FUNC_27(FUNC_21("branch '%s' does not exist"), VAR_45->name);





  FUNC_25(VAR_21, VAR_45->name, VAR_35,
         0, 0, 0, VAR_33, VAR_1);
 } else if (VAR_34) {
  struct branch *VAR_46 = FUNC_22(VAR_23[0]);
  struct strbuf VAR_47 = VAR_11;

  if (VAR_22 > 1)
   FUNC_27(FUNC_21("too many arguments to unset upstream"));

  if (!VAR_46) {
   if (!VAR_22 || !FUNC_48(VAR_23[0], "HEAD"))
    FUNC_27(FUNC_21("could not unset upstream of HEAD when "
          "it does not point to any branch."));
   FUNC_27(FUNC_21("no such branch '%s'"), VAR_23[0]);
  }

  if (!FUNC_23(VAR_46))
   FUNC_27(FUNC_21("Branch '%s' has no upstream information"), VAR_46->name);

  FUNC_45(&VAR_47, "branch.%s.remote", VAR_46->name);
  FUNC_33(VAR_47.buf, ((void*)0), ((void*)0), 1);
  FUNC_47(&VAR_47);
  FUNC_45(&VAR_47, "branch.%s.merge", VAR_46->name);
  FUNC_33(VAR_47.buf, ((void*)0), ((void*)0), 1);
  FUNC_46(&VAR_47);
 } else if (VAR_22 > 0 && VAR_22 <= 2) {
  if (VAR_37.kind != VAR_3)
   FUNC_27(FUNC_21("The -a, and -r, options to 'git branch' do not take a branch name.\n"
      "Did you mean to use: -a|-r --list <pattern>?"));

  if (VAR_36 == VAR_1)
   FUNC_27(FUNC_21("the '--set-upstream' option is no longer supported. Please use '--track' or '--set-upstream-to' instead."));

  FUNC_25(VAR_21,
         VAR_23[0], (VAR_22 == 2) ? VAR_23[1] : VAR_17,
         VAR_28, 0, VAR_31, VAR_33, VAR_36);

 } else
  FUNC_50(VAR_13, VAR_42);

 return 0;
}
