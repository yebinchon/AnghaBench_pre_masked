
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct ncpaddr {int dummy; } ;
struct in_addr {scalar_t__ s_addr; } ;
struct cmdargs {int argc; int argn; scalar_t__ prompt; TYPE_5__* cmd; TYPE_4__* bundle; int * argv; } ;
struct TYPE_8__ {scalar_t__ s_addr; } ;
struct TYPE_7__ {scalar_t__ state; } ;
struct TYPE_9__ {TYPE_2__ my_ip; TYPE_1__ fsm; } ;
struct TYPE_12__ {TYPE_3__ ipcp; } ;
struct TYPE_11__ {scalar_t__ args; } ;
struct TYPE_10__ {TYPE_6__ ncp; int iface; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,TYPE_6__*,struct ncpaddr*) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (struct ncpaddr*,int *,int ) ;
 scalar_t__ FUNC_3 (struct ncpaddr*,struct in_addr*) ;
 int FUNC_4 (struct ncpaddr*) ;
 int FUNC_5 (scalar_t__,char*,int ) ;

__attribute__((used)) static int
FUNC_6(struct cmdargs const *VAR_2)
{
  struct ncpaddr VAR_3;
  struct in_addr VAR_4;
  int VAR_5;

  if (VAR_2->argc != VAR_2->argn + 1)
    return -1;

  if (!FUNC_2(&VAR_3, ((void*)0), VAR_2->argv[VAR_2->argn]))
    return -1;

  if (VAR_2->bundle->ncp.ipcp.fsm.state == VAR_1 &&
      FUNC_3(&VAR_3, &VAR_4) &&
      VAR_2->bundle->ncp.ipcp.my_ip.s_addr == VAR_4) {
    FUNC_1(VAR_0, "%s: Cannot remove active interface address\n",
               FUNC_4(&VAR_3));
    return 1;
  }

  VAR_5 = FUNC_0(VAR_2->bundle->iface, &VAR_2->bundle->ncp, &VAR_3);
  if (!VAR_5) {
    if (VAR_2->cmd->args)
      VAR_5 = 1;
    else if (VAR_2->prompt)
      FUNC_5(VAR_2->prompt, "%s: No such interface address\n",
                    FUNC_4(&VAR_3));
    else
      FUNC_1(VAR_0, "%s: No such interface address\n",
                 FUNC_4(&VAR_3));
  }

  return !VAR_5;
}
