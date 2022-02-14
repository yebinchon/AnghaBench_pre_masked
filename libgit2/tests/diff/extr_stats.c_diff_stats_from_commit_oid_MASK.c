
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_oid ;
typedef int git_diff_stats ;
typedef int git_diff ;
typedef int git_commit ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,int ,int *) ;
 int FUNC_3 (int **,int ,int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int *) ;
 int FUNC_7 (int *,char const*) ;

__attribute__((used)) static void FUNC_8(
 git_diff_stats **VAR_1, const char *VAR_2, bool VAR_3)
{
 git_oid VAR_4;
 git_commit *VAR_5;
 git_diff *VAR_6;

 FUNC_7(&VAR_4, VAR_2);
 FUNC_0(FUNC_2(&VAR_5, VAR_0, &VAR_4));
 FUNC_0(FUNC_3(&VAR_6, VAR_0, VAR_5, ((void*)0)));
 if (VAR_3)
  FUNC_0(FUNC_4(VAR_6, ((void*)0)));
 FUNC_0(FUNC_6(VAR_1, VAR_6));

 FUNC_5(VAR_6);
 FUNC_1(VAR_5);
}
