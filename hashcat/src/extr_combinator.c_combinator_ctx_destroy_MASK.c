
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* combinator_ctx; } ;
typedef TYPE_1__ hashcat_ctx_t ;
struct TYPE_6__ {int enabled; } ;
typedef TYPE_2__ combinator_ctx_t ;


 int FUNC_0 (TYPE_2__*,int ,int) ;

void FUNC_1 (hashcat_ctx_t *VAR_0)
{
  combinator_ctx_t *VAR_1 = VAR_0->combinator_ctx;

  if (VAR_1->enabled == 0) return;

  FUNC_0 (VAR_1, 0, sizeof (combinator_ctx_t));
}
