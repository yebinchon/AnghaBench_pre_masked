
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HCFILE ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (char*,scalar_t__,int *) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,char const*,void*) ;

int FUNC_4 (HCFILE *VAR_1, const char *VAR_2, void *VAR_3)
{
  if (VAR_1 == ((void*)0)) return -1;

  char *VAR_4 = (char *) FUNC_2 (VAR_0);

  if (VAR_4 == ((void*)0)) return -1;

  char *VAR_5 = FUNC_0 (VAR_4, VAR_0 - 1, VAR_1);

  if (VAR_5 == ((void*)0))
  {
    FUNC_1 (VAR_4);

    return -1;
  }

  FUNC_3 (VAR_5, VAR_2, VAR_3);

  FUNC_1 (VAR_4);

  return 1;
}
