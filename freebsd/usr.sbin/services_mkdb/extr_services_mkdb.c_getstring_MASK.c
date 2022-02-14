
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char**,char*) ;
 int FUNC_1 (char*,char const*,size_t,char const*) ;

__attribute__((used)) static char *
FUNC_2(const char *VAR_0, size_t VAR_1, char **VAR_2, const char *VAR_3)
{
 char *VAR_4;

 while ((VAR_4 = FUNC_0(VAR_2, " \t")) != ((void*)0) && *VAR_4 == '\0')
  continue;

 if (VAR_4 == ((void*)0))
  FUNC_1("%s, %zu: no %s found", VAR_0, VAR_1, VAR_3);

 return VAR_4;
}
