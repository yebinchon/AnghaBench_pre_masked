
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_reference ;
typedef int git_object ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_5 (int **,char*,char*,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int **,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int **,int *,char*) ;

void FUNC_15(void)
{
 git_object *VAR_2;
 git_repository *VAR_3;
 git_reference *VAR_4;

 FUNC_4(FUNC_5(&VAR_1, FUNC_3("testrepo.git"), "./foo", &VAR_0));

 FUNC_4(FUNC_14(&VAR_2, VAR_1, "master~1"));
 FUNC_4(FUNC_13(VAR_1, FUNC_7(VAR_2)));

 FUNC_4(FUNC_5(&VAR_3, "./foo", "./foo1", &VAR_0));

 FUNC_0(FUNC_12(VAR_3));

 FUNC_4(FUNC_11(&VAR_4, VAR_3));
 FUNC_1(FUNC_7(VAR_2), FUNC_9(VAR_4));

 FUNC_6(VAR_2);
 FUNC_8(VAR_4);
 FUNC_10(VAR_3);

 FUNC_2("./foo1");
}
