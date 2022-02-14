
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int gitdir_path; } ;
typedef TYPE_1__ git_worktree ;
struct TYPE_12__ {int ptr; } ;
typedef TYPE_2__ git_buf ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int ,char*) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (int ) ;

int FUNC_6(git_buf *VAR_1, const git_worktree *VAR_2)
{
 git_buf VAR_3 = VAR_0;
 int VAR_4;

 FUNC_0(VAR_2);

 if (VAR_1)
  FUNC_1(VAR_1);

 if ((VAR_4 = FUNC_3(&VAR_3, VAR_2->gitdir_path, "locked")) < 0)
  goto out;
 if ((VAR_4 = FUNC_5(VAR_3.ptr)) && VAR_1)
  FUNC_4(VAR_1, VAR_3.ptr);

out:
 FUNC_2(&VAR_3);

 return VAR_4;
}
