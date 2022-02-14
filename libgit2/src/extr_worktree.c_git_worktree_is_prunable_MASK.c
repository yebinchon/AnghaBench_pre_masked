
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int popts ;
struct TYPE_12__ {int flags; } ;
typedef TYPE_1__ git_worktree_prune_options ;
typedef int git_worktree ;
struct TYPE_13__ {int ptr; int size; } ;
typedef TYPE_2__ git_buf ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_2__*,char*,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,char*,...) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,TYPE_1__*,int) ;

int FUNC_7(git_worktree *VAR_6,
 git_worktree_prune_options *VAR_7)
{
 git_buf VAR_8 = VAR_0;
 git_worktree_prune_options VAR_9 = VAR_3;

 FUNC_0(
  VAR_7, VAR_4,
  "git_worktree_prune_options");

 if (VAR_7)
  FUNC_6(&VAR_9, VAR_7, sizeof(VAR_9));

 if ((VAR_9.flags & VAR_2) == 0 &&
  FUNC_4(&VAR_8, VAR_6))
 {
  if (!VAR_8.size)
   FUNC_1(&VAR_8, "no reason given", 15);
  FUNC_3(VAR_1, "not pruning locked working tree: '%s'", VAR_8.ptr);
  FUNC_2(&VAR_8);

  return 0;
 }

 if ((VAR_9.flags & VAR_5) == 0 &&
  FUNC_5(VAR_6) == 0)
 {
  FUNC_3(VAR_1, "not pruning valid working tree");
  return 0;
 }

 return 1;
}
