
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int *,int ,char*,char const*,char const*,char const*) ;
 int FUNC_1 (char*,char*,char const*,char const*,char const*) ;
 char* FUNC_2 (int) ;

__attribute__((used)) static char *
FUNC_3 (const char *VAR_0)
{
  char *VAR_1;
  int VAR_2 = 0;






  const char *VAR_3 = "|";
  const char *VAR_4 = "`-";


  if (VAR_0 == ((void*)0) || *VAR_0 == '\0')
    return ((void*)0);

  VAR_2 = FUNC_0 (((void*)0), 0, " %s%s %s", VAR_3, VAR_4, VAR_0);
  VAR_1 = FUNC_2 (VAR_2 + 3);
  FUNC_1 (VAR_1, " %s%s %s", VAR_3, VAR_4, VAR_0);

  return VAR_1;
}
