
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct cmdargs {int argc; int argn; TYPE_4__* bundle; int * argv; } ;
struct TYPE_6__ {scalar_t__ state; } ;
struct TYPE_7__ {TYPE_1__ fsm; } ;
struct TYPE_10__ {TYPE_2__ ipcp; } ;
struct TYPE_8__ {int all; } ;
struct TYPE_9__ {TYPE_5__ ncp; int iface; TYPE_3__ phys_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,TYPE_5__*,int,int) ;
 scalar_t__ FUNC_1 (int ,char*) ;

__attribute__((used)) static int
FUNC_2(struct cmdargs const *VAR_6)
{
  int VAR_7, VAR_8;

  VAR_7 = 0;
  if (VAR_6->argc == VAR_6->argn + 1) {
    if (FUNC_1(VAR_6->argv[VAR_6->argn], "inet") == 0)
      VAR_7 = VAR_0;

    else if (FUNC_1(VAR_6->argv[VAR_6->argn], "inet6") == 0)
      VAR_7 = VAR_1;

    else
      return -1;
  } else if (VAR_6->argc != VAR_6->argn)
    return -1;

  VAR_8 = VAR_6->bundle->ncp.ipcp.fsm.state == VAR_5 ||
        VAR_6->bundle->phys_type.all & VAR_4 ?
        VAR_2 : VAR_3;
  FUNC_0(VAR_6->bundle->iface, &VAR_6->bundle->ncp, VAR_7, VAR_8);

  return 0;
}
