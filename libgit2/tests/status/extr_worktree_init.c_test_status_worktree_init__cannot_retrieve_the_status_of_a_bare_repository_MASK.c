
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int ) ;
 int FUNC_5 (unsigned int*,int *,char*) ;

void FUNC_6(void)
{
 git_repository *VAR_1;
 unsigned int VAR_2 = 0;

 FUNC_2(FUNC_4(&VAR_1, FUNC_1("testrepo.git")));
 FUNC_0(VAR_0, FUNC_5(&VAR_2, VAR_1, "dummy"));
 FUNC_3(VAR_1);
}
