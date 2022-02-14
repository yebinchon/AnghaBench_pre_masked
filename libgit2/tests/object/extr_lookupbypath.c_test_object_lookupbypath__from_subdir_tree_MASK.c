
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_tree_entry ;
typedef int git_tree ;
typedef int git_object ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *,char*,int ) ;
 int FUNC_4 (int **,int ,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int ,int ) ;

void FUNC_9(void)
{
 git_tree_entry *VAR_5 = ((void*)0);
 git_tree *VAR_6 = ((void*)0);

 FUNC_1(FUNC_4(&VAR_5, VAR_4, "subdir"));
 FUNC_1(FUNC_8(&VAR_6, VAR_3, FUNC_6(VAR_5)));

 FUNC_1(FUNC_3(&VAR_1, (git_object*)VAR_6,
    "subdir_test2.txt", VAR_0));
 FUNC_0(FUNC_2(VAR_2),
    FUNC_2(VAR_1));

 FUNC_5(VAR_5);
 FUNC_7(VAR_6);
}
