
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_tree_entry ;
typedef int git_tree ;
typedef int git_oid ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int * FUNC_3 (int *,char*) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_7(void)
{
 git_oid VAR_3;
 git_tree *VAR_4;
 const git_tree_entry *VAR_5;


 FUNC_1(FUNC_2(&VAR_3, VAR_2));
 FUNC_1(FUNC_6(&VAR_4, VAR_1, &VAR_3));

 VAR_5 = FUNC_3(VAR_4, "old_mode.txt");
 FUNC_0(
  VAR_0,
  FUNC_4(VAR_5));

 FUNC_5(VAR_4);
}
