
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* gitdir_path; } ;
typedef TYPE_1__ git_worktree ;
struct TYPE_7__ {int repo; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_5__ VAR_0 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__**,int ,char*) ;
 int FUNC_5 (TYPE_1__*) ;

void FUNC_6(void)
{
 git_worktree *VAR_1;

 FUNC_1(FUNC_4(&VAR_1, VAR_0.repo, "testrepo-worktree"));
 FUNC_2(VAR_1->gitdir_path);
 VAR_1->gitdir_path = "/path/to/invalid/gitdir";
 FUNC_0(FUNC_5(VAR_1));

 VAR_1->gitdir_path = ((void*)0);
 FUNC_3(VAR_1);
}
