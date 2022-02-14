
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct sockaddr_dl {scalar_t__* sdl_data; int sdl_nlen; int sdl_alen; } ;
struct TYPE_13__ {char* address; int len; scalar_t__ class; } ;
struct TYPE_14__ {TYPE_5__ enddisc; } ;
struct mp {TYPE_6__ cfg; } ;
struct in_addr {scalar_t__ s_addr; } ;
struct cmdargs {int argc; int argn; int * argv; TYPE_7__* bundle; } ;
struct TYPE_10__ {int my_range; } ;
struct TYPE_11__ {struct in_addr my_ip; TYPE_2__ cfg; } ;
struct TYPE_12__ {TYPE_3__ ipcp; struct mp mp; } ;
struct TYPE_9__ {int label; } ;
struct TYPE_15__ {TYPE_4__ ncp; TYPE_1__ cfg; } ;


 int DATALINK_LCP ;
 scalar_t__ ENDDISC_IP ;
 scalar_t__ ENDDISC_LOCAL ;
 scalar_t__ ENDDISC_MAC ;
 scalar_t__ ENDDISC_MAGIC ;
 scalar_t__ ENDDISC_PSN ;
 scalar_t__ INADDR_ANY ;
 int LogWARN ;


 scalar_t__ arp_EtherAddr (struct in_addr,struct sockaddr_dl*,int) ;
 int bundle_HighestState (TYPE_7__*) ;
 int bundle_Phase (TYPE_7__*) ;
 int inet_ntoa (struct in_addr) ;
 int log_Printf (int ,char*,...) ;
 int memcpy (char*,scalar_t__*,int) ;
 int ncprange_getip4addr (int *,struct in_addr*) ;
 int randinit () ;
 long random () ;
 int strcasecmp (int ,char*) ;
 int strcpy (char*,int ) ;
 void* strlen (char*) ;

int
mp_SetEnddisc(struct cmdargs const *arg)
{
  struct mp *mp = &arg->bundle->ncp.mp;
  struct in_addr addr;

  switch (bundle_Phase(arg->bundle)) {
    case 129:
      break;
    case 128:

      if (bundle_HighestState(arg->bundle) >= DATALINK_LCP) {
        log_Printf(LogWARN, "enddisc: Only changeable before"
                   " LCP negotiations\n");
        return 1;
      }
      break;
    default:
      log_Printf(LogWARN, "enddisc: Only changeable at phase DEAD/ESTABLISH\n");
      return 1;
  }

  if (arg->argc == arg->argn) {
    mp->cfg.enddisc.class = 0;
    *mp->cfg.enddisc.address = '\0';
    mp->cfg.enddisc.len = 0;
  } else if (arg->argc > arg->argn) {
    if (!strcasecmp(arg->argv[arg->argn], "label")) {
      mp->cfg.enddisc.class = ENDDISC_LOCAL;
      strcpy(mp->cfg.enddisc.address, arg->bundle->cfg.label);
      mp->cfg.enddisc.len = strlen(mp->cfg.enddisc.address);
    } else if (!strcasecmp(arg->argv[arg->argn], "ip")) {
      if (arg->bundle->ncp.ipcp.my_ip.s_addr == INADDR_ANY)
        ncprange_getip4addr(&arg->bundle->ncp.ipcp.cfg.my_range, &addr);
      else
        addr = arg->bundle->ncp.ipcp.my_ip;
      memcpy(mp->cfg.enddisc.address, &addr.s_addr, sizeof addr.s_addr);
      mp->cfg.enddisc.class = ENDDISC_IP;
      mp->cfg.enddisc.len = sizeof arg->bundle->ncp.ipcp.my_ip.s_addr;
    } else if (!strcasecmp(arg->argv[arg->argn], "mac")) {
      struct sockaddr_dl hwaddr;

      if (arg->bundle->ncp.ipcp.my_ip.s_addr == INADDR_ANY)
        ncprange_getip4addr(&arg->bundle->ncp.ipcp.cfg.my_range, &addr);
      else
        addr = arg->bundle->ncp.ipcp.my_ip;

      if (arp_EtherAddr(addr, &hwaddr, 1)) {
        mp->cfg.enddisc.class = ENDDISC_MAC;
        memcpy(mp->cfg.enddisc.address, hwaddr.sdl_data + hwaddr.sdl_nlen,
               hwaddr.sdl_alen);
        mp->cfg.enddisc.len = hwaddr.sdl_alen;
      } else {
        log_Printf(LogWARN, "set enddisc: Can't locate MAC address for %s\n",
                  inet_ntoa(addr));
        return 4;
      }
    } else if (!strcasecmp(arg->argv[arg->argn], "magic")) {
      int f;

      randinit();
      for (f = 0; f < 20; f += sizeof(long))
        *(long *)(mp->cfg.enddisc.address + f) = random();
      mp->cfg.enddisc.class = ENDDISC_MAGIC;
      mp->cfg.enddisc.len = 20;
    } else if (!strcasecmp(arg->argv[arg->argn], "psn")) {
      if (arg->argc > arg->argn+1) {
        mp->cfg.enddisc.class = ENDDISC_PSN;
        strcpy(mp->cfg.enddisc.address, arg->argv[arg->argn+1]);
        mp->cfg.enddisc.len = strlen(mp->cfg.enddisc.address);
      } else {
        log_Printf(LogWARN, "PSN endpoint requires additional data\n");
        return 5;
      }
    } else {
      log_Printf(LogWARN, "%s: Unrecognised endpoint type\n",
                arg->argv[arg->argn]);
      return 6;
    }
  }

  return 0;
}
