
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int dictstat_disable; } ;
typedef TYPE_1__ hashconfig_t ;
struct TYPE_7__ {TYPE_3__* dictstat_ctx; TYPE_1__* hashconfig; } ;
typedef TYPE_2__ hashcat_ctx_t ;
typedef int dictstat_t ;
struct TYPE_8__ {int enabled; scalar_t__ cnt; int base; int filename; } ;
typedef TYPE_3__ dictstat_ctx_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,char*,int ) ;
 int FUNC_1 (int *,int ,scalar_t__*,int,int ) ;
 int VAR_1 ;

void FUNC_2 (hashcat_ctx_t *VAR_2, dictstat_t *VAR_3)
{
  hashconfig_t *VAR_4 = VAR_2->hashconfig;
  dictstat_ctx_t *VAR_5 = VAR_2->dictstat_ctx;

  if (VAR_5->enabled == 0) return;

  if (VAR_4->dictstat_disable == 1) return;

  if (VAR_5->cnt == VAR_0)
  {
    FUNC_0 (VAR_2, "There are too many entries in the %s database. You have to remove/rename it.", VAR_5->filename);

    return;
  }

  FUNC_1 (VAR_3, VAR_5->base, &VAR_5->cnt, sizeof (dictstat_t), VAR_1);
}
