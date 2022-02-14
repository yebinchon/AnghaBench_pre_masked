
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_reference ;
typedef int git_oid ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int **,int ,char const*,int *,int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ,char const*) ;

void FUNC_6(void)
{
 git_reference *VAR_2, *VAR_3;
 git_oid VAR_4;

 const char *VAR_5 = "refs/heads/new-head";

 FUNC_2(&VAR_4, "deadbeef3f795b2b4353bcce3a527ad0a4f7f644");

 FUNC_0(FUNC_1(VAR_0, 0));


 FUNC_0(FUNC_3(&VAR_2, VAR_1, VAR_5, &VAR_4, 0, ((void*)0)));
 FUNC_4(VAR_2);


 FUNC_0(FUNC_5(&VAR_3, VAR_1, VAR_5));
 FUNC_4(VAR_3);
}
