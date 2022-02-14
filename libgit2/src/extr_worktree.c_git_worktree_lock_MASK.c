
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int locked; int gitdir_path; } ;
typedef TYPE_1__ git_worktree ;
struct TYPE_12__ {int ptr; } ;
typedef TYPE_2__ git_buf ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*,char const*,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int ,char*) ;
 int FUNC_4 (TYPE_2__*,int ,int,int) ;
 int FUNC_5 (int *,TYPE_1__*) ;
 int FUNC_6 (char const*) ;

int FUNC_7(git_worktree *VAR_4, const char *VAR_5)
{
 git_buf VAR_6 = VAR_0, VAR_7 = VAR_0;
 int VAR_8;

 FUNC_0(VAR_4);

 if ((VAR_8 = FUNC_5(((void*)0), VAR_4)) < 0)
  goto out;

 if ((VAR_8 = FUNC_3(&VAR_7, VAR_4->gitdir_path, "locked")) < 0)
  goto out;

 if (VAR_5)
  FUNC_1(&VAR_6, VAR_5, FUNC_6(VAR_5));

 if ((VAR_8 = FUNC_4(&VAR_6, VAR_7.ptr, VAR_1|VAR_2|VAR_3, 0644)) < 0)
  goto out;

 VAR_4->locked = 1;

out:
 FUNC_2(&VAR_7);

 return VAR_8;
}
