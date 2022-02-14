
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,char*) ;
 int FUNC_5 (int ,int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int *) ;
 int FUNC_8 (int ,int) ;

void FUNC_9(void)
{
 git_repository *VAR_3;
 git_buf VAR_4 = VAR_0;

 VAR_3 = FUNC_1("issue_592");

 FUNC_0(FUNC_4(&VAR_4, FUNC_6(VAR_3), "t"));
 FUNC_0(FUNC_5(FUNC_2(&VAR_4), ((void*)0), VAR_1));
 FUNC_0(FUNC_8(FUNC_2(&VAR_4), 0777));

 FUNC_0(FUNC_7(VAR_3, VAR_2, ((void*)0)));

 FUNC_3(&VAR_4);
}
