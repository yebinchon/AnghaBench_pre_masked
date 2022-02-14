
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_remote ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ,int *,int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int *,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int **) ;

void FUNC_13(void)
{
 git_repository *VAR_2;
 git_remote *VAR_3;

 FUNC_5(&VAR_1, FUNC_3(FUNC_1("testrepo.git")));

 FUNC_2(FUNC_12(&VAR_2));
 FUNC_2(FUNC_8(&VAR_3, VAR_2, FUNC_4(&VAR_1)));
 FUNC_2(FUNC_6(VAR_3, VAR_0, ((void*)0), ((void*)0), ((void*)0)));
 FUNC_0(FUNC_7(VAR_3));
 FUNC_9(VAR_3);
 FUNC_10(VAR_3);
 FUNC_11(VAR_2);
}
