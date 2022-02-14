
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct cmdargs {int argc; int argn; char** argv; TYPE_4__* cx; } ;
struct TYPE_8__ {TYPE_3__* physical; } ;
struct TYPE_5__ {int* EscMap; } ;
struct TYPE_6__ {TYPE_1__ cfg; } ;
struct TYPE_7__ {TYPE_2__ async; } ;


 int FUNC_0 (int ,char*,int*) ;

__attribute__((used)) static int
FUNC_1(struct cmdargs const *VAR_0)
{
  int VAR_1;
  int VAR_2 = VAR_0->argc - VAR_0->argn;
  char const *const *VAR_3 = VAR_0->argv + VAR_0->argn;

  for (VAR_1 = 0; VAR_1 < 33; VAR_1++)
    VAR_0->cx->physical->async.cfg.EscMap[VAR_1] = 0;

  while (VAR_2-- > 0) {
    FUNC_0(*VAR_3++, "%x", &VAR_1);
    VAR_1 &= 0xff;
    VAR_0->cx->physical->async.cfg.EscMap[VAR_1 >> 3] |= (1 << (VAR_1 & 7));
    VAR_0->cx->physical->async.cfg.EscMap[32] = 1;
  }
  return 0;
}
