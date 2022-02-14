
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {unsigned int nports; char** port; } ;
struct TYPE_7__ {unsigned int nports; char** port; } ;
struct TYPE_9__ {scalar_t__ tos; TYPE_3__ udp; TYPE_2__ tcp; } ;
struct TYPE_10__ {char* sendpipe; char* recvpipe; TYPE_4__ urgent; } ;
struct ncp {scalar_t__ afq; TYPE_5__ cfg; scalar_t__ route; } ;
struct cmdargs {int prompt; TYPE_1__* bundle; } ;
struct TYPE_6__ {struct ncp ncp; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,scalar_t__,char*,int) ;

int
FUNC_2(struct cmdargs const *VAR_1)
{
  struct ncp *VAR_2 = &VAR_1->bundle->ncp;
  unsigned VAR_3;


  FUNC_0(VAR_1->prompt, "Next queued AF: %s\n",
                VAR_2->afq == VAR_0 ? "inet6" : "inet");


  if (VAR_2->route) {
    FUNC_0(VAR_1->prompt, "\n");
    FUNC_1(VAR_1->prompt, VAR_2->route, "Sticky routes", 1);
  }

  FUNC_0(VAR_1->prompt, "\nDefaults:\n");
  FUNC_0(VAR_1->prompt, "  sendpipe:      ");
  if (VAR_2->cfg.sendpipe > 0)
    FUNC_0(VAR_1->prompt, "%-20ld\n", VAR_2->cfg.sendpipe);
  else
    FUNC_0(VAR_1->prompt, "unspecified\n");
  FUNC_0(VAR_1->prompt, "  recvpipe:      ");
  if (VAR_2->cfg.recvpipe > 0)
    FUNC_0(VAR_1->prompt, "%ld\n", VAR_2->cfg.recvpipe);
  else
    FUNC_0(VAR_1->prompt, "unspecified\n");

  FUNC_0(VAR_1->prompt, "\n  Urgent ports\n");
  FUNC_0(VAR_1->prompt, "         TCP:    ");
  if (VAR_2->cfg.urgent.tcp.nports == 0)
    FUNC_0(VAR_1->prompt, "none");
  else
    for (VAR_3 = 0; VAR_3 < VAR_2->cfg.urgent.tcp.nports; VAR_3++) {
      if (VAR_3)
        FUNC_0(VAR_1->prompt, ", ");
      FUNC_0(VAR_1->prompt, "%u", VAR_2->cfg.urgent.tcp.port[VAR_3]);
    }

  FUNC_0(VAR_1->prompt, "\n         UDP:    ");
  if (VAR_2->cfg.urgent.udp.nports == 0)
    FUNC_0(VAR_1->prompt, "none");
  else
    for (VAR_3 = 0; VAR_3 < VAR_2->cfg.urgent.udp.nports; VAR_3++) {
      if (VAR_3)
        FUNC_0(VAR_1->prompt, ", ");
      FUNC_0(VAR_1->prompt, "%u", VAR_2->cfg.urgent.udp.port[VAR_3]);
    }
  FUNC_0(VAR_1->prompt, "\n         TOS:    %s\n\n",
                VAR_2->cfg.urgent.tos ? "yes" : "no");

  return 0;
}
