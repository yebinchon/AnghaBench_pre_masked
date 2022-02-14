
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_treebuilder ;
typedef int git_tree_entry ;
typedef int git_tree ;
typedef int git_oid ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 int * FUNC_4 (int *,char*) ;
 int FUNC_5 (int const*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int ,int *) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int *,char*) ;
 int FUNC_10 (int **,int ,int *) ;
 int FUNC_11 (int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_12(void)
{
 git_treebuilder *VAR_3;
 git_oid VAR_4, VAR_5;
 git_tree *VAR_6;
 const git_tree_entry *VAR_7;

 FUNC_2(FUNC_3(&VAR_4, VAR_2));
 FUNC_2(FUNC_7(&VAR_6, VAR_1, &VAR_4));

 FUNC_2(FUNC_10(&VAR_3, VAR_1, VAR_6));

 VAR_7 = FUNC_9(VAR_3, "old_mode.txt");
 FUNC_0(VAR_7 != ((void*)0));
 FUNC_1(
  VAR_0,
  FUNC_5(VAR_7));

 FUNC_2(FUNC_11(&VAR_5, VAR_3));
 FUNC_8(VAR_3);
 FUNC_6(VAR_6);

 FUNC_2(FUNC_7(&VAR_6, VAR_1, &VAR_5));
 VAR_7 = FUNC_4(VAR_6, "old_mode.txt");
 FUNC_0(VAR_7 != ((void*)0));
 FUNC_1(
  VAR_0,
  FUNC_5(VAR_7));

 FUNC_6(VAR_6);
}
