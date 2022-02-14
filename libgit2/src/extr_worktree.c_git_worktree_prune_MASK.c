
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int popts ;
struct TYPE_16__ {int flags; } ;
typedef TYPE_1__ git_worktree_prune_options ;
struct TYPE_17__ {int gitlink_path; int name; int commondir_path; } ;
typedef TYPE_2__ git_worktree ;
struct TYPE_18__ {int ptr; } ;
typedef TYPE_3__ git_buf ;


 TYPE_3__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_3__*,char*,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,char*,int ,int ) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (int ,int *,int ) ;
 char* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,TYPE_1__*,int) ;

int FUNC_10(git_worktree *VAR_6,
 git_worktree_prune_options *VAR_7)
{
 git_worktree_prune_options VAR_8 = VAR_3;
 git_buf VAR_9 = VAR_0;
 char *VAR_10;
 int VAR_11;

 FUNC_0(
  VAR_7, VAR_4,
  "git_worktree_prune_options");

 if (VAR_7)
  FUNC_9(&VAR_8, VAR_7, sizeof(VAR_8));

 if (!FUNC_8(VAR_6, &VAR_8)) {
  VAR_11 = -1;
  goto out;
 }


 if ((VAR_11 = FUNC_3(&VAR_9, "%s/worktrees/%s", VAR_6->commondir_path, VAR_6->name)) < 0)
  goto out;
 if (!FUNC_7(VAR_9.ptr))
 {
  FUNC_4(VAR_1, "worktree gitdir '%s' does not exist", VAR_9.ptr);
  VAR_11 = -1;
  goto out;
 }
 if ((VAR_11 = FUNC_5(VAR_9.ptr, ((void*)0), VAR_2)) < 0)
  goto out;



 if ((VAR_8.flags & VAR_5) == 0 ||
  !FUNC_7(VAR_6->gitlink_path))
 {
  goto out;
 }

 if ((VAR_10 = FUNC_6(VAR_6->gitlink_path)) == ((void*)0))
  goto out;
 FUNC_1(&VAR_9, VAR_10, 0);
 if (!FUNC_7(VAR_9.ptr))
 {
  FUNC_4(VAR_1, "working tree '%s' does not exist", VAR_9.ptr);
  VAR_11 = -1;
  goto out;
 }
 if ((VAR_11 = FUNC_5(VAR_9.ptr, ((void*)0), VAR_2)) < 0)
  goto out;

out:
 FUNC_2(&VAR_9);

 return VAR_11;
}
