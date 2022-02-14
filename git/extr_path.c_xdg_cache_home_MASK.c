
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 char* FUNC_1 (char*) ;
 char* FUNC_2 (char*,char const*,char const*) ;

char *FUNC_3(const char *VAR_0)
{
 const char *VAR_1, *VAR_2;

 FUNC_0(VAR_0);
 VAR_2 = FUNC_1("XDG_CACHE_HOME");
 if (VAR_2 && *VAR_2)
  return FUNC_2("%s/git/%s", VAR_2, VAR_0);

 VAR_1 = FUNC_1("HOME");
 if (VAR_1)
  return FUNC_2("%s/.cache/git/%s", VAR_1, VAR_0);
 return ((void*)0);
}
