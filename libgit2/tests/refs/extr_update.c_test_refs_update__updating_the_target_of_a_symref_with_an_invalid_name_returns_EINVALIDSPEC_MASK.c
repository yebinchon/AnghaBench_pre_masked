
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_reference ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int ,int ) ;
 int FUNC_4 (int **,int ,int ,char*,int,int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(void)
{
 git_reference *VAR_4;

 FUNC_1(FUNC_3(&VAR_4, VAR_3, VAR_1));
 FUNC_0(VAR_2, FUNC_5(VAR_4));
 FUNC_2(VAR_4);

 FUNC_0(VAR_0, FUNC_4(&VAR_4, VAR_3, VAR_1, "refs/heads/inv@{id", 1, ((void*)0)));
}
