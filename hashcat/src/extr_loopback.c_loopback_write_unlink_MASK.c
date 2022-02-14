
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int enabled; int * filename; } ;
typedef TYPE_1__ loopback_ctx_t ;
struct TYPE_5__ {TYPE_1__* loopback_ctx; } ;
typedef TYPE_2__ hashcat_ctx_t ;


 int FUNC_0 (int *) ;

void FUNC_1 (hashcat_ctx_t *VAR_0)
{
  loopback_ctx_t *VAR_1 = VAR_0->loopback_ctx;

  if (VAR_1->enabled == 0) return;

  if (VAR_1->filename == ((void*)0)) return;

  FUNC_0 (VAR_1->filename);
}
