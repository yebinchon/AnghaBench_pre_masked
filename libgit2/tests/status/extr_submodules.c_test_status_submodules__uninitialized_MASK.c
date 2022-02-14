
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_status_list ;
typedef int git_repository ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int VAR_0 ;
 int FUNC_4 (int **,char*,char*,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int *,int *) ;

void FUNC_9(void)
{
 git_repository *VAR_1;
 git_status_list *VAR_2;

 VAR_0 = FUNC_3("submod2");

 FUNC_1(FUNC_4(&VAR_1, "submod2", "submod2-clone", ((void*)0)));

 FUNC_1(FUNC_8(&VAR_2, VAR_1, ((void*)0)));
 FUNC_0(0, FUNC_6(VAR_2));

 FUNC_7(VAR_2);
 FUNC_5(VAR_1);
 FUNC_2();
}
