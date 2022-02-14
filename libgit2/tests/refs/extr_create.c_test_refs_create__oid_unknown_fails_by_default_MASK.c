
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_reference ;
typedef int git_oid ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int **,int ,char const*,int *,int ,int *) ;
 int FUNC_3 (int **,int ,char const*) ;

void FUNC_4(void)
{
 git_reference *VAR_1, *VAR_2;
 git_oid VAR_3;

 const char *VAR_4 = "refs/heads/new-head";

 FUNC_1(&VAR_3, "deadbeef3f795b2b4353bcce3a527ad0a4f7f644");


 FUNC_0(FUNC_2(&VAR_1, VAR_0, VAR_4, &VAR_3, 0, ((void*)0)));


 FUNC_0(FUNC_3(&VAR_2, VAR_0, VAR_4));
}
