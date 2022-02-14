
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


typedef int u_short ;
struct TYPE_8__ {int * port; scalar_t__ maxports; scalar_t__ nports; } ;
struct TYPE_7__ {int nports; int maxports; int * port; } ;
struct TYPE_9__ {int tos; TYPE_2__ udp; TYPE_1__ tcp; } ;
struct TYPE_10__ {TYPE_3__ urgent; } ;
struct ncp {int ipv6cp; int ipcp; int mp; TYPE_4__ cfg; int * route; int afq; } ;
struct bundle {int fsm; TYPE_6__* links; } ;
struct TYPE_12__ {TYPE_5__* physical; } ;
struct TYPE_11__ {int link; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,struct bundle*,int *,int *) ;
 int FUNC_1 (int *,struct bundle*,int *,int *) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *,struct bundle*) ;

void
FUNC_6(struct ncp *VAR_4, struct bundle *VAR_5)
{
  VAR_4->afq = VAR_0;
  VAR_4->route = ((void*)0);

  VAR_4->cfg.urgent.tcp.port = (u_short *)FUNC_3(VAR_2 * sizeof(u_short));
  if (VAR_4->cfg.urgent.tcp.port == ((void*)0)) {
    FUNC_2(VAR_1, "ncp_Init: Out of memory allocating urgent ports\n");
    VAR_4->cfg.urgent.tcp.nports = VAR_4->cfg.urgent.tcp.maxports = 0;
  } else {
    VAR_4->cfg.urgent.tcp.nports = VAR_4->cfg.urgent.tcp.maxports = VAR_2;
    FUNC_4(VAR_4->cfg.urgent.tcp.port, VAR_3,
    VAR_2 * sizeof(u_short));
  }
  VAR_4->cfg.urgent.tos = 1;

  VAR_4->cfg.urgent.udp.nports = VAR_4->cfg.urgent.udp.maxports = 0;
  VAR_4->cfg.urgent.udp.port = ((void*)0);

  FUNC_5(&VAR_4->mp, VAR_5);


  FUNC_0(&VAR_4->ipcp, VAR_5, &VAR_5->links->physical->link,
            &VAR_5->fsm);

  FUNC_1(&VAR_4->ipv6cp, VAR_5, &VAR_5->links->physical->link,
              &VAR_5->fsm);

}
