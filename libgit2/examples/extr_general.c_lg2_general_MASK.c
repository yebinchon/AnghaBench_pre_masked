
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_oid ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

int FUNC_15(git_repository *VAR_0, int VAR_1, char** VAR_2)
{
 int VAR_3;
 git_oid VAR_4;
 char *VAR_5;





 FUNC_5();
 VAR_5 = (VAR_1 > 1) ? VAR_2[1] : "/opt/libgit2-test/.git";

 VAR_3 = FUNC_7(&VAR_0, VAR_5);
 FUNC_1(VAR_3, "opening repository");

 FUNC_10(&VAR_4);
 FUNC_9(VAR_0, &VAR_4);
 FUNC_3(VAR_0);
 FUNC_2(VAR_0);
 FUNC_13(VAR_0);
 FUNC_14(VAR_0);
 FUNC_0(VAR_0);
 FUNC_12(VAR_0);
 FUNC_8(VAR_0);
 FUNC_11(VAR_0);
 FUNC_4(VAR_5, VAR_0);




 FUNC_6(VAR_0);

 return 0;
}
