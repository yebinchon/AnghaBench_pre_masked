
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_reference ;
typedef int git_index ;
typedef int git_annotated_commit ;


 int FUNC_0 (int ,int ,int,int,int ,int ,int ,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int VAR_0 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ,int *) ;
 int FUNC_6 (int *,int *,int ,int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int const**,int,int *,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int **,int ,char*) ;
 int FUNC_12 (int **,int ) ;

void FUNC_13(void)
{
 git_index *VAR_1;
 git_reference *VAR_2;
 git_annotated_commit *VAR_3;

 VAR_0 = FUNC_3("merge-resolve");
 FUNC_1(FUNC_12(&VAR_1, VAR_0));

 FUNC_0(VAR_0, 0, 0, 0, 0, 0, 0, 0, 0);

 FUNC_1(FUNC_11(&VAR_2, VAR_0, "refs/heads/branch"));
 FUNC_1(FUNC_5(&VAR_3, VAR_0, VAR_2));

 FUNC_1(FUNC_9(VAR_0, (const git_annotated_commit**)&VAR_3, 1, ((void*)0), ((void*)0)));
 FUNC_0(VAR_0, 0, 1, 2, 0, 0, 0, 0, 1);

 FUNC_2("merge-resolve/conflicting.txt");

 FUNC_1(FUNC_6(VAR_1, ((void*)0), 0, ((void*)0), ((void*)0)));
 FUNC_1(FUNC_8(VAR_1));
 FUNC_0(VAR_0, 0, 2, 2, 0, 0, 0, 0, 0);

 FUNC_4(VAR_3);
 FUNC_10(VAR_2);
 FUNC_7(VAR_1);
}
