
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_transaction ;
typedef int git_repository ;
typedef int git_oid ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,char const*) ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int **,int *) ;
 int FUNC_9 (int *,char*,int *,int *,int *) ;

void FUNC_10(void)
{
 git_oid VAR_4;
 git_transaction *VAR_5;
 git_repository *VAR_6;
 const char *VAR_7 = FUNC_5(VAR_2);


 FUNC_1(FUNC_4(&VAR_6, VAR_7));
 FUNC_1(FUNC_8(&VAR_5, VAR_6));
 FUNC_1(FUNC_7(VAR_5, "refs/heads/master"));


 FUNC_1(FUNC_2(&VAR_4, "a65fedf39aefe402d3bb6e24df4d4f5fe4547750"));
 FUNC_0(VAR_0, FUNC_7(VAR_3, "refs/heads/master"));
 FUNC_0(VAR_1, FUNC_9(VAR_3, "refs/heads/master", &VAR_4, ((void*)0), ((void*)0)));

 FUNC_6(VAR_5);
 FUNC_3(VAR_6);
}
