
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char** member_0; int member_1; } ;
typedef TYPE_1__ git_strarray ;
typedef int git_repository ;
typedef int git_remote ;
typedef int git_fetch_options ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ,int *,int *,int *) ;
 int FUNC_6 (int **,int ,char*) ;
 int FUNC_7 (int ,TYPE_1__*,int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int **,char*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_12(void)
{
 char *VAR_6[] = {
  "master:master",
 };
 git_strarray VAR_7 = {
  VAR_6,
  1,
 };

 git_remote *VAR_8;
 git_fetch_options VAR_9 = VAR_2;


 FUNC_4(FUNC_0("testrepo.git"));
 FUNC_3(FUNC_7(VAR_4, &VAR_7, &VAR_9, ((void*)0)));


 {
  git_repository *VAR_10 = ((void*)0);
  FUNC_3(FUNC_11(&VAR_10, "localnonbare", 0));
  FUNC_10(VAR_10);
 }


 FUNC_3(FUNC_6(&VAR_8, VAR_5, "./localnonbare"));
 FUNC_3(FUNC_5(VAR_8, VAR_0, ((void*)0), ((void*)0), ((void*)0)));


 FUNC_2(VAR_1, FUNC_9(VAR_8, &VAR_3, ((void*)0)));


 FUNC_8(VAR_8);
 FUNC_1("localbare.git");
}
