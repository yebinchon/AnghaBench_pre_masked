
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* bundle; } ;
struct ipv6cp {TYPE_3__ fsm; int his_ifid; int my_ifid; } ;
struct TYPE_5__ {TYPE_1__* iface; } ;
struct TYPE_4__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct ipv6cp*,int ,int ) ;
 int FUNC_2 (int ,char*,...) ;

int
FUNC_3(struct ipv6cp *VAR_2)
{
  if (!FUNC_1(VAR_2, VAR_2->my_ifid, VAR_2->his_ifid)) {
    FUNC_2(VAR_1, "ipv6cp_InterfaceUp: unable to set ipv6 address\n");
    return 0;
  }

  if (!FUNC_0(VAR_2->fsm.bundle->iface->name, VAR_0)) {
    FUNC_2(VAR_1, "ipv6cp_InterfaceUp: Can't set the IFF_UP"
               " flag on %s\n", VAR_2->fsm.bundle->iface->name);
    return 0;
  }

  return 1;
}
