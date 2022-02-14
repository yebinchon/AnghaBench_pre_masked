
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,char*,char**) ;

int FUNC_1 (char *VAR_0, char **VAR_1)
{
  char *VAR_2 = ((void*)0);

  char *VAR_3 = FUNC_0 (VAR_0, " ", &VAR_2);

  int VAR_4 = 0;

  do
  {
    VAR_1[VAR_4] = VAR_3;

    VAR_4++;

  } while ((VAR_3 = FUNC_0 ((char *) ((void*)0), " ", &VAR_2)) != ((void*)0));

  return VAR_4;
}
