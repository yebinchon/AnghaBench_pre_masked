
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct cmdargs {int prompt; TYPE_4__* cx; } ;
struct TYPE_8__ {TYPE_3__* physical; } ;
struct TYPE_5__ {int* EscMap; } ;
struct TYPE_6__ {TYPE_1__ cfg; } ;
struct TYPE_7__ {TYPE_2__ async; } ;


 int FUNC_0 (int ,char*,...) ;

__attribute__((used)) static int
FUNC_1(struct cmdargs const *VAR_0)
{
  if (VAR_0->cx->physical->async.cfg.EscMap[32]) {
    int VAR_1, VAR_2;
    const char *VAR_3 = "";

    for (VAR_1 = 0; VAR_1 < 32; VAR_1++)
      if (VAR_0->cx->physical->async.cfg.EscMap[VAR_1])
 for (VAR_2 = 0; VAR_2 < 8; VAR_2++)
   if (VAR_0->cx->physical->async.cfg.EscMap[VAR_1] & (1 << VAR_2)) {
     FUNC_0(VAR_0->prompt, "%s0x%02x", VAR_3, (VAR_1 << 3) + VAR_2);
            VAR_3 = ", ";
          }
    FUNC_0(VAR_0->prompt, "\n");
  }
  return 0;
}
