
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ rp_files_cnt; char** rp_files; } ;
typedef TYPE_1__ user_options_t ;
typedef int u32 ;
struct TYPE_5__ {TYPE_1__* user_options; } ;
typedef TYPE_2__ hashcat_ctx_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char*,scalar_t__,char*,char*) ;

__attribute__((used)) static char *FUNC_2 (const hashcat_ctx_t *VAR_1)
{
  const user_options_t *VAR_2 = VAR_1->user_options;

  if (VAR_2->rp_files_cnt > 0)
  {
    char *VAR_3 = (char *) FUNC_0 (VAR_0);

    int VAR_4 = 0;

    u32 VAR_5;

    for (VAR_5 = 0; VAR_5 < VAR_2->rp_files_cnt - 1; VAR_5++)
    {
      VAR_4 += FUNC_1 (VAR_3 + VAR_4, VAR_0 - VAR_4, "%s, ", VAR_2->rp_files[VAR_5]);
    }

    VAR_4 += FUNC_1 (VAR_3 + VAR_4, VAR_0 - VAR_4, "%s", VAR_2->rp_files[VAR_5]);

    VAR_3[VAR_4] = 0;

    return VAR_3;
  }

  return ((void*)0);
}
