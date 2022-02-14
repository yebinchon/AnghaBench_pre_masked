
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_submodule_update_options ;
typedef int git_submodule ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int ,char*) ;
 int FUNC_4 (int *,int ,int *) ;
 int FUNC_5 () ;

void FUNC_6(void)
{
 git_submodule *VAR_3;
 git_submodule_update_options VAR_4 = VAR_1;

 VAR_2 = FUNC_5();


 FUNC_1(FUNC_3(&VAR_3, VAR_2, "testrepo"));


 FUNC_0(
  VAR_0,
  FUNC_4(VAR_3, 0, &VAR_4));

 FUNC_2(VAR_3);
}
