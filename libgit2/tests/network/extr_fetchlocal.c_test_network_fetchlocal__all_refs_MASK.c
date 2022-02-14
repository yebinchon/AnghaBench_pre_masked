
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char** member_0; int member_1; } ;
typedef TYPE_1__ git_strarray ;
typedef int git_repository ;
typedef int git_remote ;
typedef int git_reference ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int *,char*) ;
 int FUNC_5 (int **,int *,int ) ;
 int FUNC_6 (int *,TYPE_1__*,int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int **,char*,int) ;

void FUNC_10(void)
{
 git_repository *VAR_0;
 git_remote *VAR_1;
 git_reference *VAR_2;
 char *VAR_3 = "+refs/*:refs/*";
 git_strarray VAR_4 = {
  &VAR_3,
  1,
 };

 FUNC_2(FUNC_9(&VAR_0, "./foo.git", 1));
 FUNC_2(FUNC_5(&VAR_1, VAR_0, FUNC_1("testrepo.git")));
 FUNC_2(FUNC_6(VAR_1, &VAR_4, ((void*)0), ((void*)0)));

 FUNC_2(FUNC_4(&VAR_2, VAR_0, "refs/remotes/test/master"));
 FUNC_3(VAR_2);

 FUNC_2(FUNC_4(&VAR_2, VAR_0, "refs/tags/test"));
 FUNC_3(VAR_2);

 FUNC_7(VAR_1);
 FUNC_8(VAR_0);
 FUNC_0("./foo.git");
}
