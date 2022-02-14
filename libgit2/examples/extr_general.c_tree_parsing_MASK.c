
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_tree_entry ;
typedef int git_tree ;
typedef int git_repository ;
typedef int git_oid ;
typedef int git_object ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 int * FUNC_2 (int *,int ) ;
 int * FUNC_3 (int *,char*) ;
 char* FUNC_4 (int const*) ;
 int FUNC_5 (int **,int *,int const*) ;
 size_t FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int *,int *) ;
 int FUNC_9 (char*,...) ;

__attribute__((used)) static void FUNC_10(git_repository *VAR_0)
{
 const git_tree_entry *VAR_1;
 size_t VAR_2;
 git_object *VAR_3;
 git_tree *VAR_4;
 git_oid VAR_5;

 FUNC_9("\n*Tree Parsing*\n");




 FUNC_1(&VAR_5, "f60079018b664e4e79329a7ef9559c8d9e0378d1");
 FUNC_8(&VAR_4, VAR_0, &VAR_5);





 VAR_2 = FUNC_6(VAR_4);
 FUNC_9("tree entries: %d\n", (int) VAR_2);

 VAR_1 = FUNC_2(VAR_4, 0);
 FUNC_9("Entry name: %s\n", FUNC_4(VAR_1));





 VAR_1 = FUNC_3(VAR_4, "README");
 FUNC_4(VAR_1);






 FUNC_5(&VAR_3, VAR_0, VAR_1);




 FUNC_0(VAR_3);
 FUNC_7(VAR_4);
}
