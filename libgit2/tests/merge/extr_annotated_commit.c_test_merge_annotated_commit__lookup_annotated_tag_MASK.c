
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_reference ;
typedef int git_annotated_commit ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int ,char*) ;

void FUNC_5(void)
{
 git_annotated_commit *VAR_1;
 git_reference *VAR_2;

 FUNC_0(FUNC_4(&VAR_2, VAR_0, "refs/tags/test"));
 FUNC_0(FUNC_2(&VAR_1, VAR_0, VAR_2));

 FUNC_1(VAR_1);
 FUNC_3(VAR_2);
}
