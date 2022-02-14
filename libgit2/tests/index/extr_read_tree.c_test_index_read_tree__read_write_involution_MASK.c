
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_tree ;
typedef int git_repository ;
typedef int git_oid ;
typedef int git_index ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,char*) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int **,int *) ;
 int FUNC_12 (int **,char*,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int **,int *,int *) ;
 int FUNC_15 (char*,int) ;

void FUNC_16(void)
{
 git_repository *VAR_0;
 git_index *VAR_1;
 git_oid VAR_2;
 git_tree *VAR_3;
 git_oid VAR_4;

 FUNC_15("read_tree", 0700);

 FUNC_4(FUNC_12(&VAR_0, "./read_tree", 0));
 FUNC_4(FUNC_11(&VAR_1, VAR_0));

 FUNC_0(FUNC_6(VAR_1) == 0);

 FUNC_15("./read_tree/abc", 0700);


 FUNC_3("./read_tree/abc-d", ((void*)0));
 FUNC_3("./read_tree/abc/d", ((void*)0));
 FUNC_3("./read_tree/abc_d", ((void*)0));

 FUNC_4(FUNC_5(VAR_1, "abc-d"));
 FUNC_4(FUNC_5(VAR_1, "abc_d"));
 FUNC_4(FUNC_5(VAR_1, "abc/d"));


 FUNC_4(FUNC_9(&VAR_4, VAR_1));


 FUNC_14(&VAR_3, VAR_0, &VAR_4);
 FUNC_4(FUNC_8(VAR_1, VAR_3));
 FUNC_13(VAR_3);

 FUNC_4(FUNC_9(&VAR_2, VAR_1));
 FUNC_1(&VAR_4, &VAR_2);

 FUNC_7(VAR_1);
 FUNC_10(VAR_0);

 FUNC_2("read_tree");
}
