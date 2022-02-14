
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {char member_1; char* member_2; char const* member_4; char const* member_5; intptr_t member_8; int * member_7; int member_6; int * member_3; int member_0; } ;
struct argv_array {int argv; int argc; } ;
struct am_state {scalar_t__ signoff; scalar_t__ keep; int rebasing; scalar_t__ interactive; int dir; int sign_commit; int allow_rerere_autoupdate; scalar_t__ ignore_date; scalar_t__ committer_date_is_author_date; int resolvemsg; int git_apply_opts; scalar_t__ scissors; scalar_t__ message_id; scalar_t__ utf8; int quiet; scalar_t__ threeway; } ;
typedef enum resume_mode { ____Placeholder_resume_mode } resume_mode ;


 struct argv_array VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 char const* FUNC_1 (char*) ;
 int VAR_4 ;
 struct option FUNC_2 (char,char*,scalar_t__*,char const*) ;
 struct option FUNC_3 (int ,char*,int*,char const*,char const*,int ) ;
 struct option FUNC_4 (char,char*,int*,char const*,int) ;
 struct option FUNC_5 () ;
 struct option FUNC_6 (char,char*,int*,char const*) ;
 struct option FUNC_7 (char,char*,int *,char const*,char const*,int ) ;
 struct option FUNC_8 (int *) ;
 struct option FUNC_9 (char,char*,scalar_t__*,char const*,scalar_t__) ;
 struct option FUNC_10 (int ,char*,int*,char const*,int,int ) ;
 struct option FUNC_11 (int ,char*,int *,int *,char const*) ;
 struct option FUNC_12 (int *,char const*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;







 scalar_t__ VAR_9 ;
 int FUNC_13 (char*) ;
 int FUNC_14 (struct am_state*) ;
 int FUNC_15 (struct am_state*) ;
 int FUNC_16 (struct am_state*) ;
 int FUNC_17 (struct am_state*) ;
 int FUNC_18 (struct am_state*) ;
 int FUNC_19 () ;
 int FUNC_20 (struct am_state*) ;
 int FUNC_21 (struct am_state*,int) ;
 int FUNC_22 (struct am_state*,int,int ,int) ;
 int FUNC_23 (struct am_state*) ;
 int FUNC_24 (struct am_state*) ;
 int FUNC_25 (struct am_state*) ;
 int FUNC_26 (struct argv_array*) ;
 int FUNC_27 (struct argv_array*,char const*) ;
 int FUNC_28 (int ,...) ;
 scalar_t__ FUNC_29 (int ) ;
 int FUNC_30 (int ,int ) ;
 int VAR_10 ;
 int FUNC_31 (int ) ;
 int FUNC_32 (int ,int *) ;
 scalar_t__ FUNC_33 (char const*) ;
 int FUNC_34 (int ) ;
 char const* FUNC_35 (char*,char const*,char const*) ;
 int VAR_11 ;
 int FUNC_36 (int,char const**,char const*,struct option*,char const* const*,int ) ;
 scalar_t__ FUNC_37 (int ,int *,int ) ;
 int FUNC_38 (struct am_state*) ;
 int VAR_12 ;
 int FUNC_39 (char const*,char*) ;
 int VAR_13 ;
 int FUNC_40 (char const* const*,struct option*) ;

int FUNC_41(int VAR_14, const char **VAR_15, const char *VAR_16)
{
 struct am_state VAR_17;
 int VAR_18 = -1;
 int VAR_19 = -1;
 int VAR_20 = VAR_8;
 enum resume_mode VAR_21 = 132;
 int VAR_22;
 int VAR_23 = 0;

 const char * const VAR_24[] = {
  FUNC_1("git am [<options>] [(<mbox> | <Maildir>)...]"),
  FUNC_1("git am [<options>] (--continue | --skip | --abort)"),
  ((void*)0)
 };

 struct option VAR_25[] = {
  FUNC_2('i', "interactive", &VAR_17.interactive,
   FUNC_1("run interactively")),
  FUNC_6('b', "binary", &VAR_18,
   FUNC_1("historical option -- no-op")),
  FUNC_2('3', "3way", &VAR_17.threeway,
   FUNC_1("allow fall back on 3way merging if needed")),
  FUNC_12(&VAR_17.quiet, FUNC_1("be quiet")),
  FUNC_9('s', "signoff", &VAR_17.signoff,
   FUNC_1("add a Signed-off-by line to the commit message"),
   VAR_9),
  FUNC_2('u', "utf8", &VAR_17.utf8,
   FUNC_1("recode into utf8 (default)")),
  FUNC_9('k', "keep", &VAR_17.keep,
   FUNC_1("pass -k flag to git-mailinfo"), VAR_3),
  FUNC_9(0, "keep-non-patch", &VAR_17.keep,
   FUNC_1("pass -b flag to git-mailinfo"), VAR_2),
  FUNC_2('m', "message-id", &VAR_17.message_id,
   FUNC_1("pass -m flag to git-mailinfo")),
  FUNC_10(0, "keep-cr", &VAR_19,
   FUNC_1("pass --keep-cr flag to git-mailsplit for mbox format"),
   1, VAR_6),
  FUNC_10(0, "no-keep-cr", &VAR_19,
   FUNC_1("do not pass --keep-cr flag to git-mailsplit independent of am.keepcr"),
   0, VAR_6),
  FUNC_2('c', "scissors", &VAR_17.scissors,
   FUNC_1("strip everything before a scissors line")),
  FUNC_7(0, "whitespace", &VAR_17.git_apply_opts, FUNC_1("action"),
   FUNC_1("pass it through git-apply"),
   0),
  FUNC_7(0, "ignore-space-change", &VAR_17.git_apply_opts, ((void*)0),
   FUNC_1("pass it through git-apply"),
   VAR_5),
  FUNC_7(0, "ignore-whitespace", &VAR_17.git_apply_opts, ((void*)0),
   FUNC_1("pass it through git-apply"),
   VAR_5),
  FUNC_7(0, "directory", &VAR_17.git_apply_opts, FUNC_1("root"),
   FUNC_1("pass it through git-apply"),
   0),
  FUNC_7(0, "exclude", &VAR_17.git_apply_opts, FUNC_1("path"),
   FUNC_1("pass it through git-apply"),
   0),
  FUNC_7(0, "include", &VAR_17.git_apply_opts, FUNC_1("path"),
   FUNC_1("pass it through git-apply"),
   0),
  FUNC_7('C', ((void*)0), &VAR_17.git_apply_opts, FUNC_1("n"),
   FUNC_1("pass it through git-apply"),
   0),
  FUNC_7('p', ((void*)0), &VAR_17.git_apply_opts, FUNC_1("num"),
   FUNC_1("pass it through git-apply"),
   0),
  FUNC_3(0, "patch-format", &VAR_20, FUNC_1("format"),
   FUNC_1("format the patch(es) are in"),
   VAR_11),
  FUNC_7(0, "reject", &VAR_17.git_apply_opts, ((void*)0),
   FUNC_1("pass it through git-apply"),
   VAR_5),
  FUNC_11(0, "resolvemsg", &VAR_17.resolvemsg, ((void*)0),
   FUNC_1("override error message when patch failure occurs")),
  FUNC_4(0, "continue", &VAR_21,
   FUNC_1("continue applying patches after resolving a conflict"),
   130),
  FUNC_4('r', "resolved", &VAR_21,
   FUNC_1("synonyms for --continue"),
   130),
  FUNC_4(0, "skip", &VAR_21,
   FUNC_1("skip the current patch"),
   128),
  FUNC_4(0, "abort", &VAR_21,
   FUNC_1("restore the original branch and abort the patching operation."),
   134),
  FUNC_4(0, "quit", &VAR_21,
   FUNC_1("abort the patching operation but keep HEAD where it is."),
   131),
  FUNC_4(0, "show-current-patch", &VAR_21,
   FUNC_1("show the patch being applied."),
   129),
  FUNC_2(0, "committer-date-is-author-date",
   &VAR_17.committer_date_is_author_date,
   FUNC_1("lie about committer date")),
  FUNC_2(0, "ignore-date", &VAR_17.ignore_date,
   FUNC_1("use current timestamp for author date")),
  FUNC_8(&VAR_17.allow_rerere_autoupdate),
  { VAR_4, 'S', "gpg-sign", &VAR_17.sign_commit, FUNC_1("key-id"),
    FUNC_1("GPG-sign commits"),
    VAR_7, ((void*)0), (intptr_t) "" },
  FUNC_6(0, "rebasing", &VAR_17.rebasing,
   FUNC_1("(internal use for git-rebase)")),
  FUNC_5()
 };

 if (VAR_14 == 2 && !FUNC_39(VAR_15[1], "-h"))
  FUNC_40(VAR_24, VAR_25);

 FUNC_32(VAR_10, ((void*)0));

 FUNC_24(&VAR_17);

 VAR_22 = FUNC_17(&VAR_17);
 if (VAR_22)
  FUNC_18(&VAR_17);

 VAR_14 = FUNC_36(VAR_14, VAR_15, VAR_16, VAR_25, VAR_24, 0);

 if (VAR_18 >= 0)
  FUNC_30(VAR_12, FUNC_13("The -b/--binary option has been a no-op for long time, and\n"
    "it will be removed. Please do not use it anymore."));


 FUNC_31(VAR_1);

 if (FUNC_37(VAR_13, ((void*)0), 0) < 0)
  FUNC_28(FUNC_13("failed to read the index"));

 if (VAR_22) {
  if (VAR_14 || (VAR_21 == 132 && !FUNC_34(0)))
   FUNC_28(FUNC_13("previous rebase directory %s still exists but mbox given."),
    VAR_17.dir);

  if (VAR_21 == 132)
   VAR_21 = 133;

  if (VAR_17.signoff == VAR_9)
   FUNC_15(&VAR_17);
 } else {
  struct argv_array VAR_26 = VAR_0;
  int VAR_27;






  if (FUNC_29(VAR_17.dir) && !VAR_17.rebasing) {
   if (VAR_21 == 134 || VAR_21 == 131) {
    FUNC_16(&VAR_17);
    FUNC_25(&VAR_17);
    return 0;
   }

   FUNC_28(FUNC_13("Stray %s directory found.\n"
    "Use \"git am --abort\" to remove it."),
    VAR_17.dir);
  }

  if (VAR_21)
   FUNC_28(FUNC_13("Resolve operation not in progress, we are not resuming."));

  for (VAR_27 = 0; VAR_27 < VAR_14; VAR_27++) {
   if (FUNC_33(VAR_15[VAR_27]) || !VAR_16)
    FUNC_27(&VAR_26, VAR_15[VAR_27]);
   else
    FUNC_27(&VAR_26, FUNC_35("%s/%s", VAR_16, VAR_15[VAR_27]));
  }

  if (VAR_17.interactive && !VAR_26.argc)
   FUNC_28(FUNC_13("interactive mode requires patches on the command line"));

  FUNC_22(&VAR_17, VAR_20, VAR_26.argv, VAR_19);

  FUNC_26(&VAR_26);
 }

 switch (VAR_21) {
 case 132:
  FUNC_21(&VAR_17, 0);
  break;
 case 133:
  FUNC_21(&VAR_17, 1);
  break;
 case 130:
  FUNC_20(&VAR_17);
  break;
 case 128:
  FUNC_23(&VAR_17);
  break;
 case 134:
  FUNC_14(&VAR_17);
  break;
 case 131:
  FUNC_19();
  FUNC_16(&VAR_17);
  break;
 case 129:
  VAR_23 = FUNC_38(&VAR_17);
  break;
 default:
  FUNC_0("invalid resume value");
 }

 FUNC_25(&VAR_17);

 return VAR_23;
}
