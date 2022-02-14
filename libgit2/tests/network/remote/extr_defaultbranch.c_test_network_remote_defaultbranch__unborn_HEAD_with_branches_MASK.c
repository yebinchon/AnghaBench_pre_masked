
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_reference ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int **,int ,char*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int ,char*,char*,int,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;

void FUNC_8(void)
{
 git_reference *VAR_1;
 git_repository *VAR_2;

 FUNC_1(FUNC_4(&VAR_1, VAR_0, "HEAD", "refs/heads/i-dont-exist", 1, ((void*)0)));
 FUNC_3(VAR_1);

 FUNC_1(FUNC_2(&VAR_2, FUNC_7(VAR_0), "./semi-empty", ((void*)0)));

 FUNC_0(FUNC_6(VAR_2));

 FUNC_5(VAR_2);
}
