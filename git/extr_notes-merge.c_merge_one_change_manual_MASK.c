
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct notes_tree {int dummy; } ;
struct TYPE_5__ {int hash; } ;
struct notes_merge_pair {TYPE_1__ obj; TYPE_1__ remote; TYPE_1__ local; TYPE_1__ base; } ;
struct notes_merge_options {char* local_ref; char* remote_ref; int verbosity; int commit_msg; int has_worktree; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct notes_merge_options*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct notes_merge_options*,struct notes_merge_pair*) ;
 char* FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (char*,char const*,...) ;
 int FUNC_6 (struct notes_tree*,int ) ;
 int FUNC_7 (int *,char*,char*) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_11(struct notes_merge_options *VAR_0,
       struct notes_merge_pair *VAR_1,
       struct notes_tree *VAR_2)
{
 const char *VAR_3 = VAR_0->local_ref ? VAR_0->local_ref : "local version";
 const char *VAR_4 = VAR_0->remote_ref ? VAR_0->remote_ref : "remote version";

 FUNC_9("\t\t\tmerge_one_change_manual(obj = %.7s, base = %.7s, "
        "local = %.7s, remote = %.7s)\n",
        FUNC_4(&VAR_1->obj), FUNC_4(&VAR_1->base),
        FUNC_4(&VAR_1->local), FUNC_4(&VAR_1->remote));


 if (!VAR_0->has_worktree)
  FUNC_8(&(VAR_0->commit_msg), "\n\nConflicts:\n");

 FUNC_7(&(VAR_0->commit_msg), "\t%s\n", FUNC_4(&VAR_1->obj));

 if (VAR_0->verbosity >= 2)
  FUNC_5("Auto-merging notes for %s\n", FUNC_4(&VAR_1->obj));
 FUNC_1(VAR_0);
 if (FUNC_2(&VAR_1->local)) {

  FUNC_0(!FUNC_2(&VAR_1->remote));
  if (VAR_0->verbosity >= 1)
   FUNC_5("CONFLICT (delete/modify): Notes for object %s "
    "deleted in %s and modified in %s. Version from %s "
    "left in tree.\n",
    FUNC_4(&VAR_1->obj), VAR_3, VAR_4, VAR_4);
  FUNC_10(&VAR_1->obj, &VAR_1->remote);
 } else if (FUNC_2(&VAR_1->remote)) {

  FUNC_0(!FUNC_2(&VAR_1->local));
  if (VAR_0->verbosity >= 1)
   FUNC_5("CONFLICT (delete/modify): Notes for object %s "
    "deleted in %s and modified in %s. Version from %s "
    "left in tree.\n",
    FUNC_4(&VAR_1->obj), VAR_4, VAR_3, VAR_3);
  FUNC_10(&VAR_1->obj, &VAR_1->local);
 } else {

  const char *VAR_5 = "content";
  if (FUNC_2(&VAR_1->base))
   VAR_5 = "add/add";
  FUNC_0(!FUNC_2(&VAR_1->local));
  FUNC_0(!FUNC_2(&VAR_1->remote));
  if (VAR_0->verbosity >= 1)
   FUNC_5("CONFLICT (%s): Merge conflict in notes for "
    "object %s\n", VAR_5,
    FUNC_4(&VAR_1->obj));
  FUNC_3(VAR_0, VAR_1);
 }

 FUNC_9("\t\t\tremoving from partial merge result\n");
 FUNC_6(VAR_2, VAR_1->obj.hash);

 return 1;
}
