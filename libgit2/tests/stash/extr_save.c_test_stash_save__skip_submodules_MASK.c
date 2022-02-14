
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,char*,int) ;
 int FUNC_5 (int *,int ,int ,int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_6(void)
{
 git_repository *VAR_5;
 FUNC_2(FUNC_4(&VAR_5, "stash/untracked_repo", 0));
 FUNC_1("stash/untracked_repo/content", "stuff");
 FUNC_3(VAR_5);

 FUNC_0(VAR_2, "untracked_repo/", VAR_1);

 FUNC_2(FUNC_5(
  &VAR_4, VAR_2, VAR_3, ((void*)0), VAR_0));

 FUNC_0(VAR_2, "untracked_repo/", VAR_1);
}
