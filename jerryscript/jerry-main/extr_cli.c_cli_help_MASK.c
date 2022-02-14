
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ id; char* opt; char* longopt; char* meta; int * help; } ;
typedef TYPE_1__ cli_opt_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char const*,char const*,TYPE_1__ const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,...) ;
 scalar_t__ FUNC_4 (char*) ;

void
FUNC_5 (const char *VAR_3,
          const char *VAR_4,
          const cli_opt_t *VAR_5)
{
  FUNC_0 (VAR_3, VAR_4, VAR_5);

  const cli_opt_t *VAR_6 = VAR_5;

  while (VAR_6->id != VAR_2)
  {
    int VAR_7 = VAR_0;
    FUNC_2 (VAR_0);

    if (VAR_6->opt != ((void*)0))
    {
      FUNC_3 ("-%s", VAR_6->opt);
      VAR_7 += (int) (FUNC_4 (VAR_6->opt) + 1);
    }

    if (VAR_6->opt != ((void*)0) && VAR_6->longopt != ((void*)0))
    {
      FUNC_3 (", ");
      VAR_7 += 2;
    }

    if (VAR_6->longopt != ((void*)0))
    {
      FUNC_3 ("--%s", VAR_6->longopt);
      VAR_7 += (int) (FUNC_4 (VAR_6->longopt) + 2);
    }

    if (VAR_6->meta != ((void*)0))
    {
      FUNC_3 (" %s", VAR_6->meta);
      VAR_7 += 1 + (int) FUNC_4 (VAR_6->meta);
    }

    if (VAR_6->help != ((void*)0))
    {
      if (VAR_7 >= VAR_1)
      {
        FUNC_3 ("\n");
        VAR_7 = 0;
      }
      FUNC_2 (VAR_1 - VAR_7);
      VAR_7 = VAR_1;

      FUNC_1 (VAR_6->help);
    }

    FUNC_3 ("\n");
    VAR_6++;
  }

  if (VAR_6->help != ((void*)0))
  {
    int VAR_8 = 0;

    if (VAR_6->meta != ((void*)0))
    {
      VAR_8 = (int) (VAR_0 + FUNC_4 (VAR_6->meta));

      FUNC_2 (VAR_0);
      FUNC_3 ("%s", VAR_6->meta);
    }

    if (VAR_8 >= VAR_1)
    {
      FUNC_3 ("\n");
      VAR_8 = 0;
    }

    FUNC_2 (VAR_1 - VAR_8);

    FUNC_1 (VAR_6->help);
    FUNC_3 ("\n");
  }
}
