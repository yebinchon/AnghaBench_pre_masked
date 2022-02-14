
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct link {int dummy; } ;
struct TYPE_14__ {int writable; int * resolv_nons; int * resolv; } ;
struct TYPE_12__ {int slotcomp; int neg; int slots; } ;
struct TYPE_11__ {void* maxtrm; void* maxreq; int timeout; } ;
struct TYPE_10__ {TYPE_2__* nbns; scalar_t__ dns_neg; TYPE_1__* dns; } ;
struct in_addr {void* s_addr; } ;
struct TYPE_13__ {TYPE_5__ vj; TYPE_4__ fsm; TYPE_3__ ns; scalar_t__ HaveTriggerAddress; int peer_list; struct in_addr netmask; int peer_range; int my_range; } ;
struct ipcp {int * Queue; int throughput; TYPE_7__ ns; int vj; TYPE_6__ cfg; int fsm; } ;
struct hostent {scalar_t__ h_addrtype; int h_length; int h_addr; } ;
struct fsm_parent {int dummy; } ;
struct bundle {int dummy; } ;
struct TYPE_9__ {void* s_addr; } ;
struct TYPE_8__ {void* s_addr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int *,char*,int ,int,int ,int ,struct bundle*,struct link*,struct fsm_parent const*,int *,char const* const*) ;
 struct hostent* FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,int) ;
 void* FUNC_3 (int ) ;
 int VAR_14 ;
 int FUNC_4 (struct ipcp*) ;
 int FUNC_5 (struct ipcp*,void*) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (void**,int ,int) ;
 int FUNC_8 (int *,char,int) ;
 int FUNC_9 (int *,struct in_addr,struct in_addr) ;
 int FUNC_10 (int *,int ) ;

void
FUNC_11(struct ipcp *VAR_15, struct bundle *VAR_16, struct link *VAR_17,
          const struct fsm_parent *VAR_18)
{
  struct hostent *VAR_19;
  struct in_addr VAR_20;
  char VAR_21[VAR_9];
  static const char * const VAR_22[] =
    {"IPCP restart", "IPCP openmode", "IPCP stopped"};

  FUNC_0(&VAR_15->fsm, "IPCP", VAR_12, 1, VAR_7, VAR_8,
           VAR_16, VAR_17, VAR_18, &VAR_14, VAR_22);

  VAR_15->cfg.vj.slots = VAR_3;
  VAR_15->cfg.vj.slotcomp = 1;
  FUNC_8(&VAR_15->cfg.my_range, '\0', sizeof VAR_15->cfg.my_range);

  VAR_20.s_addr = FUNC_3(VAR_5);
  VAR_15->cfg.netmask.s_addr = VAR_4;
  if (FUNC_2(VAR_21, sizeof VAR_21) == 0) {
    VAR_19 = FUNC_1(VAR_21);
    if (VAR_19 && VAR_19->h_addrtype == VAR_0 && VAR_19->h_length == sizeof VAR_20.s_addr)
      FUNC_7(&VAR_20.s_addr, VAR_19->h_addr, sizeof VAR_20.s_addr);
  }
  FUNC_9(&VAR_15->cfg.my_range, VAR_20, VAR_15->cfg.netmask);
  FUNC_9(&VAR_15->cfg.peer_range, VAR_15->cfg.netmask, VAR_15->cfg.netmask);

  FUNC_6(&VAR_15->cfg.peer_list, "");
  VAR_15->cfg.HaveTriggerAddress = 0;

  VAR_15->cfg.ns.dns[0].s_addr = VAR_6;
  VAR_15->cfg.ns.dns[1].s_addr = VAR_6;
  VAR_15->cfg.ns.dns_neg = 0;
  VAR_15->cfg.ns.nbns[0].s_addr = VAR_4;
  VAR_15->cfg.ns.nbns[1].s_addr = VAR_4;

  VAR_15->cfg.fsm.timeout = VAR_1;
  VAR_15->cfg.fsm.maxreq = VAR_2;
  VAR_15->cfg.fsm.maxtrm = VAR_2;
  VAR_15->cfg.vj.neg = VAR_11|VAR_10;

  FUNC_8(&VAR_15->vj, '\0', sizeof VAR_15->vj);

  VAR_15->ns.resolv = ((void*)0);
  VAR_15->ns.resolv_nons = ((void*)0);
  VAR_15->ns.writable = 1;
  FUNC_4(VAR_15);

  FUNC_10(&VAR_15->throughput, VAR_13);
  FUNC_8(VAR_15->Queue, '\0', sizeof VAR_15->Queue);
  FUNC_5(VAR_15, VAR_6);
}
