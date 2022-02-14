
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_treebuilder ;
typedef int git_tree_entry ;
typedef int git_oid ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int const**,int *,char*,int *,int ) ;
 int FUNC_5 (int **,int ,int *) ;
 int VAR_2 ;

void FUNC_6(void)
{
 git_treebuilder *VAR_3;
 git_oid VAR_4;
 const git_tree_entry *VAR_5;

 FUNC_1(FUNC_2(&VAR_4, VAR_1));
 FUNC_1(FUNC_5(&VAR_3, VAR_2, ((void*)0)));

 FUNC_0(FUNC_4(
  &VAR_5,
  VAR_3,
  "normalized.txt",
  &VAR_4,
  VAR_0));

 FUNC_3(VAR_3);
}
