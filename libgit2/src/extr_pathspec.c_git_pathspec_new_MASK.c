
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_strarray ;
typedef int git_pathspec ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int) ;
 int FUNC_4 (int *,int const*) ;

int FUNC_5(git_pathspec **VAR_0, const git_strarray *VAR_1)
{
 int VAR_2 = 0;
 git_pathspec *VAR_3 = FUNC_3(sizeof(git_pathspec));
 FUNC_0(VAR_3);

 if ((VAR_2 = FUNC_4(VAR_3, VAR_1)) < 0) {
  FUNC_2(VAR_3);
  return VAR_2;
 }

 FUNC_1(VAR_3);
 *VAR_0 = VAR_3;
 return 0;
}
