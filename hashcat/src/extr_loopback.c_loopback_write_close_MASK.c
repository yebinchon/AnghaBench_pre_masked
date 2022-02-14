
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int * pfp; } ;
struct TYPE_6__ {int enabled; int unused; TYPE_5__ fp; } ;
typedef TYPE_1__ loopback_ctx_t ;
struct TYPE_7__ {TYPE_1__* loopback_ctx; } ;
typedef TYPE_2__ hashcat_ctx_t ;


 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_2__*) ;

void FUNC_2 (hashcat_ctx_t *VAR_0)
{
  loopback_ctx_t *VAR_1 = VAR_0->loopback_ctx;

  if (VAR_1->enabled == 0) return;

  if (VAR_1->fp.pfp == ((void*)0)) return;

  FUNC_0 (&VAR_1->fp);

  if (VAR_1->unused == 1)
  {
    FUNC_1 (VAR_0);
  }
}
