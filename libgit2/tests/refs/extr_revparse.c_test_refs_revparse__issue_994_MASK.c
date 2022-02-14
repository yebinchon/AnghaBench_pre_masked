
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_reference ;
typedef int git_object ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int * FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int *,char*,int ,int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int *) ;
 int FUNC_9 (int **,int *,char*) ;

void FUNC_10(void)
{
 git_repository *VAR_1;
 git_reference *VAR_2, *VAR_3;
 git_object *VAR_4;

 VAR_1 = FUNC_3("testrepo.git");

 FUNC_0(VAR_0,
  FUNC_9(&VAR_4, VAR_1, "origin/bim_with_3d@11296"));

 FUNC_0(VAR_0,
  FUNC_9(&VAR_4, VAR_1, "refs/remotes/origin/bim_with_3d@11296"));


 FUNC_1(FUNC_8(&VAR_2, VAR_1));
 FUNC_1(FUNC_5(
  &VAR_3,
  VAR_1,
  "refs/remotes/origin/bim_with_3d@11296",
  FUNC_7(VAR_2),
  0,
  ((void*)0)));

 FUNC_1(FUNC_9(&VAR_4, VAR_1, "origin/bim_with_3d@11296"));
 FUNC_4(VAR_4);

 FUNC_1(FUNC_9(&VAR_4, VAR_1, "refs/remotes/origin/bim_with_3d@11296"));
 FUNC_4(VAR_4);

 FUNC_6(VAR_3);
 FUNC_6(VAR_2);
 FUNC_2();
}
