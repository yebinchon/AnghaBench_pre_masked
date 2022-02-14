
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_index ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int *) ;
 int FUNC_7 (int **,int ) ;

void FUNC_8(void)
{
 git_repository *VAR_1;
 git_index *VAR_2;

 FUNC_2(FUNC_7(&VAR_1, FUNC_1("testrepo.git")));
 FUNC_2(FUNC_6(&VAR_2, VAR_1));

 FUNC_0(VAR_0, FUNC_3(VAR_2, "test.txt"));

 FUNC_4(VAR_2);
 FUNC_5(VAR_1);
}
