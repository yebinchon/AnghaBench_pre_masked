
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int benchmark_all; } ;
typedef TYPE_1__ user_options_t ;
struct TYPE_5__ {TYPE_1__* user_options; int * folder_config; } ;
typedef TYPE_2__ hashcat_ctx_t ;
typedef int folder_config_t ;


 int* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int const*,int,char*,int ) ;

int FUNC_4 (hashcat_ctx_t *VAR_3)
{
  const folder_config_t *VAR_4 = VAR_3->folder_config;
  const user_options_t *VAR_5 = VAR_3->user_options;

  static int VAR_6 = 0;

  if (VAR_5->benchmark_all == 0)
  {
    const int VAR_7 = VAR_0[VAR_6];

    if (VAR_7 == -1) return -1;

    VAR_6++;

    return VAR_7;
  }

  char *VAR_8 = (char *) FUNC_2 (VAR_1);

  for (int VAR_9 = VAR_6; VAR_9 < VAR_2; VAR_9++)
  {
    FUNC_3 (VAR_4, VAR_9, VAR_8, VAR_1);

    if (FUNC_0 (VAR_8) == 1)
    {
      const int VAR_10 = VAR_9;

      VAR_6 = VAR_10 + 1;

      FUNC_1 (VAR_8);

      return VAR_10;
    }
  }

  FUNC_1 (VAR_8);

  return -1;
}
