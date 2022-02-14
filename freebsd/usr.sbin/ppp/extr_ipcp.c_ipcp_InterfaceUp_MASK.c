
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* bundle; } ;
struct ipcp {int my_ip; TYPE_2__ fsm; int peer_ip; } ;
struct TYPE_6__ {int name; } ;
struct TYPE_4__ {scalar_t__ NatEnabled; TYPE_3__* iface; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct ipcp*,int ,int ) ;
 int VAR_2 ;
 int FUNC_3 (int ,char*,...) ;

int
FUNC_4(struct ipcp *VAR_3)
{
  if (!FUNC_2(VAR_3, VAR_3->my_ip, VAR_3->peer_ip)) {
    FUNC_3(VAR_1, "ipcp_InterfaceUp: unable to set ip address\n");
    return 0;
  }

  if (!FUNC_1(VAR_3->fsm.bundle->iface->name, VAR_0)) {
    FUNC_3(VAR_1, "ipcp_InterfaceUp: Can't set the IFF_UP flag on %s\n",
               VAR_3->fsm.bundle->iface->name);
    return 0;
  }


  if (VAR_3->fsm.bundle->NatEnabled)
    FUNC_0(VAR_2, VAR_3->my_ip);


  return 1;
}
