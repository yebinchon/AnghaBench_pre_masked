
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_tree_entry ;
typedef int git_tree ;
typedef int git_oid ;
typedef int git_object ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int **,int ,int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int * FUNC_7 (int *,char*) ;
 int FUNC_8 (int const*) ;
 int FUNC_9 (int **,int ,int const*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int **,int ,int *) ;
 int VAR_3 ;

void FUNC_13(void)
{

 git_oid VAR_4;
 git_tree *VAR_5;
 const git_tree_entry *VAR_6;
 git_object *VAR_7;

 FUNC_6(&VAR_4, VAR_3);

 FUNC_3(FUNC_12(&VAR_5, VAR_2, &VAR_4));

 FUNC_0(FUNC_10(VAR_5) == 3);


 FUNC_0(FUNC_5(&VAR_7, VAR_2, &VAR_4, VAR_1) == 0);
 FUNC_0(VAR_7 != ((void*)0));
 FUNC_4(VAR_7);
 VAR_7 = ((void*)0);
 FUNC_2(FUNC_5(&VAR_7, VAR_2, &VAR_4, VAR_0));
 FUNC_0(VAR_7 == ((void*)0));

 VAR_6 = FUNC_7(VAR_5, "README");
 FUNC_0(VAR_6 != ((void*)0));

 FUNC_1(FUNC_8(VAR_6), "README");

 FUNC_3(FUNC_9(&VAR_7, VAR_2, VAR_6));
 FUNC_0(VAR_7 != ((void*)0));

 FUNC_4(VAR_7);
 FUNC_11(VAR_5);
}
