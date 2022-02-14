
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_config ;


 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int **,char*,char*,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char const**,int *,char*) ;
 int FUNC_7 (int **,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,char*,int ) ;

void FUNC_10(void)
{
 git_config *VAR_2;
 git_repository *VAR_3;
 const char *VAR_4;


 FUNC_3(&VAR_0, "./test1");
 FUNC_2(FUNC_9(&VAR_1, "./test1", 0));
 FUNC_3(&VAR_0, "./repowithunborn");
 FUNC_2(FUNC_4(&VAR_3, "./test1", "./repowithunborn", ((void*)0)));

 FUNC_2(FUNC_7(&VAR_2, VAR_3));

 FUNC_2(FUNC_6(&VAR_4, VAR_2, "branch.master.remote"));
 FUNC_0("origin", VAR_4);
 FUNC_2(FUNC_6(&VAR_4, VAR_2, "branch.master.merge"));
 FUNC_0("refs/heads/master", VAR_4);

 FUNC_5(VAR_2);
 FUNC_8(VAR_3);
 FUNC_1("./repowithunborn");
}
