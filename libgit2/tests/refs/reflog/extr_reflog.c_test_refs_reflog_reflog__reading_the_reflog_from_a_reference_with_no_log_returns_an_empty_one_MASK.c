
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_reflog ;
typedef int git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char,int,int ,int ,char const*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int ,char const*) ;
 int FUNC_9 (int ) ;

void FUNC_10(void)
{
 git_reflog *VAR_3;
 const char *VAR_4 = "refs/heads/subtrees";
 git_buf VAR_5 = VAR_0;

 FUNC_4(&VAR_5, '/', 3, FUNC_9(VAR_2), VAR_1, VAR_4);
 FUNC_0(0, FUNC_5(FUNC_2(&VAR_5)));

 FUNC_1(FUNC_8(&VAR_3, VAR_2, VAR_4));

 FUNC_0(0, (int)FUNC_6(VAR_3));

 FUNC_7(VAR_3);
 FUNC_3(&VAR_5);
}
