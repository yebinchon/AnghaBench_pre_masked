
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ double_decode; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 char* FUNC_3 (char*) ;

__attribute__((used)) static char *
FUNC_4 (char *VAR_1)
{
  char *VAR_2, *VAR_3;

  if ((VAR_1 == ((void*)0)) || (*VAR_1 == '\0'))
    return ((void*)0);

  VAR_2 = VAR_3 = FUNC_3 (VAR_1);
  FUNC_0 (VAR_1, VAR_2);

  if (VAR_0.double_decode)
    FUNC_0 (VAR_3, VAR_2);
  FUNC_1 (VAR_2);

  return FUNC_2 (VAR_2);
}
