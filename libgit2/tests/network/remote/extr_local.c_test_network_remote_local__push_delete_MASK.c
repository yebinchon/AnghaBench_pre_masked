
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char** member_0; int member_1; char** strings; } ;
typedef TYPE_1__ git_strarray ;
typedef int git_repository ;
typedef int git_remote ;
typedef int git_reference ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int * FUNC_4 (char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int *,char*) ;
 int FUNC_7 (int **,int *,char*,char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,TYPE_1__*,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int **,char*,int) ;

void FUNC_12(void)
{
 git_repository *VAR_0;
 git_repository *VAR_1;
 git_remote *VAR_2;
 git_reference *VAR_3;
 char *VAR_4[] = { "refs/heads/master" };
 char *VAR_5[] = { ":refs/heads/master" };
 git_strarray VAR_6 = {
  VAR_4,
  1,
 };

 VAR_0 = FUNC_4("testrepo.git");
 FUNC_2(FUNC_11(&VAR_1, "target.git", 1));

 FUNC_2(FUNC_7(&VAR_2, VAR_0, "origin", "./target.git"));


 FUNC_2(FUNC_9(VAR_2, &VAR_6, ((void*)0)));
 FUNC_2(FUNC_6(&VAR_3, VAR_1, "refs/heads/master"));
 FUNC_5(VAR_3);

 VAR_6.strings = VAR_5;
 FUNC_2(FUNC_9(VAR_2, &VAR_6, ((void*)0)));
 FUNC_1(FUNC_6(&VAR_3, VAR_1, "refs/heads/master"));

 FUNC_8(VAR_2);
 FUNC_10(VAR_1);
 FUNC_0("target.git");
 FUNC_3();
}
