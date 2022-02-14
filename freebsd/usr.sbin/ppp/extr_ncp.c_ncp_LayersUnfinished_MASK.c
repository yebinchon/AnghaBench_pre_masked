
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ state; } ;
struct TYPE_8__ {TYPE_3__ fsm; } ;
struct TYPE_5__ {scalar_t__ state; } ;
struct TYPE_6__ {TYPE_1__ fsm; } ;
struct ncp {TYPE_4__ ipv6cp; TYPE_2__ ipcp; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

int
FUNC_0(struct ncp *VAR_2)
{
  int VAR_3 = 0;

  if (VAR_2->ipcp.fsm.state > VAR_0 ||
      VAR_2->ipcp.fsm.state == VAR_1)
    VAR_3++;


  if (VAR_2->ipv6cp.fsm.state > VAR_0 ||
      VAR_2->ipv6cp.fsm.state == VAR_1)
    VAR_3++;


  return VAR_3;
}
