
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct expectations {char* member_0; int member_1; } ;
typedef int git_repository ;
typedef int git_branch_iterator ;


 int VAR_0 ;
 int FUNC_0 (struct expectations*,char*) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (char*) ;
 int FUNC_3 (struct expectations*,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int *,int ) ;

void FUNC_6(void)
{
 git_branch_iterator *VAR_1;
 struct expectations VAR_2[] = {
  { "master", 0 },
  { "origin/HEAD", 0 },
  { "origin/master", 0 },
  { "origin/packed", 0 },
  { ((void*)0), 0 }
 };
 git_repository *VAR_3;

 VAR_3 = FUNC_2("testrepo2");

 FUNC_1(FUNC_5(&VAR_1, VAR_3, VAR_0));
 FUNC_3(VAR_2, VAR_1);

 FUNC_4(VAR_1);

 FUNC_0(VAR_2, "master");
 FUNC_0(VAR_2, "origin/HEAD");
 FUNC_0(VAR_2, "origin/master");
 FUNC_0(VAR_2, "origin/packed");
}
