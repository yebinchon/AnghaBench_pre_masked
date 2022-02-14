
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_reference ;
typedef int git_object ;
typedef int git_commit ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int **,int *,char const*,int *,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_6(git_repository *VAR_3, const git_commit *VAR_4, const char *VAR_5)
{
 git_reference *VAR_6;

 FUNC_0(VAR_1, FUNC_4((git_object*)VAR_4));
 FUNC_1(FUNC_2(&VAR_6, VAR_3, VAR_5, (git_commit*)VAR_4, 0));

 FUNC_0(VAR_0, FUNC_3(&VAR_2, VAR_6));

 FUNC_5(VAR_6);
}
