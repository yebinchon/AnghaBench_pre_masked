
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * mask; } ;
typedef TYPE_1__ mask_ctx_t ;
struct TYPE_6__ {int opts_type; } ;
typedef TYPE_2__ hashconfig_t ;
struct TYPE_7__ {TYPE_1__* mask_ctx; TYPE_2__* hashconfig; } ;
typedef TYPE_3__ hashcat_ctx_t ;


 int FUNC_0 (int *,int ) ;

int FUNC_1 (const hashcat_ctx_t *VAR_0)
{
  const hashconfig_t *VAR_1 = VAR_0->hashconfig;
  const mask_ctx_t *VAR_2 = VAR_0->mask_ctx;

  if (VAR_2 == ((void*)0)) return -1;

  if (VAR_2->mask == ((void*)0)) return -1;

  return FUNC_0 (VAR_2->mask, VAR_1->opts_type);
}
