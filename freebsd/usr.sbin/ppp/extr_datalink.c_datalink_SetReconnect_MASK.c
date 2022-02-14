
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct cmdargs {int argc; int argn; int * argv; TYPE_3__* cx; } ;
struct TYPE_4__ {void* max; void* timeout; } ;
struct TYPE_5__ {TYPE_1__ reconnect; } ;
struct TYPE_6__ {TYPE_2__ cfg; } ;


 void* FUNC_0 (int ) ;

int
FUNC_1(struct cmdargs const *VAR_0)
{
  if (VAR_0->argc == VAR_0->argn+2) {
    VAR_0->cx->cfg.reconnect.timeout = FUNC_0(VAR_0->argv[VAR_0->argn]);
    VAR_0->cx->cfg.reconnect.max = FUNC_0(VAR_0->argv[VAR_0->argn+1]);
    return 0;
  }
  return -1;
}
