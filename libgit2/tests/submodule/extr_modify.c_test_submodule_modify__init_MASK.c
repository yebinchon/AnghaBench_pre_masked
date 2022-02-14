
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_config ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 int FUNC_4 (int *,char*,int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char const**,int *,char*) ;
 int FUNC_7 (int **,int ) ;
 int FUNC_8 (int **,int ) ;
 int FUNC_9 (int ,int ,int *) ;
 int VAR_3 ;

void FUNC_10(void)
{
 git_config *VAR_4;
 const char *VAR_5;


 FUNC_2(FUNC_7(&VAR_4, VAR_2));
 FUNC_2(
  FUNC_4(VAR_4, "submodule\\..*", VAR_1, VAR_4));
 FUNC_5(VAR_4);


 FUNC_2(FUNC_8(&VAR_4, VAR_2));
 FUNC_1(VAR_0, FUNC_6(&VAR_5, VAR_4, "submodule.sm_unchanged.url"));
 FUNC_1(VAR_0, FUNC_6(&VAR_5, VAR_4, "submodule.sm_changed_head.url"));
 FUNC_1(VAR_0, FUNC_6(&VAR_5, VAR_4, "submodule.sm_added_and_uncommited.url"));
 FUNC_5(VAR_4);


 FUNC_2(FUNC_9(VAR_2, VAR_3, ((void*)0)));


 FUNC_2(FUNC_8(&VAR_4, VAR_2));
 FUNC_2(FUNC_6(&VAR_5, VAR_4, "submodule.sm_unchanged.url"));
 FUNC_0(FUNC_3(VAR_5, "/submod2_target") == 0);
 FUNC_2(FUNC_6(&VAR_5, VAR_4, "submodule.sm_changed_head.url"));
 FUNC_0(FUNC_3(VAR_5, "/submod2_target") == 0);
 FUNC_2(FUNC_6(&VAR_5, VAR_4, "submodule.sm_added_and_uncommited.url"));
 FUNC_0(FUNC_3(VAR_5, "/submod2_target") == 0);
 FUNC_5(VAR_4);
}
