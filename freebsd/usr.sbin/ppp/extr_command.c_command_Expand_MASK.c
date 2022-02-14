
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_9__ ;
typedef struct TYPE_33__ TYPE_8__ ;
typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_17__ ;
typedef struct TYPE_24__ TYPE_16__ ;
typedef struct TYPE_23__ TYPE_15__ ;
typedef struct TYPE_22__ TYPE_14__ ;
typedef struct TYPE_21__ TYPE_13__ ;
typedef struct TYPE_20__ TYPE_12__ ;
typedef struct TYPE_19__ TYPE_11__ ;
typedef struct TYPE_18__ TYPE_10__ ;


struct TYPE_30__ {int len; int address; int class; } ;
struct TYPE_32__ {char* authname; TYPE_5__ enddisc; } ;
struct TYPE_26__ {int len; int address; int class; } ;
struct TYPE_27__ {TYPE_1__ enddisc; } ;
struct TYPE_33__ {TYPE_7__ peer; TYPE_2__ cfg; } ;
struct TYPE_18__ {unsigned long long OctetsIn; unsigned long long OctetsOut; unsigned long long PacketsIn; unsigned long long PacketsOut; } ;
struct TYPE_19__ {int myaddr; TYPE_10__ throughput; int hisaddr; } ;
struct TYPE_34__ {unsigned long long OctetsIn; unsigned long long OctetsOut; unsigned long long PacketsIn; unsigned long long PacketsOut; } ;
struct TYPE_23__ {int * dns; } ;
struct TYPE_22__ {int my_ip; TYPE_9__ throughput; int peer_ip; TYPE_15__ ns; } ;
struct TYPE_24__ {TYPE_8__ mp; TYPE_11__ ipv6cp; TYPE_14__ ipcp; } ;
struct TYPE_29__ {int ipv6prefix; } ;
struct TYPE_20__ {char* name; } ;
struct TYPE_21__ {TYPE_12__ auth; } ;
struct bundle {TYPE_16__ ncp; TYPE_4__ radius; TYPE_3__* iface; TYPE_13__ cfg; } ;
typedef scalar_t__ pid_t ;
struct TYPE_31__ {char* sockname; scalar_t__ port; } ;
struct TYPE_28__ {char* name; } ;
struct TYPE_25__ {TYPE_6__ cfg; } ;


 char* VAR_0 ;
 char* FUNC_0 (struct bundle*) ;
 int FUNC_1 (struct bundle*) ;
 char* FUNC_2 (int ,int ,int ) ;
 TYPE_17__ VAR_1 ;
 int FUNC_3 (char*,int,char*,int,int,int) ;
 char* FUNC_4 (char const* const) ;
 char* FUNC_5 (char*,char*,char*) ;
 char* FUNC_6 (char*,char*,int ) ;
 char* FUNC_7 (char*,char*,int *) ;
 char* FUNC_8 (char*,char*,int ) ;
 char* FUNC_9 (char*,char*,scalar_t__) ;
 char* FUNC_10 (char*,char*,unsigned long long) ;

void
FUNC_11(char **VAR_2, int VAR_3, char const *const *VAR_4,
               struct bundle *VAR_5, int VAR_6, pid_t VAR_7)
{
  int VAR_8, VAR_9;
  char VAR_10[20];
  unsigned long long VAR_11, VAR_12, VAR_13, VAR_14;

  if (VAR_6)
    VAR_8 = 0;
  else {
    VAR_2[0] = FUNC_4(VAR_4[0]);
    VAR_8 = 1;
  }

  VAR_9 = FUNC_1(VAR_5);
  FUNC_3(VAR_10, sizeof VAR_10, "%d:%02d:%02d",
           VAR_9 / 3600, (VAR_9 / 60) % 60, VAR_9 % 60);
  VAR_11 = VAR_5->ncp.ipcp.throughput.OctetsIn;
  VAR_12 = VAR_5->ncp.ipcp.throughput.OctetsOut;
  VAR_13 = VAR_5->ncp.ipcp.throughput.PacketsIn;
  VAR_14 = VAR_5->ncp.ipcp.throughput.PacketsOut;

  VAR_11 += VAR_5->ncp.ipv6cp.throughput.OctetsIn;
  VAR_12 += VAR_5->ncp.ipv6cp.throughput.OctetsOut;
  VAR_13 += VAR_5->ncp.ipv6cp.throughput.PacketsIn;
  VAR_14 += VAR_5->ncp.ipv6cp.throughput.PacketsOut;


  for (; VAR_8 < VAR_3; VAR_8++) {
    VAR_2[VAR_8] = FUNC_4(VAR_4[VAR_8]);
    VAR_2[VAR_8] = FUNC_5(VAR_2[VAR_8], "AUTHNAME", VAR_5->cfg.auth.name);
    VAR_2[VAR_8] = FUNC_6(VAR_2[VAR_8], "DNS0", VAR_5->ncp.ipcp.ns.dns[0]);
    VAR_2[VAR_8] = FUNC_6(VAR_2[VAR_8], "DNS1", VAR_5->ncp.ipcp.ns.dns[1]);
    VAR_2[VAR_8] = FUNC_5(VAR_2[VAR_8], "ENDDISC",
                       FUNC_2(VAR_5->ncp.mp.cfg.enddisc.class,
                                  VAR_5->ncp.mp.cfg.enddisc.address,
                                  VAR_5->ncp.mp.cfg.enddisc.len));
    VAR_2[VAR_8] = FUNC_6(VAR_2[VAR_8], "HISADDR", VAR_5->ncp.ipcp.peer_ip);

    VAR_2[VAR_8] = FUNC_7(VAR_2[VAR_8], "HISADDR6", &VAR_5->ncp.ipv6cp.hisaddr);

    VAR_2[VAR_8] = FUNC_5(VAR_2[VAR_8], "INTERFACE", VAR_5->iface->name);
    VAR_2[VAR_8] = FUNC_10(VAR_2[VAR_8], "IPOCTETSIN",
                          VAR_5->ncp.ipcp.throughput.OctetsIn);
    VAR_2[VAR_8] = FUNC_10(VAR_2[VAR_8], "IPOCTETSOUT",
                          VAR_5->ncp.ipcp.throughput.OctetsOut);
    VAR_2[VAR_8] = FUNC_10(VAR_2[VAR_8], "IPPACKETSIN",
                          VAR_5->ncp.ipcp.throughput.PacketsIn);
    VAR_2[VAR_8] = FUNC_10(VAR_2[VAR_8], "IPPACKETSOUT",
                          VAR_5->ncp.ipcp.throughput.PacketsOut);

    VAR_2[VAR_8] = FUNC_10(VAR_2[VAR_8], "IPV6OCTETSIN",
                          VAR_5->ncp.ipv6cp.throughput.OctetsIn);
    VAR_2[VAR_8] = FUNC_10(VAR_2[VAR_8], "IPV6OCTETSOUT",
                          VAR_5->ncp.ipv6cp.throughput.OctetsOut);
    VAR_2[VAR_8] = FUNC_10(VAR_2[VAR_8], "IPV6PACKETSIN",
                          VAR_5->ncp.ipv6cp.throughput.PacketsIn);
    VAR_2[VAR_8] = FUNC_10(VAR_2[VAR_8], "IPV6PACKETSOUT",
                          VAR_5->ncp.ipv6cp.throughput.PacketsOut);

    VAR_2[VAR_8] = FUNC_5(VAR_2[VAR_8], "LABEL", FUNC_0(VAR_5));
    VAR_2[VAR_8] = FUNC_6(VAR_2[VAR_8], "MYADDR", VAR_5->ncp.ipcp.my_ip);

    VAR_2[VAR_8] = FUNC_7(VAR_2[VAR_8], "MYADDR6", &VAR_5->ncp.ipv6cp.myaddr);

    VAR_2[VAR_8] = FUNC_8(VAR_2[VAR_8], "IPV6PREFIX",
     VAR_5->radius.ipv6prefix);


    VAR_2[VAR_8] = FUNC_10(VAR_2[VAR_8], "OCTETSIN", VAR_11);
    VAR_2[VAR_8] = FUNC_10(VAR_2[VAR_8], "OCTETSOUT", VAR_12);
    VAR_2[VAR_8] = FUNC_10(VAR_2[VAR_8], "PACKETSIN", VAR_13);
    VAR_2[VAR_8] = FUNC_10(VAR_2[VAR_8], "PACKETSOUT", VAR_14);
    VAR_2[VAR_8] = FUNC_5(VAR_2[VAR_8], "PEER_ENDDISC",
                       FUNC_2(VAR_5->ncp.mp.peer.enddisc.class,
                                  VAR_5->ncp.mp.peer.enddisc.address,
                                  VAR_5->ncp.mp.peer.enddisc.len));
    VAR_2[VAR_8] = FUNC_9(VAR_2[VAR_8], "PROCESSID", VAR_7);
    if (VAR_1.cfg.port)
      VAR_2[VAR_8] = FUNC_9(VAR_2[VAR_8], "SOCKNAME", VAR_1.cfg.port);
    else
      VAR_2[VAR_8] = FUNC_5(VAR_2[VAR_8], "SOCKNAME", VAR_1.cfg.sockname);
    VAR_2[VAR_8] = FUNC_5(VAR_2[VAR_8], "UPTIME", VAR_10);
    VAR_2[VAR_8] = FUNC_5(VAR_2[VAR_8], "USER", VAR_5->ncp.mp.peer.authname);
    VAR_2[VAR_8] = FUNC_5(VAR_2[VAR_8], "VERSION", VAR_0);
  }
  VAR_2[VAR_8] = ((void*)0);
}
