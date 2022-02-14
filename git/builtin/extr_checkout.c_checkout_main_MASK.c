
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {int dummy; } ;
struct option {int dummy; } ;
struct object_id {int dummy; } ;
struct TYPE_2__ {scalar_t__ nr; } ;
struct checkout_opts {int overwrite_ignore; char const* prefix; int show_progress; scalar_t__ track; int merge; int discard_changes; char* ignore_unmerged_opt; int ignore_unmerged; char const* new_branch; char const* new_branch_force; char const* new_orphan_branch; int overlay_mode; int checkout_index; int checkout_worktree; char* from_treeish; TYPE_1__ pathspec; scalar_t__ patch_mode; int branch_exists; scalar_t__ force; int writeout_stage; scalar_t__ force_detach; int empty_pathspec_ok; scalar_t__ accept_pathspec; int source_tree; scalar_t__ accept_ref; scalar_t__ dwim_new_local_branch; scalar_t__ conflict_style; scalar_t__ quiet; } ;
struct branch_info {int name; } ;
typedef int new_branch_info ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct strbuf VAR_3 ;
 int FUNC_1 (struct checkout_opts*) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int ,char const*,int) ;
 int FUNC_4 (struct checkout_opts*,struct branch_info*) ;
 int FUNC_5 (struct checkout_opts*,int ) ;
 int FUNC_6 (int ,...) ;
 scalar_t__ FUNC_7 (char*,struct object_id*) ;
 int VAR_5 ;
 int FUNC_8 (int ,struct checkout_opts*) ;
 int FUNC_9 (char*,scalar_t__,int *) ;
 int FUNC_10 (int) ;
 int FUNC_11 (struct branch_info*,int ,int) ;
 int FUNC_12 (int,char const**,int,struct branch_info*,struct checkout_opts*,struct object_id*,int*) ;
 int FUNC_13 (int,char const**,char const*,struct option*,char const* const*,int) ;
 int FUNC_14 (TYPE_1__*,int ,int ,char const*,char const**) ;
 int FUNC_15 (struct branch_info*,struct checkout_opts*,struct object_id*,char*) ;
 int FUNC_16 (char const*,char*,char const**) ;
 int FUNC_17 (struct strbuf*) ;
 char* FUNC_18 (char const*,char) ;
 int FUNC_19 (char const*,char*) ;
 int FUNC_20 (char const*,struct strbuf*) ;
 int FUNC_21 (char const*,struct strbuf*,int ) ;

__attribute__((used)) static int FUNC_22(int VAR_6, const char **VAR_7, const char *VAR_8,
    struct checkout_opts *VAR_9, struct option *VAR_10,
    const char * const VAR_11[])
{
 struct branch_info VAR_12;
 int VAR_13 = 0;
 int VAR_14 = 0;

 FUNC_11(&VAR_12, 0, sizeof(VAR_12));
 VAR_9->overwrite_ignore = 1;
 VAR_9->prefix = VAR_8;
 VAR_9->show_progress = -1;

 FUNC_8(VAR_5, VAR_9);

 VAR_9->track = VAR_0;

 if (!VAR_9->accept_pathspec && !VAR_9->accept_ref)
  FUNC_0("make up your mind, you need to take _something_");
 if (VAR_9->accept_pathspec && VAR_9->accept_ref)
  VAR_14 = VAR_1;

 VAR_6 = FUNC_13(VAR_6, VAR_7, VAR_8, VAR_10,
        VAR_11, VAR_14);

 if (VAR_9->show_progress < 0) {
  if (VAR_9->quiet)
   VAR_9->show_progress = 0;
  else
   VAR_9->show_progress = FUNC_10(2);
 }

 if (VAR_9->conflict_style) {
  VAR_9->merge = 1;
  FUNC_9("merge.conflictstyle", VAR_9->conflict_style, ((void*)0));
 }
 if (VAR_9->force) {
  VAR_9->discard_changes = 1;
  VAR_9->ignore_unmerged_opt = "--force";
  VAR_9->ignore_unmerged = 1;
 }

 if ((!!VAR_9->new_branch + !!VAR_9->new_branch_force + !!VAR_9->new_orphan_branch) > 1)
  FUNC_6(FUNC_2("-b, -B and --orphan are mutually exclusive"));

 if (VAR_9->overlay_mode == 1 && VAR_9->patch_mode)
  FUNC_6(FUNC_2("-p and --overlay are mutually exclusive"));

 if (VAR_9->checkout_index >= 0 || VAR_9->checkout_worktree >= 0) {
  if (VAR_9->checkout_index < 0)
   VAR_9->checkout_index = 0;
  if (VAR_9->checkout_worktree < 0)
   VAR_9->checkout_worktree = 0;
 } else {
  if (VAR_9->checkout_index < 0)
   VAR_9->checkout_index = -VAR_9->checkout_index - 1;
  if (VAR_9->checkout_worktree < 0)
   VAR_9->checkout_worktree = -VAR_9->checkout_worktree - 1;
 }
 if (VAR_9->checkout_index < 0 || VAR_9->checkout_worktree < 0)
  FUNC_0("these flags should be non-negative by now");




 if (!VAR_9->from_treeish && VAR_9->checkout_index && !VAR_9->checkout_worktree)
  VAR_9->from_treeish = "HEAD";






 if (VAR_9->new_branch_force)
  VAR_9->new_branch = VAR_9->new_branch_force;

 if (VAR_9->new_orphan_branch)
  VAR_9->new_branch = VAR_9->new_orphan_branch;


 if (VAR_9->track != VAR_0 && !VAR_9->new_branch) {
  const char *VAR_15 = VAR_7[0];
  if (!VAR_6 || !FUNC_19(VAR_15, "--"))
   FUNC_6(FUNC_2("--track needs a branch name"));
  FUNC_16(VAR_15, "refs/", &VAR_15);
  FUNC_16(VAR_15, "remotes/", &VAR_15);
  VAR_15 = FUNC_18(VAR_15, '/');
  if (!VAR_15 || !VAR_15[1])
   FUNC_6(FUNC_2("missing branch name; try -b"));
  VAR_9->new_branch = VAR_15 + 1;
 }
 if (VAR_6 && VAR_9->accept_ref) {
  struct object_id VAR_16;
  int VAR_17 =
   !VAR_9->patch_mode &&
   VAR_9->dwim_new_local_branch &&
   VAR_9->track == VAR_0 &&
   !VAR_9->new_branch;
  int VAR_18 = FUNC_12(VAR_6, VAR_7, VAR_17,
          &VAR_12, VAR_9, &VAR_16,
          &VAR_13);
  VAR_7 += VAR_18;
  VAR_6 -= VAR_18;
 } else if (!VAR_9->accept_ref && VAR_9->from_treeish) {
  struct object_id VAR_19;

  if (FUNC_7(VAR_9->from_treeish, &VAR_19))
   FUNC_6(FUNC_2("could not resolve %s"), VAR_9->from_treeish);

  FUNC_15(&VAR_12,
            VAR_9, &VAR_19,
            VAR_9->from_treeish);

  if (!VAR_9->source_tree)
   FUNC_6(FUNC_2("reference is not a tree: %s"), VAR_9->from_treeish);
 }

 if (VAR_9->accept_pathspec && !VAR_9->empty_pathspec_ok && !VAR_6 &&
     !VAR_9->patch_mode)
  FUNC_6(FUNC_2("you must specify path(s) to restore"));

 if (VAR_6) {
  FUNC_14(&VAR_9->pathspec, 0,
          VAR_9->patch_mode ? VAR_2 : 0,
          VAR_8, VAR_7);

  if (!VAR_9->pathspec.nr)
   FUNC_6(FUNC_2("invalid path specification"));





  if (VAR_9->new_branch && VAR_6 == 1)
   FUNC_6(FUNC_2("'%s' is not a commit and a branch '%s' cannot be created from it"),
    VAR_7[0], VAR_9->new_branch);

  if (VAR_9->force_detach)
   FUNC_6(FUNC_2("git checkout: --detach does not take a path argument '%s'"),
       VAR_7[0]);

  if (1 < !!VAR_9->writeout_stage + !!VAR_9->force + !!VAR_9->merge)
   FUNC_6(FUNC_2("git checkout: --ours/--theirs, --force and --merge are incompatible when\n"
         "checking out of the index."));
 }

 if (VAR_9->new_branch) {
  struct strbuf VAR_20 = VAR_3;

  if (VAR_9->new_branch_force)
   VAR_9->branch_exists = FUNC_20(VAR_9->new_branch, &VAR_20);
  else
   VAR_9->branch_exists =
    FUNC_21(VAR_9->new_branch, &VAR_20, 0);
  FUNC_17(&VAR_20);
 }

 FUNC_1(VAR_9);
 if (VAR_9->patch_mode || VAR_9->pathspec.nr) {
  int VAR_21 = FUNC_5(VAR_9, VAR_12.name);
  if (VAR_21 && VAR_13 > 1 &&
      VAR_4)
   FUNC_3(FUNC_2("'%s' matched more than one remote tracking branch.\n"
     "We found %d remotes with a reference that matched. So we fell back\n"
     "on trying to resolve the argument as a path, but failed there too!\n"
     "\n"
     "If you meant to check out a remote tracking branch on, e.g. 'origin',\n"
     "you can do so by fully qualifying the name with the --track option:\n"
     "\n"
     "    git checkout --track origin/<name>\n"
     "\n"
     "If you'd like to always have checkouts of an ambiguous <name> prefer\n"
     "one remote, e.g. the 'origin' remote, consider setting\n"
     "checkout.defaultRemote=origin in your config."),
          VAR_7[0],
          VAR_13);
  return VAR_21;
 } else {
  return FUNC_4(VAR_9, &VAR_12);
 }
}
