
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_remote ;


 int FUNC_0 (void*) ;
 int FUNC_1 (int **,int *,char const*,char const*,char*) ;

__attribute__((used)) static int FUNC_2(git_remote **VAR_0, git_repository *VAR_1,
       const char *VAR_2, const char *VAR_3, void *VAR_4)
{
 int VAR_5;
 git_remote *VAR_6;

 FUNC_0(VAR_4);

 if ((VAR_5 = FUNC_1(&VAR_6, VAR_1, VAR_2, VAR_3, "+refs/*:refs/*")) < 0)
  return VAR_5;

 *VAR_0 = VAR_6;
 return 0;
}
