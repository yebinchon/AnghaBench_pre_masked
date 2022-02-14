
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_reference ;
typedef int git_oid ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int **,int ,char*,int *,int,int *) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int *) ;

void FUNC_6(void)
{
 git_reference *VAR_2;
 git_oid VAR_3;

 FUNC_2(&VAR_3, VAR_0);
 FUNC_4(VAR_1, "refs/tags/foo");

 FUNC_1(FUNC_3(&VAR_2, VAR_1, "refs/tags/foo", &VAR_3, 1, ((void*)0)));
 FUNC_5(VAR_2);
 FUNC_0(1, "refs/tags/foo");
}
