
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_pool ;


 char* FUNC_0 (int *,char const*,char*) ;
 char* FUNC_1 (int *,char const*,size_t) ;
 size_t FUNC_2 (char const*) ;

__attribute__((used)) static char *FUNC_3(git_pool *VAR_0, const char *VAR_1)
{
 size_t VAR_2 = FUNC_2(VAR_1);


 if (VAR_2 > 0 && VAR_1[VAR_2 - 1] != '/')
  return FUNC_0(VAR_0, VAR_1, "/");
 else
  return FUNC_1(VAR_0, VAR_1, VAR_2 + 1);
}
