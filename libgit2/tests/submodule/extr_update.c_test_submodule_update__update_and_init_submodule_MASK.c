
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_submodule_update_options ;
typedef int git_submodule ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned int,int) ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (int ,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int ,char*) ;
 int FUNC_8 (unsigned int*,int ,char*,int ) ;
 int FUNC_9 (int *,int,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 () ;

void FUNC_12(void)
{
 git_submodule *VAR_7;
 git_submodule_update_options VAR_8 = VAR_5;
 unsigned int VAR_9 = 0;

 VAR_6 = FUNC_11();


 FUNC_2(FUNC_7(&VAR_7, VAR_6, "testrepo"));

 FUNC_2(FUNC_8(&VAR_9, VAR_6, "testrepo", VAR_0));
 FUNC_1(VAR_9, VAR_2 |
  VAR_3 |
  VAR_1 |
  VAR_4);


 FUNC_2(FUNC_9(VAR_7, 1, &VAR_8));


 FUNC_0(FUNC_3(FUNC_5(VAR_7), "be3563ae3f795b2b4353bcce3a527ad0a4f7f644") == 0);
 FUNC_0(FUNC_3(FUNC_10(VAR_7), "be3563ae3f795b2b4353bcce3a527ad0a4f7f644") == 0);
 FUNC_0(FUNC_3(FUNC_6(VAR_7), "be3563ae3f795b2b4353bcce3a527ad0a4f7f644") == 0);

 FUNC_4(VAR_7);
}
