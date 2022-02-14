
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_reference ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int ,char*) ;
 int FUNC_4 (int *) ;

void FUNC_5(void)
{
 git_reference *VAR_1, *VAR_2;

 FUNC_1(FUNC_3(&VAR_1, VAR_0, "refs/heads/test"));
 FUNC_1(FUNC_3(&VAR_2, VAR_0, "refs/heads/chomped"));
 FUNC_0(FUNC_4(VAR_1), FUNC_4(VAR_2));

 FUNC_2(VAR_1);
 FUNC_2(VAR_2);
}
