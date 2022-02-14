
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_config ;
typedef int git_buf ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int ,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,char*) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int **,int ) ;
 int FUNC_11 (int ,char*,int) ;
 int VAR_1 ;

void FUNC_12(void)
{
 git_config *VAR_2;
 git_buf VAR_3 = VAR_0;
 git_buf VAR_4 = VAR_0;

 FUNC_1(FUNC_11(VAR_1, "./new_workdir", 1));

 FUNC_0(FUNC_9("./new_workdir/.git"));

 FUNC_1(FUNC_8(&VAR_4, "./new_workdir/.git"));
 FUNC_0(FUNC_2(FUNC_4(&VAR_4), "gitdir: ") == 0);
 FUNC_0(FUNC_3(FUNC_4(&VAR_4), "testrepo.git/") == 0);
 FUNC_5(&VAR_4);

 FUNC_1(FUNC_10(&VAR_2, VAR_1));
 FUNC_1(FUNC_7(&VAR_3, VAR_2, "core.worktree"));
 FUNC_0(FUNC_3(FUNC_4(&VAR_3), "new_workdir/") == 0);

 FUNC_5(&VAR_3);
 FUNC_6(VAR_2);
}
