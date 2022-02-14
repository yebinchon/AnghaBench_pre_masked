
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_submodule ;
typedef int git_repository ;
struct TYPE_5__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int *,char*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int **,int ,char*) ;
 int FUNC_12 (int **,int *,int) ;
 int FUNC_13 () ;

void FUNC_14(void)
{
 git_submodule *VAR_2;
 git_repository *VAR_3;
 git_buf VAR_4 = VAR_0;

 VAR_1 = FUNC_13();

 FUNC_3(FUNC_11(&VAR_2, VAR_1, "sm_gitmodules_only"));
 FUNC_3(FUNC_10(VAR_2, 0));
 FUNC_3(FUNC_12(&VAR_3, VAR_2, 1));


 FUNC_0(VAR_3, "core.worktree", "../../../sm_gitmodules_only/");


 FUNC_3(FUNC_5(&VAR_4, "submod2/" "sm_gitmodules_only" "/.git"));
 FUNC_2("gitdir: ../.git/modules/sm_gitmodules_only/", VAR_4.ptr);

 FUNC_1(FUNC_7("submod2/" "sm_gitmodules_only" "/.git"));

 FUNC_1(FUNC_6("submod2/.git/modules"));
 FUNC_1(FUNC_6("submod2/.git/modules/" "sm_gitmodules_only"));
 FUNC_1(FUNC_7("submod2/.git/modules/" "sm_gitmodules_only" "/HEAD"));

 FUNC_9(VAR_2);
 FUNC_8(VAR_3);
 FUNC_4(&VAR_4);
}
