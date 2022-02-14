
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_reflog ;
typedef int git_reference ;


 int FUNC_0 (size_t,size_t) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int **,int ,char*,int ,int,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int ,char*) ;
 int FUNC_5 (int *) ;
 size_t FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int ,char*) ;

void FUNC_9(void)
{
 size_t VAR_1, VAR_2;
 git_reference *VAR_3, *VAR_4;
 git_reflog *VAR_5;

 FUNC_1(FUNC_8(&VAR_5, VAR_0, "HEAD"));
 VAR_1 = FUNC_6(VAR_5);
 FUNC_7(VAR_5);

 FUNC_1(FUNC_4(&VAR_3, VAR_0, "refs/heads/master"));
 FUNC_1(FUNC_2(&VAR_4, VAR_0, "refs/heads/master",
      FUNC_5(VAR_3), 1, ((void*)0)));

 FUNC_3(VAR_3);
 FUNC_3(VAR_4);

 FUNC_1(FUNC_8(&VAR_5, VAR_0, "HEAD"));
 VAR_2 = FUNC_6(VAR_5);
 FUNC_7(VAR_5);

 FUNC_0(VAR_2, VAR_1);
}
