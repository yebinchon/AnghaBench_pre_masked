
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int locked; int gitdir_path; int * gitlink_path; int * worktree_path; int * parent_path; int * commondir_path; int * name; } ;
typedef TYPE_1__ git_worktree ;
typedef int git_buf ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int,int) ;
 void* FUNC_1 (char const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *,char const*,int *) ;
 void* FUNC_6 (char const*,char*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int *,TYPE_1__*) ;
 int FUNC_9 (char const*) ;

__attribute__((used)) static int FUNC_10(git_worktree **VAR_1, const char *VAR_2, const char *VAR_3, const char *VAR_4)
{
 git_buf VAR_5 = VAR_0;
 git_worktree *VAR_6 = ((void*)0);
 int VAR_7 = 0;

 if (!FUNC_9(VAR_3)) {
  VAR_7 = -1;
  goto out;
 }

 if ((VAR_6 = FUNC_0(1, sizeof(*VAR_6))) == ((void*)0)) {
  VAR_7 = -1;
  goto out;
 }

 if ((VAR_6->name = FUNC_1(VAR_4)) == ((void*)0)
     || (VAR_6->commondir_path = FUNC_6(VAR_3, "commondir")) == ((void*)0)
     || (VAR_6->gitlink_path = FUNC_6(VAR_3, "gitdir")) == ((void*)0)
     || (VAR_2 && (VAR_6->parent_path = FUNC_1(VAR_2)) == ((void*)0))
     || (VAR_6->worktree_path = FUNC_4(VAR_6->gitlink_path)) == ((void*)0)) {
  VAR_7 = -1;
  goto out;
 }

 if ((VAR_7 = FUNC_5(&VAR_5, VAR_3, ((void*)0))) < 0)
  goto out;
 VAR_6->gitdir_path = FUNC_2(&VAR_5);

 VAR_6->locked = !!FUNC_8(((void*)0), VAR_6);

 *VAR_1 = VAR_6;

out:
 if (VAR_7)
  FUNC_7(VAR_6);
 FUNC_3(&VAR_5);

 return VAR_7;
}
