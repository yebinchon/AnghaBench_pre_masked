
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_tree ;
typedef int git_repository ;


 int VAR_0 ;
 int FUNC_0 (int **,int *,int *,char const*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int *,int ) ;

__attribute__((used)) static int FUNC_4(git_tree **VAR_1, git_tree *VAR_2,
   git_repository *VAR_3, const char *VAR_4, int *VAR_5)
{
 int VAR_6;
 git_tree *VAR_7 = ((void*)0);

 *VAR_1 = ((void*)0);

 VAR_6 = FUNC_0(&VAR_7, VAR_3, VAR_2, VAR_4, *VAR_5);
 if (VAR_6 == VAR_0)
  return FUNC_3(VAR_1, VAR_3, FUNC_2(VAR_2));

 if (VAR_6 < 0)
  return VAR_6;

 *VAR_5 += 2;
 VAR_6 = FUNC_4(VAR_1, VAR_7, VAR_3, VAR_4, VAR_5);
 FUNC_1(VAR_7);

 return VAR_6;
}
