
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* error; scalar_t__ argc; int ** argv; int * arg; } ;
typedef TYPE_1__ cli_state_t ;


 long FUNC_0 (int *,char**,int) ;

int
FUNC_1 (cli_state_t *VAR_0)
{
  if (VAR_0->error != ((void*)0))
  {
    return 0;
  }

  VAR_0->error = "Expected integer argument";

  if (VAR_0->argc <= 0)
  {
    VAR_0->arg = ((void*)0);
    return 0;
  }

  VAR_0->arg = VAR_0->argv[0];

  char *VAR_1;
  long int VAR_2 = FUNC_0 (VAR_0->arg, &VAR_1, 10);

  if (*VAR_1 != '\0')
  {
    return 0;
  }

  VAR_0->error = ((void*)0);
  VAR_0->argc--;
  VAR_0->argv++;
  return (int) VAR_2;
}
