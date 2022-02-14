
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int wordlist_autohex_disable; } ;
typedef TYPE_1__ user_options_t ;
typedef int u8 ;
struct TYPE_6__ {int opts_type; } ;
typedef TYPE_2__ hashconfig_t ;
struct TYPE_7__ {TYPE_1__* user_options; TYPE_2__* hashconfig; } ;
typedef TYPE_3__ hashcat_ctx_t ;


 int VAR_0 ;
 size_t FUNC_0 (int const*,size_t const,int *,size_t const) ;
 char FUNC_1 (int const*) ;
 int FUNC_2 (int const*,size_t const) ;
 int FUNC_3 (char*,int ,size_t const) ;

size_t FUNC_4 (hashcat_ctx_t *VAR_1, char *VAR_2, const size_t VAR_3)
{
  const hashconfig_t *VAR_4 = VAR_1->hashconfig;
  const user_options_t *VAR_5 = VAR_1->user_options;

  if (VAR_3 & 1) return (VAR_3);

  if (VAR_4->opts_type & VAR_0)
  {
    size_t VAR_6, VAR_7;

    for (VAR_6 = 0, VAR_7 = 0; VAR_7 < VAR_3; VAR_6 += 1, VAR_7 += 2)
    {
      VAR_2[VAR_6] = FUNC_1 ((const u8 *) &VAR_2[VAR_7]);
    }

    FUNC_3 (VAR_2 + VAR_6, 0, VAR_3 - VAR_6);

    return (VAR_6);
  }

  if (VAR_5->wordlist_autohex_disable == 0)
  {
    if (FUNC_2 ((const u8 *) VAR_2, VAR_3) == 1)
    {
      const size_t VAR_8 = FUNC_0 ((const u8 *) VAR_2, VAR_3, (u8 *) VAR_2, VAR_3);

      return VAR_8;
    }
  }

  return (VAR_3);
}
