
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_18__ {TYPE_10__* nbns; int dns_neg; TYPE_10__* dns; } ;
struct TYPE_20__ {char* src; } ;
struct TYPE_16__ {scalar_t__ slotcomp; int slots; int neg; } ;
struct TYPE_11__ {scalar_t__ s_addr; } ;
struct TYPE_15__ {int maxreq; int maxtrm; int timeout; } ;
struct TYPE_19__ {TYPE_7__ ns; int peer_range; TYPE_9__ peer_list; TYPE_5__ vj; TYPE_10__ TriggerAddress; scalar_t__ HaveTriggerAddress; int my_range; TYPE_4__ fsm; } ;
struct TYPE_17__ {TYPE_10__* dns; } ;
struct TYPE_14__ {scalar_t__ state; int name; } ;
struct ipcp {int throughput; TYPE_8__ cfg; TYPE_6__ ns; int my_compproto; TYPE_10__ my_ip; int peer_compproto; TYPE_10__ peer_ip; TYPE_3__ fsm; } ;
struct cmdargs {int prompt; TYPE_2__* bundle; } ;
struct TYPE_12__ {struct ipcp ipcp; } ;
struct TYPE_13__ {TYPE_1__ ncp; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 char* FUNC_1 (int ) ;
 char* FUNC_2 (TYPE_10__) ;
 scalar_t__ FUNC_3 (struct ipcp*) ;
 scalar_t__ FUNC_4 (TYPE_9__*) ;
 char* FUNC_5 (int *) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int ) ;

int
FUNC_9(struct cmdargs const *VAR_2)
{
  struct ipcp *VAR_3 = &VAR_2->bundle->ncp.ipcp;

  FUNC_6(VAR_2->prompt, "%s [%s]\n", VAR_3->fsm.name,
                FUNC_0(VAR_3->fsm.state));
  if (VAR_3->fsm.state == VAR_1) {
    FUNC_6(VAR_2->prompt, " His side:        %s, %s\n",
                  FUNC_2(VAR_3->peer_ip), FUNC_8(VAR_3->peer_compproto));
    FUNC_6(VAR_2->prompt, " My side:         %s, %s\n",
                  FUNC_2(VAR_3->my_ip), FUNC_8(VAR_3->my_compproto));
    FUNC_6(VAR_2->prompt, " Queued packets:  %lu\n",
                  (unsigned long)FUNC_3(VAR_3));
  }

  FUNC_6(VAR_2->prompt, "\nDefaults:\n");
  FUNC_6(VAR_2->prompt, " FSM retry = %us, max %u Config"
                " REQ%s, %u Term REQ%s\n", VAR_3->cfg.fsm.timeout,
                VAR_3->cfg.fsm.maxreq, VAR_3->cfg.fsm.maxreq == 1 ? "" : "s",
                VAR_3->cfg.fsm.maxtrm, VAR_3->cfg.fsm.maxtrm == 1 ? "" : "s");
  FUNC_6(VAR_2->prompt, " My Address:      %s\n",
                FUNC_5(&VAR_3->cfg.my_range));
  if (VAR_3->cfg.HaveTriggerAddress)
    FUNC_6(VAR_2->prompt, " Trigger address: %s\n",
                  FUNC_2(VAR_3->cfg.TriggerAddress));

  FUNC_6(VAR_2->prompt, " VJ compression:  %s (%d slots %s slot "
                "compression)\n", FUNC_1(VAR_3->cfg.vj.neg),
                VAR_3->cfg.vj.slots, VAR_3->cfg.vj.slotcomp ? "with" : "without");

  if (FUNC_4(&VAR_3->cfg.peer_list))
    FUNC_6(VAR_2->prompt, " His Address:     %s\n",
                  VAR_3->cfg.peer_list.src);
  else
    FUNC_6(VAR_2->prompt, " His Address:     %s\n",
                  FUNC_5(&VAR_3->cfg.peer_range));

  FUNC_6(VAR_2->prompt, " DNS:             %s",
                VAR_3->cfg.ns.dns[0].s_addr == VAR_0 ?
                "none" : FUNC_2(VAR_3->cfg.ns.dns[0]));
  if (VAR_3->cfg.ns.dns[1].s_addr != VAR_0)
    FUNC_6(VAR_2->prompt, ", %s",
                  FUNC_2(VAR_3->cfg.ns.dns[1]));
  FUNC_6(VAR_2->prompt, ", %s\n",
                FUNC_1(VAR_3->cfg.ns.dns_neg));
  FUNC_6(VAR_2->prompt, " Resolver DNS:    %s",
                VAR_3->ns.dns[0].s_addr == VAR_0 ?
                "none" : FUNC_2(VAR_3->ns.dns[0]));
  if (VAR_3->ns.dns[1].s_addr != VAR_0 &&
      VAR_3->ns.dns[1].s_addr != VAR_3->ns.dns[0].s_addr)
    FUNC_6(VAR_2->prompt, ", %s",
                  FUNC_2(VAR_3->ns.dns[1]));
  FUNC_6(VAR_2->prompt, "\n NetBIOS NS:      %s, ",
                FUNC_2(VAR_3->cfg.ns.nbns[0]));
  FUNC_6(VAR_2->prompt, "%s\n\n",
                FUNC_2(VAR_3->cfg.ns.nbns[1]));

  FUNC_7(&VAR_3->throughput, VAR_2->prompt);

  return 0;
}
