
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ idx; } ;
typedef TYPE_1__ GHolder ;


 char* VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,char**,char**,char*) ;
 scalar_t__ FUNC_2 (int *,int ,char*,char const*,char*,char*) ;
 int FUNC_3 (char*,char*,char const*,char*,char*) ;
 char* FUNC_4 (scalar_t__) ;
 char* FUNC_5 (char const*) ;

char *
FUNC_6 (GHolder * VAR_1)
{
  const char *VAR_2 = VAR_0;
  char *VAR_3 = ((void*)0), *VAR_4 = ((void*)0), *VAR_5 = ((void*)0);

  if (VAR_1->idx == 0 || FUNC_1 (VAR_1, &VAR_4, &VAR_5, "%d/%b/%Y"))
    return FUNC_5 (VAR_2);

  VAR_3 = FUNC_4 (FUNC_2 (((void*)0), 0, "%s (%s - %s)", VAR_2, VAR_4, VAR_5) + 1);
  FUNC_3 (VAR_3, "%s (%s - %s)", VAR_2, VAR_4, VAR_5);

  FUNC_0 (VAR_5);
  FUNC_0 (VAR_4);

  return VAR_3;
}
