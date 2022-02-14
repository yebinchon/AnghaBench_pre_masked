
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_tree_entry ;
typedef int git_tree ;
typedef int git_oid ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*) ;
 int * FUNC_3 (int *,char*) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int const*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int ,int *) ;
 int VAR_1 ;

void FUNC_8(void)
{
 git_oid VAR_2;
 git_tree *VAR_3;
 const git_tree_entry *VAR_4;

 FUNC_2(&VAR_2, "0810fb7818088ff5ac41ee49199b51473b1bd6c7");
 FUNC_1(FUNC_7(&VAR_3, VAR_1, &VAR_2));

 VAR_4 = FUNC_3(VAR_3, "ListaTeste.xml");
 FUNC_0(FUNC_4(VAR_4), VAR_0);
 FUNC_0(FUNC_5(VAR_4), 0100600);

 FUNC_6(VAR_3);
}
