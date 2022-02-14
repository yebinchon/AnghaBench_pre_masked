
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct cmdargs {int argc; int argn; TYPE_3__* bundle; int * argv; } ;
struct TYPE_7__ {int writable; } ;
struct TYPE_10__ {TYPE_1__ ns; } ;
struct TYPE_8__ {TYPE_4__ ipcp; } ;
struct TYPE_9__ {TYPE_2__ ncp; } ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int
FUNC_4(struct cmdargs const *VAR_0)
{
  if (VAR_0->argc == VAR_0->argn + 1) {
    if (!FUNC_3(VAR_0->argv[VAR_0->argn], "reload"))
      FUNC_0(&VAR_0->bundle->ncp.ipcp);
    else if (!FUNC_3(VAR_0->argv[VAR_0->argn], "restore"))
      FUNC_1(&VAR_0->bundle->ncp.ipcp);
    else if (!FUNC_3(VAR_0->argv[VAR_0->argn], "rewrite"))
      FUNC_2(&VAR_0->bundle->ncp.ipcp);
    else if (!FUNC_3(VAR_0->argv[VAR_0->argn], "readonly"))
      VAR_0->bundle->ncp.ipcp.ns.writable = 0;
    else if (!FUNC_3(VAR_0->argv[VAR_0->argn], "writable"))
      VAR_0->bundle->ncp.ipcp.ns.writable = 1;
    else
      return -1;

    return 0;
  }

  return -1;
}
