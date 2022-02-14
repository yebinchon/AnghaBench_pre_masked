
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_remote ;
typedef int git_reference ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int **,int *,char*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int *,char*,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int **,char*,int) ;
 int FUNC_10 (int **,char*) ;
 int VAR_1 ;

void FUNC_11(void) {
 git_repository *VAR_2;
 git_repository *VAR_3;
 git_remote *VAR_4;
 git_reference* VAR_5;


 FUNC_1("testrepo.git");
 FUNC_2(FUNC_10(&VAR_2, "testrepo.git"));


 FUNC_2(FUNC_9(&VAR_3, "./localbare.git", 1));


 FUNC_2(FUNC_5(&VAR_4, VAR_2, "bare", "./localbare.git"));
 FUNC_2(FUNC_7(VAR_4, &VAR_1, ((void*)0)));

 FUNC_2(FUNC_3(&VAR_5, VAR_2, "bare/master", VAR_0));

 FUNC_4(VAR_5);
 FUNC_6(VAR_4);
 FUNC_8(VAR_3);
 FUNC_0("localbare.git");
 FUNC_8(VAR_2);
 FUNC_0("testrepo.git");
}
