
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_tree_entry ;
typedef int git_reference ;
typedef int git_object ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int *,int ) ;
 int FUNC_6 (int **,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int **,int ,char*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

void FUNC_11(void)
{
 git_reference *VAR_7;
 git_tree_entry *VAR_8;

 FUNC_1(FUNC_7(&VAR_5, FUNC_0("attr/.gitted")));

 FUNC_1(FUNC_6(&VAR_7, VAR_5));
 FUNC_1(FUNC_5((git_object**)&VAR_4, VAR_7, VAR_1));
 FUNC_1(FUNC_2(&VAR_6, VAR_4));
 FUNC_1(FUNC_8(&VAR_8, VAR_6, "subdir/subdir_test2.txt"));
 FUNC_1(FUNC_3(&VAR_3, VAR_5, FUNC_10(VAR_8),
    VAR_0));

 FUNC_9(VAR_8);
 FUNC_4(VAR_7);

 VAR_2 = ((void*)0);
}
