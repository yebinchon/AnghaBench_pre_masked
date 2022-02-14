
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ runtime; } ;
typedef TYPE_1__ user_options_t ;
typedef int time_t ;
struct tm {int dummy; } ;
struct TYPE_7__ {TYPE_1__* user_options; } ;
typedef TYPE_2__ hashcat_ctx_t ;


 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tm*,char*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_2__ const*) ;
 struct tm* FUNC_3 (int*,struct tm*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (char*,int ,char*,char*,...) ;
 int FUNC_6 (TYPE_2__ const*) ;
 char* FUNC_7 (char*) ;

char *FUNC_8 (const hashcat_ctx_t *VAR_2)
{
  const user_options_t *VAR_3 = VAR_2->user_options;

  char *VAR_4 = (char *) FUNC_4 (VAR_1);

  time_t VAR_5 = FUNC_6 (VAR_2);

  struct tm *VAR_6;
  struct tm VAR_7;

  VAR_6 = FUNC_3 (&VAR_5, &VAR_7);

  if (VAR_6 == ((void*)0))
  {
    FUNC_5 (VAR_4, VAR_1, "%s", VAR_0);
  }
  else
  {
    FUNC_0 (VAR_6, VAR_4, VAR_1);
  }

  if (VAR_3->runtime > 0)
  {
    const int VAR_8 = FUNC_2 (VAR_2);

    char *VAR_9 = FUNC_7 (VAR_4);

    if (VAR_8 > 0)
    {
      time_t VAR_10 = VAR_8;

      struct tm *VAR_11;
      struct tm VAR_12;

      VAR_11 = FUNC_3 (&VAR_10, &VAR_12);

      char *VAR_13 = (char *) FUNC_4 (VAR_1);

      FUNC_0 (VAR_11, VAR_13, VAR_1);

      FUNC_5 (VAR_4, VAR_1, "%s; Runtime limited: %s", VAR_9, VAR_13);

      FUNC_1 (VAR_13);
    }
    else
    {
      FUNC_5 (VAR_4, VAR_1, "%s; Runtime limit exceeded", VAR_9);
    }

    FUNC_1 (VAR_9);
  }

  return VAR_4;
}
