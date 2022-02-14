
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_submodule ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int FUNC_3 (int **,int ,char*,char*,int) ;
 int FUNC_4 (int *) ;

void FUNC_5(void)
{
 git_submodule *VAR_1;


 VAR_0 = FUNC_2("testrepo2");

 FUNC_1(
  FUNC_3(&VAR_1, VAR_0, "../TestGitRepository", "TestGitRepository", 1)
  );
 FUNC_4(VAR_1);

 FUNC_0("TestGitRepository", "https://github.com/libgit2/TestGitRepository");
}
