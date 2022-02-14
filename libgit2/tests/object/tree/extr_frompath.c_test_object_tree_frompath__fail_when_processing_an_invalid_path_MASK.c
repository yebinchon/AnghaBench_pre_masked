
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_tree_entry ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int **,int ,char*) ;
 int VAR_0 ;

void FUNC_2(void)
{
 git_tree_entry *VAR_1;

 FUNC_0(FUNC_1(&VAR_1, VAR_0, "/"));
 FUNC_0(FUNC_1(&VAR_1, VAR_0, "/ab"));
 FUNC_0(FUNC_1(&VAR_1, VAR_0, "/ab/de"));
 FUNC_0(FUNC_1(&VAR_1, VAR_0, "ab//de"));
}
