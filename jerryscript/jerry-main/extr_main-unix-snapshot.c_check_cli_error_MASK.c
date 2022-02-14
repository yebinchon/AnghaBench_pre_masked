
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * error; int * arg; } ;
typedef TYPE_1__ cli_state_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int *,...) ;

__attribute__((used)) static bool
FUNC_1 (const cli_state_t *const VAR_1)
{
  if (VAR_1->error != ((void*)0))
  {
    if (VAR_1->arg != ((void*)0))
    {
      FUNC_0 (VAR_0, "Error: %s %s\n", VAR_1->error, VAR_1->arg);
    }
    else
    {
      FUNC_0 (VAR_0, "Error: %s\n", VAR_1->error);
    }

    return 1;
  }

  return 0;
}
