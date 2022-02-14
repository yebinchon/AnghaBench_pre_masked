
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_15__ {int maxreq; } ;
struct TYPE_16__ {TYPE_5__ fsm; } ;
struct TYPE_12__ {int cslc; } ;
struct ipcp {int peer_compproto; TYPE_6__ cfg; int throughput; int ifmask; int peer_ip; TYPE_2__ vj; int my_ip; } ;
struct TYPE_14__ {int reqs; int naks; int rejs; } ;
struct fsm {TYPE_4__ more; TYPE_7__* bundle; TYPE_1__* link; } ;
struct TYPE_13__ {scalar_t__* file; } ;
struct TYPE_18__ {char* filterid; TYPE_3__ cfg; } ;
struct TYPE_17__ {TYPE_9__ radius; int links; int radacct; } ;
struct TYPE_11__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (TYPE_7__*) ;
 struct ipcp* FUNC_1 (struct fsm*) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (struct ipcp*) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,char*,char*,...) ;
 int FUNC_6 (TYPE_9__*,int *,int ,int ,int *) ;
 int FUNC_7 (int *,int *,int *) ;
 int FUNC_8 (TYPE_7__*) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (char*,int,char*,char*) ;
 scalar_t__ FUNC_11 (TYPE_7__*,char*,int ,int *,int *) ;

__attribute__((used)) static int
FUNC_12(struct fsm *VAR_4)
{

  struct ipcp *VAR_5 = FUNC_1(VAR_4);
  char VAR_6[16];

  FUNC_5(VAR_1, "%s: LayerUp.\n", VAR_4->link->name);
  FUNC_10(VAR_6, sizeof VAR_6, "%s", FUNC_2(VAR_5->my_ip));
  FUNC_5(VAR_1, "myaddr %s hisaddr = %s\n",
             VAR_6, FUNC_2(VAR_5->peer_ip));

  if (VAR_5->peer_compproto >> 16 == VAR_2)
    FUNC_9(&VAR_5->vj.cslc, (VAR_5->peer_compproto >> 8) & 255);

  if (!FUNC_3(VAR_5))
    return 0;


  FUNC_7(&VAR_4->bundle->radacct, &VAR_5->peer_ip, &VAR_5->ifmask);
  FUNC_6(&VAR_4->bundle->radius, &VAR_4->bundle->radacct, VAR_4->bundle->links,
                 VAR_3, &VAR_5->throughput);

  if (*VAR_4->bundle->radius.cfg.file && VAR_4->bundle->radius.filterid)
    FUNC_11(VAR_4->bundle, VAR_4->bundle->radius.filterid, VAR_0,
                  ((void*)0), ((void*)0));
  FUNC_8(VAR_4->bundle);






  if (FUNC_11(VAR_4->bundle, VAR_6, VAR_0, ((void*)0), ((void*)0)) < 0) {
    if (FUNC_0(VAR_4->bundle)) {
      if (FUNC_11(VAR_4->bundle, FUNC_0(VAR_4->bundle),
                       VAR_0, ((void*)0), ((void*)0)) < 0)
        FUNC_11(VAR_4->bundle, "MYADDR", VAR_0, ((void*)0), ((void*)0));
    } else
      FUNC_11(VAR_4->bundle, "MYADDR", VAR_0, ((void*)0), ((void*)0));
  }

  VAR_4->more.reqs = VAR_4->more.naks = VAR_4->more.rejs = VAR_5->cfg.fsm.maxreq * 3;
  FUNC_4();

  return 1;
}
