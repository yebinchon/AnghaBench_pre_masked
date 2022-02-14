
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int enabled; int fp; } ;
typedef TYPE_1__ potfile_ctx_t ;
struct TYPE_6__ {int potfile_disable; } ;
typedef TYPE_2__ hashconfig_t ;
struct TYPE_7__ {TYPE_1__* potfile_ctx; TYPE_2__* hashconfig; } ;
typedef TYPE_3__ hashcat_ctx_t ;


 int FUNC_0 (int *) ;

void FUNC_1 (hashcat_ctx_t *VAR_0)
{
  hashconfig_t *VAR_1 = VAR_0->hashconfig;
  potfile_ctx_t *VAR_2 = VAR_0->potfile_ctx;

  if (VAR_2->enabled == 0) return;

  if (VAR_1->potfile_disable == 1) return;

  FUNC_0 (&VAR_2->fp);
}
