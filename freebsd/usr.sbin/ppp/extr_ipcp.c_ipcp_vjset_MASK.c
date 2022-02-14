
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct cmdargs {int argc; int argn; TYPE_5__* bundle; int * argv; } ;
struct TYPE_6__ {int slots; int slotcomp; } ;
struct TYPE_7__ {TYPE_1__ vj; } ;
struct TYPE_8__ {TYPE_2__ cfg; } ;
struct TYPE_9__ {TYPE_3__ ipcp; } ;
struct TYPE_10__ {TYPE_4__ ncp; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;

int
FUNC_2(struct cmdargs const *VAR_0)
{
  if (VAR_0->argc != VAR_0->argn+2)
    return -1;
  if (!FUNC_1(VAR_0->argv[VAR_0->argn], "slots")) {
    int VAR_1;

    VAR_1 = FUNC_0(VAR_0->argv[VAR_0->argn+1]);
    if (VAR_1 < 4 || VAR_1 > 16)
      return 1;
    VAR_0->bundle->ncp.ipcp.cfg.vj.slots = VAR_1;
    return 0;
  } else if (!FUNC_1(VAR_0->argv[VAR_0->argn], "slotcomp")) {
    if (!FUNC_1(VAR_0->argv[VAR_0->argn+1], "on"))
      VAR_0->bundle->ncp.ipcp.cfg.vj.slotcomp = 1;
    else if (!FUNC_1(VAR_0->argv[VAR_0->argn+1], "off"))
      VAR_0->bundle->ncp.ipcp.cfg.vj.slotcomp = 0;
    else
      return 2;
    return 0;
  }
  return -1;
}
