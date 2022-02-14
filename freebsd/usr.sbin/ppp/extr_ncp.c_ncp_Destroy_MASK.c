
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * port; scalar_t__ maxports; scalar_t__ nports; } ;
struct TYPE_5__ {int * port; scalar_t__ maxports; scalar_t__ nports; } ;
struct TYPE_7__ {TYPE_2__ udp; TYPE_1__ tcp; } ;
struct TYPE_8__ {TYPE_3__ urgent; } ;
struct ncp {TYPE_4__ cfg; int ipv6cp; int ipcp; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct ncp *VAR_0)
{
  FUNC_1(&VAR_0->ipcp);

  FUNC_2(&VAR_0->ipv6cp);


  if (VAR_0->cfg.urgent.tcp.maxports) {
    VAR_0->cfg.urgent.tcp.nports = VAR_0->cfg.urgent.tcp.maxports = 0;
    FUNC_0(VAR_0->cfg.urgent.tcp.port);
    VAR_0->cfg.urgent.tcp.port = ((void*)0);
  }
  if (VAR_0->cfg.urgent.udp.maxports) {
    VAR_0->cfg.urgent.udp.nports = VAR_0->cfg.urgent.udp.maxports = 0;
    FUNC_0(VAR_0->cfg.urgent.udp.port);
    VAR_0->cfg.urgent.udp.port = ((void*)0);
  }
}
