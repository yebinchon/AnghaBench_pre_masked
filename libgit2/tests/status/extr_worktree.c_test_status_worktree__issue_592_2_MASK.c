
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,char*) ;
 int FUNC_9 (int ) ;

void FUNC_10(void)
{
 git_repository *VAR_2;
 git_buf VAR_3 = VAR_0;

 VAR_2 = FUNC_2("issue_592");
 FUNC_1(FUNC_5(&VAR_3, FUNC_7(VAR_2), "c/a.txt"));
 FUNC_1(FUNC_9(FUNC_3(&VAR_3)));
 FUNC_0(!FUNC_6("issue_592/c/a.txt"));

 FUNC_1(FUNC_8(VAR_2, VAR_1, "c/a.txt"));

 FUNC_4(&VAR_3);
}
