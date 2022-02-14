
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


struct TYPE_13__ {void* s_addr; } ;
struct TYPE_14__ {scalar_t__ s_addr; } ;
struct ncprange {int ncprange_ip4width; int ncprange_ip6width; int ncprange_ip6addr; void* ncprange_family; TYPE_6__ ncprange_ip4mask; TYPE_7__ ncprange_ip4addr; } ;
struct TYPE_11__ {TYPE_7__* dns; } ;
struct TYPE_12__ {TYPE_4__ ns; TYPE_7__ my_ip; TYPE_7__ peer_ip; } ;
struct TYPE_9__ {int ncpaddr_ip6addr; } ;
struct TYPE_8__ {int ncpaddr_ip6addr; } ;
struct TYPE_10__ {TYPE_2__ myaddr; TYPE_1__ hisaddr; } ;
struct ncp {TYPE_5__ ipcp; TYPE_3__ ipv6cp; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 TYPE_7__ FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int) ;
 TYPE_6__ FUNC_3 (int) ;
 int FUNC_4 (void*,char*,int *) ;
 int FUNC_5 (int ,char*,...) ;
 char* FUNC_6 (char const*,char) ;
 int FUNC_7 (char const*,char*) ;
 scalar_t__ FUNC_8 (char const*,char*,int) ;
 int FUNC_9 (char*,char const*,int) ;
 int FUNC_10 (char const*,char**,int ) ;

int
FUNC_11(struct ncprange *VAR_6, struct ncp *VAR_7, const char *VAR_8)
{
  int VAR_9, VAR_10;
  char *VAR_11;
  const char *VAR_12;
  char *VAR_13;

  VAR_10 = FUNC_7(VAR_8, "/");

  if (VAR_7 && FUNC_8(VAR_8, "HISADDR", VAR_10) == 0) {
    VAR_6->ncprange_family = VAR_0;
    VAR_6->ncprange_ip4addr = VAR_7->ipcp.peer_ip;
    VAR_6->ncprange_ip4mask.s_addr = VAR_3;
    VAR_6->ncprange_ip4width = 32;
    return 1;

  } else if (VAR_7 && FUNC_8(VAR_8, "HISADDR6", VAR_10) == 0) {
    VAR_6->ncprange_family = VAR_1;
    VAR_6->ncprange_ip6addr = VAR_7->ipv6cp.hisaddr.ncpaddr_ip6addr;
    VAR_6->ncprange_ip6width = 128;
    return 1;

  } else if (VAR_7 && FUNC_8(VAR_8, "MYADDR", VAR_10) == 0) {
    VAR_6->ncprange_family = VAR_0;
    VAR_6->ncprange_ip4addr = VAR_7->ipcp.my_ip;
    VAR_6->ncprange_ip4mask.s_addr = VAR_3;
    VAR_6->ncprange_ip4width = 32;
    return 1;

  } else if (VAR_7 && FUNC_8(VAR_8, "MYADDR6", VAR_10) == 0) {
    VAR_6->ncprange_family = VAR_1;
    VAR_6->ncprange_ip6addr = VAR_7->ipv6cp.myaddr.ncpaddr_ip6addr;
    VAR_6->ncprange_ip6width = 128;
    return 1;

  } else if (VAR_7 && FUNC_8(VAR_8, "DNS0", VAR_10) == 0) {
    VAR_6->ncprange_family = VAR_0;
    VAR_6->ncprange_ip4addr = VAR_7->ipcp.ns.dns[0];
    VAR_6->ncprange_ip4mask.s_addr = VAR_3;
    VAR_6->ncprange_ip4width = 32;
    return 1;
  } else if (VAR_7 && FUNC_8(VAR_8, "DNS1", VAR_10) == 0) {
    VAR_6->ncprange_family = VAR_0;
    VAR_6->ncprange_ip4addr = VAR_7->ipcp.ns.dns[1];
    VAR_6->ncprange_ip4mask.s_addr = VAR_3;
    VAR_6->ncprange_ip4width = 32;
    return 1;
  }

  VAR_13 = (char *)FUNC_2(VAR_10 + 1);
  FUNC_9(VAR_13, VAR_8, VAR_10);
  VAR_13[VAR_10] = '\0';
  VAR_9 = -1;

  if (VAR_8[VAR_10] != '\0') {
    VAR_9 = FUNC_10(VAR_8 + VAR_10 + 1, &VAR_11, 0);
    if (*VAR_11 || VAR_11 == VAR_8 + VAR_10 + 1 || VAR_9 < 0 || VAR_9 > 128) {
      FUNC_5(VAR_5, "ncprange_aton: bad mask width.\n");
      return 0;
    }
  }

  if ((VAR_12 = FUNC_6(VAR_8, ':')) == ((void*)0)) {
    VAR_6->ncprange_family = VAR_0;

    VAR_6->ncprange_ip4addr = FUNC_0(VAR_13);

    if (VAR_6->ncprange_ip4addr.s_addr == VAR_4) {
      FUNC_5(VAR_5, "ncprange_aton: %s: Bad address\n", VAR_13);
      return 0;
    }

    if (VAR_6->ncprange_ip4addr.s_addr == VAR_2) {
      VAR_6->ncprange_ip4mask.s_addr = VAR_2;
      VAR_6->ncprange_ip4width = 0;
    } else if (VAR_9 == -1) {
      VAR_6->ncprange_ip4mask.s_addr = VAR_3;
      VAR_6->ncprange_ip4width = 32;
    } else if (VAR_9 > 32) {
      FUNC_5(VAR_5, "ncprange_aton: bad mask width.\n");
      return 0;
    } else {
      VAR_6->ncprange_ip4mask = FUNC_3(VAR_9);
      VAR_6->ncprange_ip4width = VAR_9;
    }

    return 1;

  } else if (FUNC_6(VAR_12 + 1, ':') != ((void*)0)) {
    VAR_6->ncprange_family = VAR_1;

    if (FUNC_4(VAR_1, VAR_13, &VAR_6->ncprange_ip6addr) != 1) {
      FUNC_5(VAR_5, "ncprange_aton: %s: Bad address\n", VAR_13);
      return 0;
    }

    if (FUNC_1(&VAR_6->ncprange_ip6addr))
      VAR_6->ncprange_ip6width = 0;
    else
      VAR_6->ncprange_ip6width = (VAR_9 == -1) ? 128 : VAR_9;
    return 1;

  }

  return 0;
}
