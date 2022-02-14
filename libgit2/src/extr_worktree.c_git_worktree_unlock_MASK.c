
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ locked; int gitdir_path; } ;
typedef TYPE_1__ git_worktree ;
struct TYPE_10__ {int ptr; } ;
typedef TYPE_2__ git_buf ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ,char*) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_4 (int ) ;

int FUNC_5(git_worktree *VAR_1)
{
 git_buf VAR_2 = VAR_0;

 FUNC_0(VAR_1);

 if (!FUNC_3(((void*)0), VAR_1))
  return 1;

 if (FUNC_2(&VAR_2, VAR_1->gitdir_path, "locked") < 0)
  return -1;

 if (FUNC_4(VAR_2.ptr) != 0) {
  FUNC_1(&VAR_2);
  return -1;
 }

 VAR_1->locked = 0;

 FUNC_1(&VAR_2);

 return 0;
}
