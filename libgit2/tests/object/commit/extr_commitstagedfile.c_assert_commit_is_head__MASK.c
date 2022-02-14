
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_object ;
typedef int git_commit ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char const*,int,char*,int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int **,int ,char*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_6(git_commit *VAR_1, const char *VAR_2, int VAR_3)
{
 git_commit *VAR_4;
 FUNC_0(FUNC_5((git_object **)&VAR_4, VAR_0, "HEAD"));
 FUNC_1(FUNC_4(FUNC_3(VAR_1), FUNC_3(VAR_4)), VAR_2, VAR_3, "Commit is not the HEAD", ((void*)0), 1);
 FUNC_2(VAR_4);
}
