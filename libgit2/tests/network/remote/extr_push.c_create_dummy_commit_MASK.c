
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_signature ;
typedef int git_repository ;
typedef int git_reference ;
typedef int git_oid ;
typedef int git_index ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int *,int *,int *,int *,char*,int *,int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int **,int *,char*,int *,int,char*) ;
 int FUNC_5 (int **,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,char*,char*) ;

void FUNC_8(git_reference **VAR_0, git_repository *VAR_1)
{
 git_index *VAR_2;
 git_oid VAR_3, VAR_4;
 git_signature *VAR_5;

 FUNC_0(FUNC_5(&VAR_2, VAR_1));
 FUNC_0(FUNC_3(&VAR_3, VAR_2));
 FUNC_2(VAR_2);

 FUNC_0(FUNC_7(&VAR_5, "Pusher Joe", "pjoe"));
 FUNC_0(FUNC_1(&VAR_4, VAR_1, ((void*)0), VAR_5, VAR_5,
            ((void*)0), "Empty tree\n", &VAR_3, 0, ((void*)0)));
 FUNC_0(FUNC_4(VAR_0, VAR_1, "refs/heads/empty-tree", &VAR_4, 1, "commit yo"));
 FUNC_6(VAR_5);
}
