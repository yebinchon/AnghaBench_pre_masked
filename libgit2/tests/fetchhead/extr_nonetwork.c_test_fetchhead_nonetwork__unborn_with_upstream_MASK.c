
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_remote ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int **,char*,char*,int *) ;
 int FUNC_5 (int *,int *,int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int *,char*) ;
 int FUNC_8 (int *,char*,int ) ;
 int FUNC_9 (int *,int ,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,char*,int ) ;

void FUNC_12(void)
{
 git_repository *VAR_3;
 git_remote *VAR_4;


 FUNC_3(&VAR_1, "./test1");
 FUNC_2(FUNC_11(&VAR_2, "./test1", 0));
 FUNC_3(&VAR_1, "./repowithunborn");
 FUNC_2(FUNC_4(&VAR_3, "./test1", "./repowithunborn", ((void*)0)));


 FUNC_2(FUNC_8(VAR_3, "origin", FUNC_0("testrepo.git")));
 FUNC_2(FUNC_7(&VAR_4, VAR_3, "origin"));

 FUNC_2(FUNC_5(VAR_4, ((void*)0), ((void*)0), ((void*)0)));
 FUNC_6(VAR_4);

 FUNC_2(FUNC_9(VAR_3, VAR_0, ((void*)0)));

 FUNC_10(VAR_3);
 FUNC_1("./repowithunborn");
}
