
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {char* error; } ;
typedef TYPE_1__ cli_state_t ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 char* FUNC_2 (TYPE_1__*) ;
 TYPE_1__ FUNC_3 (int ,int,char**) ;
 int FUNC_4 (int ,char*,char const*) ;
 int VAR_4 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_1__*,int,char*) ;
 int FUNC_7 (TYPE_1__*,int,char*) ;
 int FUNC_8 (TYPE_1__*,int,char*) ;
 int FUNC_9 (char*,char const*) ;

int
FUNC_10 (int VAR_5,
      char **VAR_6)
{
  cli_state_t VAR_7 = FUNC_3 (VAR_4, VAR_5 - 1, VAR_6 + 1);

  for (int VAR_8 = FUNC_1 (&VAR_7); VAR_8 != VAR_0; VAR_8 = FUNC_1 (&VAR_7))
  {
    switch (VAR_8)
    {
      case 128:
      {

        break;
      }
      case 129:
      {
        const char *VAR_9 = FUNC_2 (&VAR_7);

        if (VAR_7.error != ((void*)0))
        {
          break;
        }

        if (!FUNC_9 ("merge", VAR_9))
        {
          return FUNC_8 (&VAR_7, VAR_5, VAR_6[0]);
        }
        else if (!FUNC_9 ("litdump", VAR_9))
        {
          return FUNC_7 (&VAR_7, VAR_5, VAR_6[0]);
        }
        else if (!FUNC_9 ("generate", VAR_9))
        {
          return FUNC_6 (&VAR_7, VAR_5, VAR_6[0]);
        }

        FUNC_4 (VAR_1, "Error: unknown command: %s\n\n", VAR_9);
        FUNC_5 (VAR_6[0]);

        return VAR_2;
      }
      default:
      {
        VAR_7.error = "Internal error";
        break;
      }
    }
  }

  if (FUNC_0 (&VAR_7))
  {
    return VAR_2;
  }

  FUNC_5 (VAR_6[0]);
  return VAR_3;
}
