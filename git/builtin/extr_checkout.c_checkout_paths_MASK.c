
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct object_id {int dummy; } ;
struct lock_file {int dummy; } ;
struct commit {int dummy; } ;
struct TYPE_5__ {int nr; } ;
struct checkout_opts {scalar_t__ track; int checkout_index; scalar_t__ source_tree; scalar_t__ checkout_worktree; scalar_t__ merge; scalar_t__ overlay_mode; scalar_t__ writeout_stage; int quiet; scalar_t__ ignore_unmerged; TYPE_1__ pathspec; scalar_t__ patch_mode; int from_treeish; int new_branch; int ignore_unmerged_opt; scalar_t__ force_detach; scalar_t__ new_branch_log; } ;
struct cache_entry {int ce_flags; int name; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,scalar_t__,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct lock_file VAR_4 ;
 int FUNC_1 (char*) ;
 struct cache_entry** VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct cache_entry const*) ;
 int FUNC_3 (scalar_t__,struct cache_entry const*,int,scalar_t__) ;
 int FUNC_4 (int,struct cache_entry const*,int) ;
 int FUNC_5 (struct checkout_opts const*) ;
 int FUNC_6 (int ,...) ;
 int FUNC_7 (int ,...) ;
 int FUNC_8 (char*) ;
 struct commit* FUNC_9 (int ,struct object_id*,int) ;
 int FUNC_10 (struct cache_entry*,char*,struct checkout_opts const*) ;
 int FUNC_11 (struct cache_entry*,char*,struct checkout_opts const*) ;
 int FUNC_12 (struct commit*,struct commit*,int ) ;
 scalar_t__ FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (char*,int ,struct object_id*,int *) ;
 int FUNC_15 (scalar_t__,TYPE_1__*) ;
 int FUNC_16 (int ,struct lock_file*,int ) ;
 scalar_t__ FUNC_17 (char*,TYPE_1__*) ;
 int FUNC_18 (struct lock_file*) ;
 int FUNC_19 (char const*,char const*,TYPE_1__*) ;
 int FUNC_20 (struct cache_entry const*,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_21 (char*) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int ,int ) ;
 scalar_t__ FUNC_24 (int *,struct lock_file*,int ) ;
 char* FUNC_25 (int ,int) ;

__attribute__((used)) static int FUNC_26(const struct checkout_opts *VAR_9,
     const char *VAR_10)
{
 int VAR_11;
 static char *VAR_12;
 struct object_id VAR_13;
 struct commit *VAR_14;
 int VAR_15 = 0;
 struct lock_file VAR_16 = VAR_4;
 int VAR_17;

 FUNC_21(VAR_9->patch_mode ? "patch" : "path");

 if (VAR_9->track != VAR_0)
  FUNC_6(FUNC_1("'%s' cannot be used with updating paths"), "--track");

 if (VAR_9->new_branch_log)
  FUNC_6(FUNC_1("'%s' cannot be used with updating paths"), "-l");

 if (VAR_9->ignore_unmerged && VAR_9->patch_mode)
  FUNC_6(FUNC_1("'%s' cannot be used with updating paths"),
      VAR_9->ignore_unmerged_opt);

 if (VAR_9->force_detach)
  FUNC_6(FUNC_1("'%s' cannot be used with updating paths"), "--detach");

 if (VAR_9->merge && VAR_9->patch_mode)
  FUNC_6(FUNC_1("'%s' cannot be used with %s"), "--merge", "--patch");

 if (VAR_9->ignore_unmerged && VAR_9->merge)
  FUNC_6(FUNC_1("'%s' cannot be used with %s"),
      VAR_9->ignore_unmerged_opt, "-m");

 if (VAR_9->new_branch)
  FUNC_6(FUNC_1("Cannot update paths and switch to branch '%s' at the same time."),
      VAR_9->new_branch);

 if (!VAR_9->checkout_worktree && !VAR_9->checkout_index)
  FUNC_6(FUNC_1("neither '%s' or '%s' is specified"),
      "--staged", "--worktree");

 if (!VAR_9->checkout_worktree && !VAR_9->from_treeish)
  FUNC_6(FUNC_1("'%s' must be used when '%s' is not specified"),
      "--worktree", "--source");

 if (VAR_9->checkout_index && !VAR_9->checkout_worktree &&
     VAR_9->writeout_stage)
  FUNC_6(FUNC_1("'%s' or '%s' cannot be used with %s"),
      "--ours", "--theirs", "--staged");

 if (VAR_9->checkout_index && !VAR_9->checkout_worktree &&
     VAR_9->merge)
  FUNC_6(FUNC_1("'%s' or '%s' cannot be used with %s"),
      "--merge", "--conflict", "--staged");

 if (VAR_9->patch_mode) {
  const char *VAR_18;

  if (VAR_9->checkout_index && VAR_9->checkout_worktree)
   VAR_18 = "--patch=checkout";
  else if (VAR_9->checkout_index && !VAR_9->checkout_worktree)
   VAR_18 = "--patch=reset";
  else if (!VAR_9->checkout_index && VAR_9->checkout_worktree)
   VAR_18 = "--patch=worktree";
  else
   FUNC_0("either flag must have been set, worktree=%d, index=%d",
       VAR_9->checkout_worktree, VAR_9->checkout_index);
  return FUNC_19(VAR_10, VAR_18, &VAR_9->pathspec);
 }

 FUNC_16(VAR_8, &VAR_16, VAR_3);
 if (FUNC_13(&VAR_9->pathspec) < 0)
  return FUNC_7(FUNC_1("index file corrupt"));

 if (VAR_9->source_tree)
  FUNC_15(VAR_9->source_tree, &VAR_9->pathspec);

 VAR_12 = FUNC_25(VAR_9->pathspec.nr, 1);





 for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++)
  if (VAR_9->overlay_mode)
   FUNC_11(VAR_5[VAR_11],
           VAR_12,
           VAR_9);
  else
   FUNC_10(VAR_5[VAR_11],
       VAR_12,
       VAR_9);

 if (FUNC_17(VAR_12, &VAR_9->pathspec)) {
  FUNC_8(VAR_12);
  return 1;
 }
 FUNC_8(VAR_12);


 if (VAR_9->merge)
  FUNC_22(&VAR_7);


 for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++) {
  const struct cache_entry *VAR_19 = VAR_5[VAR_11];
  if (VAR_19->ce_flags & VAR_1) {
   if (!FUNC_2(VAR_19))
    continue;
   if (VAR_9->ignore_unmerged) {
    if (!VAR_9->quiet)
     FUNC_23(FUNC_1("path '%s' is unmerged"), VAR_19->name);
   } else if (VAR_9->writeout_stage) {
    VAR_15 |= FUNC_3(VAR_9->writeout_stage, VAR_19, VAR_11, VAR_9->overlay_mode);
   } else if (VAR_9->merge) {
    VAR_15 |= FUNC_4((1<<2) | (1<<3), VAR_19, VAR_11);
   } else {
    VAR_15 = 1;
    FUNC_7(FUNC_1("path '%s' is unmerged"), VAR_19->name);
   }
   VAR_11 = FUNC_20(VAR_19, VAR_11) - 1;
  }
 }
 if (VAR_15)
  return 1;


 if (VAR_9->checkout_worktree)
  VAR_15 |= FUNC_5(VAR_9);





 if (VAR_9->checkout_worktree && !VAR_9->checkout_index && !VAR_9->source_tree)
  VAR_17 = 1;
 else
  VAR_17 = VAR_9->checkout_index;

 if (VAR_17) {
  if (FUNC_24(&VAR_7, &VAR_16, VAR_2))
   FUNC_6(FUNC_1("unable to write new index file"));
 } else {






  FUNC_18(&VAR_16);
 }

 FUNC_14("HEAD", 0, &VAR_13, ((void*)0));
 VAR_14 = FUNC_9(VAR_8, &VAR_13, 1);

 VAR_15 |= FUNC_12(VAR_14, VAR_14, 0);
 return VAR_15;
}
