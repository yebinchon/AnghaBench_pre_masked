
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_treebuilder ;
typedef int git_tree ;
typedef int git_oid ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int ,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *,char*,int *,int ) ;
 int FUNC_9 (int **,int ,int *) ;
 int FUNC_10 (int *,int *) ;
 int VAR_5 ;
 int VAR_6 ;

void FUNC_11(void)
{

 git_treebuilder *VAR_7;
 git_tree *VAR_8;
 git_oid VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 git_oid VAR_14;

 FUNC_3(&VAR_9, VAR_3);
 FUNC_3(&VAR_12, VAR_5);
 FUNC_3(&VAR_13, VAR_6);
 FUNC_3(&VAR_10, VAR_2);


 FUNC_1(FUNC_9(&VAR_7, VAR_4, ((void*)0)));
 FUNC_1(FUNC_8(
  ((void*)0), VAR_7, "new.txt", &VAR_10, VAR_0));
 FUNC_1(FUNC_10(&VAR_11, VAR_7));
 FUNC_7(VAR_7);


 FUNC_1(FUNC_6(&VAR_8, VAR_4, &VAR_9));
 FUNC_1(FUNC_9(&VAR_7, VAR_4, VAR_8));
 FUNC_1(FUNC_8(
  ((void*)0), VAR_7, "new", &VAR_11, VAR_1));
 FUNC_1(FUNC_10(&VAR_14, VAR_7));
 FUNC_7(VAR_7);
 FUNC_5(VAR_8);

 FUNC_0(FUNC_2(&VAR_14, &VAR_13) == 0);


 FUNC_1(FUNC_6(&VAR_8, VAR_4, &VAR_14));
 FUNC_0(2 == FUNC_4(VAR_8));
 FUNC_5(VAR_8);
}
