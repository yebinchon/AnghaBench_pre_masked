
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_reference ;
typedef int git_object ;
typedef int git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,char const*,size_t) ;
 int FUNC_3 (int **,int *) ;
 int FUNC_4 (int **,int **,int *,int ) ;

__attribute__((used)) static int FUNC_5(git_object **VAR_2, git_reference **VAR_3, const char *VAR_4, size_t VAR_5, git_repository *VAR_6, bool VAR_7)
{
 int VAR_8;
 git_buf VAR_9 = VAR_0;

 if (*VAR_2 != ((void*)0))
  return 0;

 if (*VAR_3 != ((void*)0))
  return FUNC_3(VAR_2, *VAR_3);

 if (!VAR_7 && VAR_5 == 0)
  return VAR_1;

 if (FUNC_2(&VAR_9, VAR_4, VAR_5) < 0)
  return -1;

 VAR_8 = FUNC_4(VAR_2, VAR_3, VAR_6, FUNC_0(&VAR_9));
 FUNC_1(&VAR_9);

 return VAR_8;
}
