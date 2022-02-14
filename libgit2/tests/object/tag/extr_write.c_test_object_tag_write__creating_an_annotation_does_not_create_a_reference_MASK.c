
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_reference ;
typedef int git_oid ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,char*) ;
 int VAR_1 ;
 int FUNC_2 (int **,int ,char*) ;

void FUNC_3(void)
{
 git_oid VAR_2;
 git_reference *VAR_3;

 FUNC_1(&VAR_2, "new_tag");
 FUNC_0(FUNC_2(&VAR_3, VAR_1, "refs/tags/new_tag"), VAR_0);
}
