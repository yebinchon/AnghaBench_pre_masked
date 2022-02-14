
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int *,int ,char*,char*) ;
 int FUNC_3 (char*,char*,char*) ;
 char* FUNC_4 (scalar_t__) ;

char *
FUNC_5 (void)
{
  char *VAR_0 = ((void*)0), *VAR_1 = ((void*)0);

  VAR_0 = FUNC_1 ("HOME");
  if (VAR_0 == ((void*)0))
    FUNC_0 ("Unable to determine the HOME environment variable.");

  VAR_1 = FUNC_4 (FUNC_2 (((void*)0), 0, "%s/.goaccessrc", VAR_0) + 1);
  FUNC_3 (VAR_1, "%s/.goaccessrc", VAR_0);

  return VAR_1;
}
