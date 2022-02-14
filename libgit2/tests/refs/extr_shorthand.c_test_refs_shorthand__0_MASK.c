
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;


 int FUNC_0 (int *,char*,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int ) ;

void FUNC_5(void)
{
 git_repository *VAR_0;

 FUNC_2(FUNC_4(&VAR_0, FUNC_1("testrepo.git")));


 FUNC_0(VAR_0, "refs/heads/master", "master");
 FUNC_0(VAR_0, "refs/tags/test", "test");
 FUNC_0(VAR_0, "refs/remotes/test/master", "test/master");
 FUNC_0(VAR_0, "refs/notes/fanout", "notes/fanout");

 FUNC_3(VAR_0);
}
