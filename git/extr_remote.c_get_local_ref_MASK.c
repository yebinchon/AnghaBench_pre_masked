
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref {int dummy; } ;


 struct ref* FUNC_0 (char const*) ;
 struct ref* FUNC_1 (char*,int,char const*) ;
 scalar_t__ FUNC_2 (char const*,char*) ;

__attribute__((used)) static struct ref *FUNC_3(const char *VAR_0)
{
 if (!VAR_0 || VAR_0[0] == '\0')
  return ((void*)0);

 if (FUNC_2(VAR_0, "refs/"))
  return FUNC_0(VAR_0);

 if (FUNC_2(VAR_0, "heads/") ||
     FUNC_2(VAR_0, "tags/") ||
     FUNC_2(VAR_0, "remotes/"))
  return FUNC_1("refs/", 5, VAR_0);

 return FUNC_1("refs/heads/", 11, VAR_0);
}
