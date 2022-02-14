
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_reference_iterator ;
typedef int git_reference ;
typedef int git_odb ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int *) ;
 int FUNC_6 (int **,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int *) ;

void FUNC_9(void)
{
 git_reference_iterator *VAR_1;
 git_odb *VAR_2;
 git_reference *VAR_3;
 git_repository *VAR_4;

 FUNC_1(FUNC_3(&VAR_2));
 FUNC_1(FUNC_8(&VAR_4, VAR_2));

 FUNC_1(FUNC_5(&VAR_1, VAR_4));
 FUNC_0(VAR_0, FUNC_6(&VAR_3, VAR_1));

 FUNC_4(VAR_1);
 FUNC_2(VAR_2);
 FUNC_7(VAR_4);
}
