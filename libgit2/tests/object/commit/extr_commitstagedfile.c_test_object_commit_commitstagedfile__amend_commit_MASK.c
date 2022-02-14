
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_tree ;
typedef int git_oid ;
typedef int git_index ;
typedef int git_commit ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int ,int *,int ,char*) ;
 int FUNC_8 (int *,int *,char*,int *,int *,int *,char*,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int **,int ,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,char*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 (int **,int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int **,int ,int *) ;
 int VAR_1 ;

void FUNC_19(void)
{
 git_index *VAR_2;
 git_oid VAR_3, VAR_4, VAR_5;
 git_commit *VAR_6, *VAR_7;
 git_tree *VAR_8;



 FUNC_5("treebuilder/myfile", "This is a file\n");
 FUNC_6(FUNC_15(&VAR_2, VAR_1));
 FUNC_6(FUNC_12(VAR_2, "myfile"));
 FUNC_7(&VAR_3, VAR_1, ((void*)0), 0, "first commit");

 FUNC_6(FUNC_10(&VAR_6, VAR_1, &VAR_3));

 FUNC_2(0, FUNC_11(VAR_6));
 FUNC_1(VAR_6, 1);
 FUNC_0(VAR_6);



 FUNC_6(FUNC_8(
  &VAR_4, VAR_6, "HEAD", ((void*)0), ((void*)0), ((void*)0), "Initial commit", ((void*)0)));


 FUNC_3(FUNC_8(
  &VAR_4, VAR_6, "HEAD", ((void*)0), ((void*)0), ((void*)0), "Initial commit", ((void*)0)));

 FUNC_6(FUNC_10(&VAR_7, VAR_1, &VAR_4));

 FUNC_2(0, FUNC_11(VAR_7));
 FUNC_1(VAR_7, 1);
 FUNC_0(VAR_7);

 FUNC_9(VAR_6);

 VAR_6 = VAR_7;



 FUNC_5("treebuilder/anotherfile", "This is another file\n");
 FUNC_6(FUNC_12(VAR_2, "anotherfile"));
 FUNC_6(FUNC_14(&VAR_5, VAR_2));
 FUNC_6(FUNC_18(&VAR_8, VAR_1, &VAR_5));
 FUNC_2(2, FUNC_16(VAR_8));


 FUNC_4(VAR_0, FUNC_8(
  &VAR_4, VAR_6, "refs/heads/nope", ((void*)0), ((void*)0), ((void*)0), "Initial commit", VAR_8));

 FUNC_6(FUNC_8(
  &VAR_4, VAR_6, "HEAD", ((void*)0), ((void*)0), ((void*)0), "Initial commit", VAR_8));
 FUNC_17(VAR_8);

 FUNC_6(FUNC_10(&VAR_7, VAR_1, &VAR_4));

 FUNC_2(0, FUNC_11(VAR_7));
 FUNC_1(VAR_7, 2);
 FUNC_0(VAR_7);



 FUNC_9(VAR_6);
 FUNC_9(VAR_7);
 FUNC_13(VAR_2);
}
