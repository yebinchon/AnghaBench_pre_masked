
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* error; scalar_t__ argc; char const* arg; char** argv; TYPE_2__* opts; } ;
typedef TYPE_1__ cli_state_t ;
struct TYPE_5__ {int id; int * opt; int * longopt; } ;
typedef TYPE_2__ cli_opt_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,int *) ;

int
FUNC_1 (cli_state_t *VAR_2)
{
  if (VAR_2->error != ((void*)0))
  {
    return VAR_1;
  }

  if (VAR_2->argc <= 0)
  {
    VAR_2->arg = ((void*)0);
    return VAR_1;
  }

  const char *VAR_3 = VAR_2->argv[0];

  VAR_2->arg = VAR_3;

  if (VAR_3[0] != '-')
  {
    return VAR_0;
  }

  if (VAR_3[1] == '-')
  {
    VAR_3 += 2;

    for (const cli_opt_t *VAR_4 = VAR_2->opts; VAR_4->id != VAR_0; VAR_4++)
    {
      if (VAR_4->longopt != ((void*)0) && FUNC_0 (VAR_3, VAR_4->longopt) == 0)
      {
        VAR_2->argc--;
        VAR_2->argv++;
        return VAR_4->id;
      }
    }

    VAR_2->error = "Unknown long option";
    return VAR_1;
  }

  VAR_3++;

  for (const cli_opt_t *VAR_5 = VAR_2->opts; VAR_5->id != VAR_0; VAR_5++)
  {
    if (VAR_5->opt != ((void*)0) && FUNC_0 (VAR_3, VAR_5->opt) == 0)
    {
      VAR_2->argc--;
      VAR_2->argv++;
      return VAR_5->id;
    }
  }

  VAR_2->error = "Unknown option";
  return VAR_1;
}
