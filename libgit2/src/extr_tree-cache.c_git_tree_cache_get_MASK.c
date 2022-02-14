
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_tree_cache ;


 int * FUNC_0 (int const*,char const*,char const*) ;
 char* FUNC_1 (char const*,char) ;

const git_tree_cache *FUNC_2(const git_tree_cache *VAR_0, const char *VAR_1)
{
 const char *VAR_2 = VAR_1, *VAR_3;

 if (VAR_0 == ((void*)0)) {
  return ((void*)0);
 }

 while (1) {
  VAR_3 = FUNC_1(VAR_2, '/');

  VAR_0 = FUNC_0(VAR_0, VAR_2, VAR_3);
  if (VAR_0 == ((void*)0))
   return ((void*)0);

  if (VAR_3 == ((void*)0) || *VAR_3 + 1 == '\0')
   return VAR_0;

  VAR_2 = VAR_3 + 1;
 }
}
