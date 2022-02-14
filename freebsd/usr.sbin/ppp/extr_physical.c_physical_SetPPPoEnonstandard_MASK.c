
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nonstandard_pppoe; int pppoe_configured; } ;
struct physical {TYPE_1__ cfg; } ;



int
FUNC_0(struct physical *VAR_0, int VAR_1)
{
   VAR_0->cfg.nonstandard_pppoe = VAR_1 ? 1 : 0;
   VAR_0->cfg.pppoe_configured = 1;
   return 1;
}
