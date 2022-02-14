
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int dicts_avail; int dicts_cnt; char** dicts; } ;
typedef TYPE_1__ straight_ctx_t ;
struct TYPE_6__ {TYPE_1__* straight_ctx; } ;
typedef TYPE_2__ hashcat_ctx_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,char*,char const*) ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char**,int,int) ;
 char* FUNC_3 (char const*) ;

__attribute__((used)) static int FUNC_4 (hashcat_ctx_t *VAR_1, const char *VAR_2)
{
  if (FUNC_1 (VAR_2) == 1)
  {
    FUNC_0 (VAR_1, "%s: Byte Order Mark (BOM) was detected", VAR_2);

    return -1;
  }

  straight_ctx_t *VAR_3 = VAR_1->straight_ctx;

  if (VAR_3->dicts_avail == VAR_3->dicts_cnt)
  {
    VAR_3->dicts = (char **) FUNC_2 (VAR_3->dicts, VAR_3->dicts_avail * sizeof (char *), VAR_0 * sizeof (char *));

    VAR_3->dicts_avail += VAR_0;
  }

  VAR_3->dicts[VAR_3->dicts_cnt] = FUNC_3 (VAR_2);

  VAR_3->dicts_cnt++;

  return 0;
}
