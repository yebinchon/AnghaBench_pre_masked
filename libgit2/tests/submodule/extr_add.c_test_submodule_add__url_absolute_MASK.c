
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
 int VAR_1 ;
 int FUNC_0 (int *,char*,char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int VAR_2 ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int **,char*) ;
 int FUNC_13 (int **,int ,char*,char*,int) ;
 int FUNC_14 (int *) ;
 int FUNC_15 () ;

void FUNC_16(void)
{
 git_submodule *VAR_3;
 git_repository *VAR_4;
 git_buf VAR_5 = VAR_0;

 VAR_2 = FUNC_15();


 FUNC_4(
  VAR_1,
  FUNC_13(((void*)0), VAR_2, "whatever", "sm_unchanged", 1));



 FUNC_5(
  FUNC_13(&VAR_3, VAR_2, "https://github.com/libgit2/libgit2.git", "sm_libgit2", 1)
  );
 FUNC_14(VAR_3);

 FUNC_2(FUNC_10("submod2/" "sm_libgit2" "/.git"));

 FUNC_2(FUNC_9("submod2/.git/modules"));
 FUNC_2(FUNC_9("submod2/.git/modules/" "sm_libgit2"));
 FUNC_2(FUNC_10("submod2/.git/modules/" "sm_libgit2" "/HEAD"));
 FUNC_1("sm_libgit2", "https://github.com/libgit2/libgit2.git");

 FUNC_5(FUNC_12(&VAR_4, "submod2/" "sm_libgit2"));


 FUNC_0(VAR_4, "core.worktree", "../../../sm_libgit2/");


 FUNC_5(FUNC_7(&VAR_5, "submod2/" "sm_libgit2" "/.git"));
 FUNC_3("gitdir: ../.git/modules/sm_libgit2/", VAR_5.ptr);

 FUNC_11(VAR_4);
 FUNC_6(&VAR_5);



 FUNC_5(
  FUNC_13(&VAR_3, VAR_2, "https://github.com/libgit2/libgit2.git", "sm_libgit2b", 0)
  );
 FUNC_14(VAR_3);

 FUNC_2(FUNC_9("submod2/" "sm_libgit2b" "/.git"));
 FUNC_2(FUNC_10("submod2/" "sm_libgit2b" "/.git/HEAD"));
 FUNC_2(!FUNC_8("submod2/.git/modules/" "sm_libgit2b"));
 FUNC_1("sm_libgit2b", "https://github.com/libgit2/libgit2.git");
}
