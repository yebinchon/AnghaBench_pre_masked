
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char** member_0; int member_1; } ;
typedef TYPE_1__ git_strarray ;
typedef int git_repository ;
typedef int git_remote ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int *,int *,int *) ;
 int FUNC_5 (int **,int ,char*) ;
 int FUNC_6 (int ,TYPE_1__*,int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int **,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_11(void)
{
 char *VAR_4[] = {
  "master:master",
 };
 git_strarray VAR_5 = {
  VAR_4,
  1,
 };


 git_remote *VAR_6;


 FUNC_3(FUNC_0("testrepo.git"));
 FUNC_2(FUNC_6(VAR_2, &VAR_5, ((void*)0), ((void*)0)));


 {
  git_repository *VAR_7;
  FUNC_2(FUNC_10(&VAR_7, "./localbare.git", 1));
  FUNC_9(VAR_7);
 }


 FUNC_2(FUNC_5(&VAR_6, VAR_3, "./localbare.git"));
 FUNC_2(FUNC_4(VAR_6, VAR_0, ((void*)0), ((void*)0), ((void*)0)));


 FUNC_2(FUNC_8(VAR_6, &VAR_1, ((void*)0)));


 FUNC_7(VAR_6);
 FUNC_1("localbare.git");
}
