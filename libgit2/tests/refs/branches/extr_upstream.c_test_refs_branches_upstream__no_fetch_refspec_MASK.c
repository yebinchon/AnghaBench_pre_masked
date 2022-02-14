
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int git_repository ;
typedef int git_remote ;
typedef int git_reference ;
typedef int git_config ;
struct TYPE_2__ {int message; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int * FUNC_5 (char*) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int **,int *) ;
 int FUNC_8 (int *,char*,char*) ;
 TYPE_1__* FUNC_9 () ;
 int FUNC_10 (int **,int *,char*,int ,int,char*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int **,int *,char*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,char*,char*) ;
 int FUNC_15 (int **,int *,char*,char*,int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int **,int *) ;

void FUNC_18(void)
{
 git_reference *VAR_1, *VAR_2;
 git_repository *VAR_3;
 git_remote *VAR_4;
 git_config *VAR_5;

 VAR_3 = FUNC_5("testrepo.git");

 FUNC_3(FUNC_15(&VAR_4, VAR_3, "matching", ".", ((void*)0)));
 FUNC_3(FUNC_14(VAR_3, "matching", ":"));

 FUNC_3(FUNC_12(&VAR_2, VAR_3, "refs/heads/test"));
 FUNC_3(FUNC_10(&VAR_1, VAR_3, "refs/remotes/matching/master", FUNC_13(VAR_2), 1, "fetch"));
 FUNC_1(FUNC_6(VAR_2, "matching/master"));
 FUNC_0("could not determine remote for 'refs/remotes/matching/master'",
     FUNC_9()->message);


 FUNC_3(FUNC_17(&VAR_5, VAR_3));
 FUNC_3(FUNC_8(VAR_5, "branch.test.remote", "matching"));
 FUNC_3(FUNC_8(VAR_5, "branch.test.merge", "refs/heads/master"));

 FUNC_2(VAR_0, FUNC_7(&VAR_1, VAR_2));

 FUNC_11(VAR_1);
 FUNC_11(VAR_2);
 FUNC_16(VAR_4);

 FUNC_4();
}
