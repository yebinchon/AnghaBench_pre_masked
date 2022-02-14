
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int *,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,char*) ;
 int * FUNC_8 (int *) ;
 int * FUNC_9 (int *) ;
 int FUNC_10 (char*,char*) ;

void FUNC_11(void)
{

 git_repository *VAR_0 = FUNC_4("empty_standard_repo");
 git_repository *VAR_1;

 FUNC_10("alternate", "gitdir: ../empty_standard_repo/.git");

 FUNC_3(FUNC_7(&VAR_1, "alternate"));

 FUNC_0(FUNC_8(VAR_1) != ((void*)0));
 FUNC_1(FUNC_5(FUNC_8(VAR_1), "empty_standard_repo/.git/") == 0, FUNC_8(VAR_1));
 FUNC_2(FUNC_8(VAR_0), FUNC_8(VAR_1));

 FUNC_0(FUNC_9(VAR_1) != ((void*)0));
 FUNC_1(FUNC_5(FUNC_9(VAR_1), "alternate/") == 0, FUNC_9(VAR_1));

 FUNC_6(VAR_1);
}
