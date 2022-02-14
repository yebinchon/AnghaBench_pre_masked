
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,char*) ;
 int FUNC_7 (int ) ;

void FUNC_8(void)
{
 git_repository *VAR_2;
 git_buf VAR_3 = VAR_0;

 VAR_2 = FUNC_1("issue_592");

 FUNC_0(FUNC_4(&VAR_3, FUNC_5(VAR_2), "t/b.txt"));
 FUNC_0(FUNC_7(FUNC_2(&VAR_3)));

 FUNC_0(FUNC_6(VAR_2, VAR_1, "t/b.txt"));

 FUNC_3(&VAR_3);
}
