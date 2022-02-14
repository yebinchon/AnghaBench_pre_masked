
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ id; char* opt; char* longopt; char* meta; } ;
typedef TYPE_1__ cli_opt_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (char const*) ;

__attribute__((used)) static void
FUNC_3 (const char *VAR_3,
               const char *VAR_4,
               const cli_opt_t *VAR_5)
{
  int VAR_6 = (int) FUNC_2 (VAR_3);
  const cli_opt_t *VAR_7 = VAR_5;

  FUNC_1 ("%s", VAR_3);

  if (VAR_4 != ((void*)0))
  {
    int VAR_8 = (int) FUNC_2 (VAR_4);

    if (VAR_6 + 1 + VAR_8 > VAR_1)
    {
      VAR_6 = VAR_0 - 1;
      FUNC_1 ("\n");
      FUNC_0 (VAR_6);
    }

    FUNC_1 (" %s", VAR_4);
  }

  while (VAR_7->id != VAR_2)
  {
    const char *VAR_9 = VAR_7->opt;
    int VAR_10 = 2 + 1;

    if (VAR_9 == ((void*)0))
    {
      VAR_9 = VAR_7->longopt;
      VAR_10++;
    }

    VAR_10 += (int) FUNC_2 (VAR_9);

    if (VAR_6 + 1 + VAR_10 >= VAR_1)
    {
      VAR_6 = VAR_0 - 1;
      FUNC_1 ("\n");
      FUNC_0 (VAR_6);
    }
    VAR_6 += VAR_10;

    FUNC_1 (" [");

    if (VAR_7->opt != ((void*)0))
    {
      FUNC_1 ("-%s", VAR_9);
    }
    else
    {
      FUNC_1 ("--%s", VAR_9);
    }

    if (VAR_7->meta != ((void*)0))
    {
      FUNC_1 (" %s", VAR_7->meta);
    }

    FUNC_1 ("]");

    VAR_7++;
  }

  if (VAR_7->meta != ((void*)0))
  {
    const char *VAR_11 = VAR_7->meta;
    int VAR_12 = (int) (2 + FUNC_2 (VAR_11));

    if (VAR_6 + 1 + VAR_12 >= VAR_1)
    {
      VAR_6 = VAR_0 - 1;
      FUNC_1 ("\n");
      FUNC_0 (VAR_6);
    }

    FUNC_1 (" [%s]", VAR_11);
  }

  FUNC_1 ("\n\n");
}
