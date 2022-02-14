
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_8__ {int dictstat_disable; } ;
typedef TYPE_1__ hashconfig_t ;
struct TYPE_9__ {TYPE_4__* dictstat_ctx; TYPE_1__* hashconfig; } ;
typedef TYPE_2__ hashcat_ctx_t ;
struct TYPE_10__ {int cnt; } ;
typedef TYPE_3__ dictstat_t ;
struct TYPE_11__ {int enabled; int cnt; int base; } ;
typedef TYPE_4__ dictstat_ctx_t ;


 scalar_t__ FUNC_0 (TYPE_3__*,int ,int *,int,int ) ;
 int VAR_0 ;

u64 FUNC_1 (hashcat_ctx_t *VAR_1, dictstat_t *VAR_2)
{
  hashconfig_t *VAR_3 = VAR_1->hashconfig;
  dictstat_ctx_t *VAR_4 = VAR_1->dictstat_ctx;

  if (VAR_4->enabled == 0) return 0;

  if (VAR_3->dictstat_disable == 1) return 0;

  dictstat_t *VAR_5 = (dictstat_t *) FUNC_0 (VAR_2, VAR_4->base, &VAR_4->cnt, sizeof (dictstat_t), VAR_0);

  if (VAR_5 == ((void*)0)) return 0;

  return VAR_5->cnt;
}
