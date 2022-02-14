
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,char*) ;
 int FUNC_6 (int ,int *,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ,char*) ;

void FUNC_10(void)
{
 git_repository *VAR_3;
 git_buf VAR_4 = VAR_0;

 VAR_3 = FUNC_2("issue_592");

 FUNC_1(FUNC_5(&VAR_4, FUNC_8(VAR_3), "c"));
 FUNC_1(FUNC_6(FUNC_3(&VAR_4), ((void*)0), VAR_1));
 FUNC_0(!FUNC_7("issue_592/c/a.txt"));

 FUNC_1(FUNC_9(VAR_3, VAR_2, "c/a.txt"));

 FUNC_4(&VAR_4);
}
