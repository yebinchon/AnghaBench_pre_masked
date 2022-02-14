
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,char*) ;
 int FUNC_8 (int **,char*) ;
 int FUNC_9 (int **,char*,int,int *) ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 (char*,int) ;

void FUNC_12(void)
{

 git_repository *VAR_2 = FUNC_4("empty_standard_repo");
 git_repository *VAR_3;

 FUNC_10("alternate", "gitdir: ../empty_standard_repo/.git");

 FUNC_0(!FUNC_6(VAR_2));

 FUNC_3(FUNC_7(&VAR_3, "alternate"));
 FUNC_0(!FUNC_6(VAR_3));
 FUNC_5(VAR_3);

 FUNC_3(FUNC_8(
  &VAR_3, "empty_standard_repo/.git"));
 FUNC_0(FUNC_6(VAR_3));
 FUNC_5(VAR_3);

 FUNC_1(FUNC_8(&VAR_3, "alternate/.git"));

 FUNC_3(FUNC_9(
  &VAR_3, "alternate/.git", VAR_0, ((void*)0)));
 FUNC_0(FUNC_6(VAR_3));
 FUNC_5(VAR_3);

 FUNC_3(FUNC_11("empty_standard_repo/subdir", 0777));
 FUNC_2("empty_standard_repo/subdir/something.txt", "something");

 FUNC_1(FUNC_8(
  &VAR_3, "empty_standard_repo/subdir"));

 FUNC_3(FUNC_9(
  &VAR_3, "empty_standard_repo/subdir", VAR_0, ((void*)0)));
 FUNC_0(FUNC_6(VAR_3));
 FUNC_5(VAR_3);

 FUNC_3(FUNC_11("alternate/subdir", 0777));
 FUNC_3(FUNC_11("alternate/subdir/sub2", 0777));
 FUNC_2("alternate/subdir/sub2/something.txt", "something");

 FUNC_1(FUNC_8(&VAR_3, "alternate/subdir/sub2"));

 FUNC_3(FUNC_9(
  &VAR_3, "alternate/subdir/sub2",
  VAR_0|VAR_1, ((void*)0)));
 FUNC_0(FUNC_6(VAR_3));
 FUNC_5(VAR_3);
}
