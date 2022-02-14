
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int increment; scalar_t__ increment_min; scalar_t__ increment_max; scalar_t__ attack_mode; } ;
typedef TYPE_1__ user_options_t ;
typedef scalar_t__ u32 ;
struct TYPE_8__ {scalar_t__ pw_min; scalar_t__ pw_max; int opts_type; } ;
typedef TYPE_2__ hashconfig_t ;
struct TYPE_9__ {TYPE_1__* user_options; TYPE_2__* hashconfig; } ;
typedef TYPE_3__ hashcat_ctx_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__ const) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__ const) ;
 int FUNC_2 (char**,char*,char const*,char const*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (TYPE_3__*,char const*) ;
 scalar_t__ FUNC_6 (char const*,int ) ;
 int FUNC_7 (TYPE_3__*,char const*,int ,scalar_t__,char*) ;
 int FUNC_8 (char*,int,char*,char const*) ;
 int FUNC_9 (char const*) ;

__attribute__((used)) static int FUNC_10 (hashcat_ctx_t *VAR_1, const char *VAR_2, const char *VAR_3)
{
  hashconfig_t *VAR_4 = VAR_1->hashconfig;
  user_options_t *VAR_5 = VAR_1->user_options;

  if (VAR_5->increment == 1)
  {
    const u32 VAR_6 = FUNC_6 (VAR_2, VAR_4->opts_type);

    u32 VAR_7 = VAR_5->increment_min;
    u32 VAR_8 = VAR_5->increment_max;

    VAR_8 = FUNC_1 (VAR_8, VAR_6);

    if (VAR_5->attack_mode == VAR_0)
    {
      const u32 VAR_9 = VAR_4->pw_min;
      const u32 VAR_10 = VAR_4->pw_max;

      VAR_7 = FUNC_0 (VAR_7, VAR_9);
      VAR_8 = FUNC_1 (VAR_8, VAR_10);
    }

    for (u32 VAR_11 = VAR_7; VAR_11 <= VAR_8; VAR_11++)
    {
      char *VAR_12 = (char *) FUNC_4 (256);

      char *VAR_13 = VAR_12;

      if (VAR_3)
      {


        VAR_13 += FUNC_8 (VAR_12, 256, "%s,", VAR_3);
      }

      if (FUNC_7 (VAR_1, VAR_2, FUNC_9 (VAR_2), VAR_11, VAR_13) == -1)
      {
        FUNC_3 (VAR_12);

        break;
      }

      const int VAR_14 = FUNC_5 (VAR_1, VAR_12);

      FUNC_3 (VAR_12);

      if (VAR_14 == -1) return -1;
    }
  }
  else
  {
    if (VAR_3)
    {


      char *VAR_15 = ((void*)0);

      FUNC_2 (&VAR_15, "%s,%s", VAR_3, VAR_2);

      const int VAR_16 = FUNC_5 (VAR_1, VAR_15);

      FUNC_3 (VAR_15);

      if (VAR_16 == -1) return -1;
    }
    else
    {
      if (FUNC_5 (VAR_1, VAR_2) == -1) return -1;
    }
  }

  return 0;
}
