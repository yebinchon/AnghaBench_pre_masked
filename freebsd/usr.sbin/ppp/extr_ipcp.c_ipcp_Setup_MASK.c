
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef scalar_t__ u_int32_t ;
struct ncpaddr {int dummy; } ;
struct TYPE_13__ {TYPE_12__* dns; } ;
struct TYPE_23__ {int slots; scalar_t__ slotcomp; int neg; } ;
struct in_addr {int dummy; } ;
struct TYPE_17__ {scalar_t__ s_addr; } ;
struct TYPE_14__ {TYPE_10__ ns; TYPE_8__ vj; int my_range; struct in_addr TriggerAddress; scalar_t__ HaveTriggerAddress; int peer_range; int peer_list; TYPE_2__ netmask; } ;
struct TYPE_24__ {int dns; } ;
struct TYPE_22__ {int cslc; } ;
struct TYPE_21__ {TYPE_5__* bundle; scalar_t__ open_mode; } ;
struct TYPE_16__ {scalar_t__ s_addr; } ;
struct ipcp {TYPE_11__ cfg; TYPE_9__ ns; scalar_t__ my_reject; scalar_t__ peer_reject; TYPE_7__ vj; scalar_t__ my_compproto; TYPE_6__ fsm; struct in_addr my_ip; scalar_t__ peer_compproto; struct in_addr peer_ip; scalar_t__ peer_req; scalar_t__ heis1172; TYPE_1__ ifmask; } ;
struct iface {unsigned int addrs; TYPE_3__* addr; } ;
struct TYPE_19__ {scalar_t__ vj; scalar_t__ valid; } ;
struct TYPE_20__ {TYPE_4__ radius; struct iface* iface; } ;
struct TYPE_18__ {int ifa; struct ncpaddr peer; } ;
struct TYPE_15__ {scalar_t__ s_addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct in_addr) ;
 int FUNC_2 (int *,struct in_addr) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (int ,TYPE_12__*,int) ;
 int FUNC_8 (struct ncpaddr*,struct in_addr*) ;
 int FUNC_9 (struct ncpaddr*,int ) ;
 scalar_t__ FUNC_10 (int *,struct ncpaddr*) ;
 int FUNC_11 (int *,struct ncpaddr*) ;
 int FUNC_12 (int *,struct in_addr*) ;
 int FUNC_13 (int *,struct ncpaddr*) ;
 int FUNC_14 (int *,int) ;

void
FUNC_15(struct ipcp *VAR_3, u_int32_t VAR_4)
{
  struct iface *VAR_5 = VAR_3->fsm.bundle->iface;
  struct ncpaddr VAR_6;
  struct in_addr VAR_7;
  int VAR_8;
  unsigned VAR_9;

  VAR_3->fsm.open_mode = 0;
  VAR_3->ifmask.s_addr = VAR_4 == VAR_0 ? VAR_3->cfg.netmask.s_addr : VAR_4;

  if (FUNC_3(&VAR_3->cfg.peer_list)) {

    for (VAR_9 = 0; VAR_9 < VAR_5->addrs; VAR_9++) {
      if (!FUNC_8(&VAR_5->addr[VAR_9].peer, &VAR_7))
        continue;
      if ((VAR_8 = FUNC_2(&VAR_3->cfg.peer_list, VAR_7)) != -1) {
        FUNC_9(&VAR_6, FUNC_4(&VAR_3->cfg.peer_list, VAR_8));
        break;
      }
    }
    if (VAR_9 == VAR_5->addrs)

      FUNC_9(&VAR_6, FUNC_5(&VAR_3->cfg.peer_list));

    FUNC_13(&VAR_3->cfg.peer_range, &VAR_6);
  }

  VAR_3->heis1172 = 0;
  VAR_3->peer_req = 0;
  FUNC_12(&VAR_3->cfg.peer_range, &VAR_3->peer_ip);
  VAR_3->peer_compproto = 0;

  if (VAR_3->cfg.HaveTriggerAddress) {





    VAR_3->my_ip = VAR_3->cfg.TriggerAddress;
    FUNC_6(VAR_1, "Using trigger address %s\n",
              FUNC_1(VAR_3->cfg.TriggerAddress));
  } else {






    for (VAR_9 = 0; VAR_9 < VAR_5->addrs; VAR_9++) {
      FUNC_11(&VAR_5->addr[VAR_9].ifa, &VAR_6);
      if (FUNC_10(&VAR_3->cfg.my_range, &VAR_6)) {
        FUNC_8(&VAR_6, &VAR_3->my_ip);
        break;
      }
    }
    if (VAR_9 == VAR_5->addrs)
      FUNC_12(&VAR_3->cfg.my_range, &VAR_3->my_ip);
  }

  if (FUNC_0(VAR_3->cfg.vj.neg)

      || (VAR_3->fsm.bundle->radius.valid && VAR_3->fsm.bundle->radius.vj)

     )
    VAR_3->my_compproto = (VAR_2 << 16) +
                         ((VAR_3->cfg.vj.slots - 1) << 8) +
                         VAR_3->cfg.vj.slotcomp;
  else
    VAR_3->my_compproto = 0;
  FUNC_14(&VAR_3->vj.cslc, VAR_3->cfg.vj.slots - 1);

  VAR_3->peer_reject = 0;
  VAR_3->my_reject = 0;


  if (VAR_3->cfg.ns.dns[0].s_addr != VAR_0)
    FUNC_7(VAR_3->ns.dns, VAR_3->cfg.ns.dns, sizeof VAR_3->ns.dns);
}
