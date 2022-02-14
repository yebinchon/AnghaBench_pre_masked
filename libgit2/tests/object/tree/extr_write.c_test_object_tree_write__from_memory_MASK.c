
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_treebuilder ;
typedef int git_tree ;
typedef int git_oid ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int ,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *,char*,int *,int ) ;
 int FUNC_9 (int **,int ,int *) ;
 int FUNC_10 (int *,int *) ;
 int VAR_4 ;

void FUNC_11(void)
{

 git_treebuilder *VAR_5;
 git_tree *VAR_6;
 git_oid VAR_7, VAR_8, VAR_9, VAR_10;

 FUNC_4(&VAR_7, VAR_2);
 FUNC_4(&VAR_10, VAR_4);
 FUNC_4(&VAR_8, VAR_1);




 FUNC_2(FUNC_6(&VAR_6, VAR_3, &VAR_7));
 FUNC_2(FUNC_9(&VAR_5, VAR_3, VAR_6));

 FUNC_1(FUNC_8(((void*)0), VAR_5, "",
  &VAR_8, VAR_0));
 FUNC_1(FUNC_8(((void*)0), VAR_5, "/",
  &VAR_8, VAR_0));
 FUNC_1(FUNC_8(((void*)0), VAR_5, ".git",
  &VAR_8, VAR_0));
 FUNC_1(FUNC_8(((void*)0), VAR_5, "..",
  &VAR_8, VAR_0));
 FUNC_1(FUNC_8(((void*)0), VAR_5, ".",
  &VAR_8, VAR_0));
 FUNC_1(FUNC_8(((void*)0), VAR_5, "folder/new.txt",
  &VAR_8, VAR_0));

 FUNC_2(FUNC_8(
  ((void*)0), VAR_5, "new.txt", &VAR_8, VAR_0));

 FUNC_2(FUNC_10(&VAR_9, VAR_5));

 FUNC_0(FUNC_3(&VAR_9, &VAR_10) == 0);

 FUNC_7(VAR_5);
 FUNC_5(VAR_6);
}
