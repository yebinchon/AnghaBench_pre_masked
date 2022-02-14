
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_config ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int **,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,char*) ;

void FUNC_8(void)
{
 git_repository *VAR_0;
 git_config *VAR_1;

 VAR_0 = FUNC_2("empty_bare.git");

 FUNC_1(FUNC_7(&VAR_0, "empty_bare.git"));
 FUNC_1(FUNC_5(&VAR_1, VAR_0));

 FUNC_1(FUNC_4(VAR_1, "core.repositoryformatversion", 1));

 FUNC_3(VAR_1);
 FUNC_6(VAR_0);
 FUNC_0(FUNC_7(&VAR_0, "empty_bare.git"));
}
