
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_index ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int ) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,char*,int) ;
 int FUNC_10 (unsigned int*,int *,char*) ;
 int FUNC_11 (char*,int) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*) ;

void FUNC_14(void)
{
 git_repository *VAR_1;
 unsigned int VAR_2 = 0;
 git_index *VAR_3;

 FUNC_2(FUNC_11("wd", 0777));

 FUNC_2(FUNC_7(&VAR_1, FUNC_1("testrepo.git")));
 FUNC_2(FUNC_9(VAR_1, "wd", 0));

 FUNC_2(FUNC_5(&VAR_3, "my-index"));
 FUNC_3(VAR_1, VAR_3);

 FUNC_8(VAR_1, VAR_3);

 FUNC_2(FUNC_10(&VAR_2, VAR_1, "branch_file.txt"));

 FUNC_0(VAR_0, VAR_2);

 FUNC_6(VAR_1);
 FUNC_4(VAR_3);
 FUNC_2(FUNC_12("wd"));
 FUNC_2(FUNC_13("my-index"));
}
