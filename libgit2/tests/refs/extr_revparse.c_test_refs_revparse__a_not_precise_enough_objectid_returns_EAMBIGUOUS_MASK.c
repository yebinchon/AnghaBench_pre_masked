
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_object ;
typedef int git_index ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int * FUNC_4 (char*) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int *) ;
 int FUNC_9 (int **,int *,char*) ;

void FUNC_10(void)
{
 git_repository *VAR_1;
 git_index *VAR_2;
 git_object *VAR_3;

 VAR_1 = FUNC_4("testrepo");

 FUNC_1("testrepo/one.txt", "aabqhq\n");
 FUNC_1("testrepo/two.txt", "aaazvc\n");

 FUNC_2(FUNC_8(&VAR_2, VAR_1));
 FUNC_2(FUNC_5(VAR_2, "one.txt"));
 FUNC_2(FUNC_5(VAR_2, "two.txt"));

 FUNC_0(FUNC_9(&VAR_3, VAR_1, "dea509d0"), VAR_0);

 FUNC_2(FUNC_9(&VAR_3, VAR_1, "dea509d09"));

 FUNC_7(VAR_3);
 FUNC_6(VAR_2);
 FUNC_3();
}
