
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ state; } ;
struct TYPE_5__ {TYPE_3__ fsm; } ;
struct TYPE_4__ {TYPE_3__ fsm; } ;
struct ncp {TYPE_2__ ipv6cp; TYPE_1__ ipcp; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;

void
FUNC_1(struct ncp *VAR_2)
{
  if (VAR_2->ipcp.fsm.state > VAR_0 ||
      VAR_2->ipcp.fsm.state == VAR_1)
    FUNC_0(&VAR_2->ipcp.fsm);


  if (VAR_2->ipv6cp.fsm.state > VAR_0 ||
      VAR_2->ipv6cp.fsm.state == VAR_1)
    FUNC_0(&VAR_2->ipv6cp.fsm);

}
