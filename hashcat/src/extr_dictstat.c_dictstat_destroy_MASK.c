
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
struct TYPE_8__ {int enabled; int base; int filename; } ;
typedef TYPE_3__ dictstat_ctx_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*,int ,int) ;

void FUNC_2 (hashcat_ctx_t *VAR_0)
{
  hashconfig_t *VAR_1 = VAR_0->hashconfig;
  dictstat_ctx_t *VAR_2 = VAR_0->dictstat_ctx;

  if (VAR_2->enabled == 0) return;

  if (VAR_1->dictstat_disable == 1) return;

  FUNC_0 (VAR_2->filename);
  FUNC_0 (VAR_2->base);

  FUNC_1 (VAR_2, 0, sizeof (dictstat_ctx_t));
}
