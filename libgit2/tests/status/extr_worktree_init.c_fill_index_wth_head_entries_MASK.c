
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_tree ;
typedef int git_repository ;
typedef int git_oid ;
typedef int git_index ;
typedef int git_commit ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,int *,int *) ;
 int FUNC_3 (int **,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,char*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(git_repository *VAR_0, git_index *VAR_1)
{
 git_oid VAR_2;
 git_commit *VAR_3;
 git_tree *VAR_4;

 FUNC_0(FUNC_6(&VAR_2, VAR_0, "HEAD"));
 FUNC_0(FUNC_2(&VAR_3, VAR_0, &VAR_2));
 FUNC_0(FUNC_3(&VAR_4, VAR_3));

 FUNC_0(FUNC_4(VAR_1, VAR_4));
 FUNC_0(FUNC_5(VAR_1));

 FUNC_7(VAR_4);
 FUNC_1(VAR_3);
}
