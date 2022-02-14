
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_submodule ;
struct TYPE_4__ {int count; int member_0; } ;
typedef TYPE_1__ git_strarray ;
typedef int git_remote ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int VAR_0 ;
 int FUNC_5 (int **,int ,char*) ;
 int FUNC_6 (TYPE_1__*,int ,char*,char*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int **,int ,char*,char*,int) ;
 int FUNC_9 (int *) ;

void FUNC_10(void)
{
 git_submodule *VAR_1;
 git_remote *VAR_2;
 git_strarray VAR_3 = {0};


 VAR_0 = FUNC_4("testrepo2");


 FUNC_3(FUNC_6(&VAR_3, VAR_0, "origin", "test_remote"));
 FUNC_1(0, VAR_3.count);
 FUNC_7(&VAR_3);
 FUNC_2(FUNC_5(&VAR_2, VAR_0, "origin"));

 FUNC_3(
  FUNC_8(&VAR_1, VAR_0, "../TestGitRepository", "TestGitRepository", 1)
  );
 FUNC_9(VAR_1);

 FUNC_0("TestGitRepository", "https://github.com/libgit2/TestGitRepository");
}
