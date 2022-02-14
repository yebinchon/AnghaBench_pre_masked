
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ nr; } ;
struct TYPE_3__ {char* onto; char* detached_from; scalar_t__ detached_at; scalar_t__ rebase_interactive_in_progress; scalar_t__ rebase_in_progress; } ;
struct wt_status {char* branch; char const* ignore_submodule_arg; int untracked_in_ms; scalar_t__ show_stash; scalar_t__ hints; scalar_t__ show_untracked_files; scalar_t__ is_initial; TYPE_2__ untracked; scalar_t__ workdir_dirty; scalar_t__ nowarn; scalar_t__ amend; scalar_t__ committable; scalar_t__ verbose; TYPE_2__ ignored; scalar_t__ show_ignored_mode; scalar_t__ submodule_summary; scalar_t__ commit_template; TYPE_1__ state; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_0 (char*) ;
 scalar_t__ VAR_6 ;
 char* FUNC_1 (int ,struct wt_status*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char const*,char*,char const**) ;
 int FUNC_4 (struct wt_status*,char*,char*,char*) ;
 int FUNC_5 (struct wt_status*,char*,char*,...) ;
 int FUNC_6 (struct wt_status*,char const*,char*,char const*) ;
 scalar_t__ FUNC_7 (char const*,char*) ;
 int FUNC_8 (struct wt_status*) ;
 int FUNC_9 (struct wt_status*,TYPE_2__*,char*,char*) ;
 int FUNC_10 (struct wt_status*) ;
 int FUNC_11 (struct wt_status*) ;
 int FUNC_12 (struct wt_status*,int) ;
 int FUNC_13 (struct wt_status*) ;
 int FUNC_14 (struct wt_status*) ;
 int FUNC_15 (struct wt_status*) ;
 int FUNC_16 (struct wt_status*) ;

__attribute__((used)) static void FUNC_17(struct wt_status *VAR_7)
{
 const char *VAR_8 = FUNC_1(VAR_5, VAR_7);
 const char *VAR_9 = FUNC_1(VAR_3, VAR_7);

 if (VAR_7->branch) {
  const char *VAR_10 = FUNC_0("On branch ");
  const char *VAR_11 = VAR_7->branch;
  if (!FUNC_7(VAR_11, "HEAD")) {
   VAR_9 = FUNC_1(VAR_4, VAR_7);
   if (VAR_7->state.rebase_in_progress ||
       VAR_7->state.rebase_interactive_in_progress) {
    if (VAR_7->state.rebase_interactive_in_progress)
     VAR_10 = FUNC_0("interactive rebase in progress; onto ");
    else
     VAR_10 = FUNC_0("rebase in progress; onto ");
    VAR_11 = VAR_7->state.onto;
   } else if (VAR_7->state.detached_from) {
    VAR_11 = VAR_7->state.detached_from;
    if (VAR_7->state.detached_at)
     VAR_10 = VAR_1;
    else
     VAR_10 = VAR_2;
   } else {
    VAR_11 = "";
    VAR_10 = FUNC_0("Not currently on any branch.");
   }
  } else
   FUNC_3(VAR_11, "refs/heads/", &VAR_11);
  FUNC_4(VAR_7, FUNC_1(VAR_3, VAR_7), "%s", "");
  FUNC_6(VAR_7, VAR_9, "%s", VAR_10);
  FUNC_6(VAR_7, VAR_8, "%s\n", VAR_11);
  if (!VAR_7->is_initial)
   FUNC_13(VAR_7);
 }

 FUNC_11(VAR_7);

 if (VAR_7->is_initial) {
  FUNC_5(VAR_7, FUNC_1(VAR_3, VAR_7), "%s", "");
  FUNC_5(VAR_7, FUNC_1(VAR_3, VAR_7),
     VAR_7->commit_template
     ? FUNC_0("Initial commit")
     : FUNC_0("No commits yet"));
  FUNC_5(VAR_7, FUNC_1(VAR_3, VAR_7), "%s", "");
 }

 FUNC_15(VAR_7);
 FUNC_14(VAR_7);
 FUNC_8(VAR_7);
 if (VAR_7->submodule_summary &&
     (!VAR_7->ignore_submodule_arg ||
      FUNC_7(VAR_7->ignore_submodule_arg, "all"))) {
  FUNC_12(VAR_7, 0);
  FUNC_12(VAR_7, 1);
 }
 if (VAR_7->show_untracked_files) {
  FUNC_9(VAR_7, &VAR_7->untracked, FUNC_0("Untracked files"), "add");
  if (VAR_7->show_ignored_mode)
   FUNC_9(VAR_7, &VAR_7->ignored, FUNC_0("Ignored files"), "add -f");
  if (VAR_6 && 2000 < VAR_7->untracked_in_ms) {
   FUNC_5(VAR_7, VAR_0, "%s", "");
   FUNC_5(VAR_7, VAR_0,
      FUNC_0("It took %.2f seconds to enumerate untracked files. 'status -uno'\n"
        "may speed it up, but you have to be careful not to forget to add\n"
        "new files yourself (see 'git help status')."),
      VAR_7->untracked_in_ms / 1000.0);
  }
 } else if (VAR_7->committable)
  FUNC_5(VAR_7, VAR_0, FUNC_0("Untracked files not listed%s"),
   VAR_7->hints
   ? FUNC_0(" (use -u option to show untracked files)") : "");

 if (VAR_7->verbose)
  FUNC_16(VAR_7);
 if (!VAR_7->committable) {
  if (VAR_7->amend)
   FUNC_5(VAR_7, VAR_0, FUNC_0("No changes"));
  else if (VAR_7->nowarn)
   ;
  else if (VAR_7->workdir_dirty) {
   if (VAR_7->hints)
    FUNC_2(FUNC_0("no changes added to commit "
      "(use \"git add\" and/or \"git commit -a\")\n"));
   else
    FUNC_2(FUNC_0("no changes added to commit\n"));
  } else if (VAR_7->untracked.nr) {
   if (VAR_7->hints)
    FUNC_2(FUNC_0("nothing added to commit but untracked files "
      "present (use \"git add\" to track)\n"));
   else
    FUNC_2(FUNC_0("nothing added to commit but untracked files present\n"));
  } else if (VAR_7->is_initial) {
   if (VAR_7->hints)
    FUNC_2(FUNC_0("nothing to commit (create/copy files "
      "and use \"git add\" to track)\n"));
   else
    FUNC_2(FUNC_0("nothing to commit\n"));
  } else if (!VAR_7->show_untracked_files) {
   if (VAR_7->hints)
    FUNC_2(FUNC_0("nothing to commit (use -u to show untracked files)\n"));
   else
    FUNC_2(FUNC_0("nothing to commit\n"));
  } else
   FUNC_2(FUNC_0("nothing to commit, working tree clean\n"));
 }
 if(VAR_7->show_stash)
  FUNC_10(VAR_7);
}
