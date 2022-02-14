
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ncpaddr {int dummy; } ;
struct in_addr {int s_addr; } ;
struct iface {int flags; int addrs; TYPE_2__* addr; int mtu; int index; int name; } ;
struct cmdargs {int prompt; TYPE_1__* bundle; } ;
struct TYPE_6__ {int flag; int value; } ;
struct TYPE_5__ {int ifa; struct ncpaddr peer; } ;
struct TYPE_4__ {struct iface* iface; } ;




 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 struct iface* FUNC_0 (int ) ;
 int FUNC_1 (struct iface*) ;
 int FUNC_2 (struct ncpaddr*) ;
 int FUNC_3 (struct ncpaddr*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,struct ncpaddr*) ;
 int FUNC_6 (int *,struct in_addr*) ;
 int FUNC_7 (int *,int*) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ,char*,...) ;

int
FUNC_11(struct cmdargs const *VAR_2)
{
  struct ncpaddr VAR_3;
  struct iface *VAR_4 = VAR_2->bundle->iface, *VAR_5;
  unsigned VAR_6;
  int VAR_7;

  int VAR_8, VAR_9;

  struct in_addr VAR_10;

  VAR_5 = FUNC_0(VAR_4->name);
  VAR_7 = VAR_4->flags = VAR_5->flags;
  FUNC_1(VAR_5);

  FUNC_10(VAR_2->prompt, "%s (idx %d) <", VAR_4->name, VAR_4->index);
  for (VAR_6 = 0; VAR_6 < sizeof VAR_1 / sizeof VAR_1[0]; VAR_6++)
    if ((VAR_1[VAR_6].flag & VAR_7)) {
      FUNC_10(VAR_2->prompt, "%s%s", VAR_7 == VAR_4->flags ? "" : ",",
                    VAR_1[VAR_6].value);
      VAR_7 &= ~VAR_1[VAR_6].flag;
    }







  FUNC_10(VAR_2->prompt, "> mtu %lu has %d address%s:\n", VAR_4->mtu,
                VAR_4->addrs, VAR_4->addrs == 1 ? "" : "es");

  for (VAR_6 = 0; VAR_6 < VAR_4->addrs; VAR_6++) {
    FUNC_5(&VAR_4->addr[VAR_6].ifa, &VAR_3);
    switch (FUNC_4(&VAR_4->addr[VAR_6].ifa)) {
    case 129:
      FUNC_10(VAR_2->prompt, "  inet %s --> ", FUNC_3(&VAR_3));
      if (FUNC_2(&VAR_4->addr[VAR_6].peer) == VAR_0)
        FUNC_10(VAR_2->prompt, "255.255.255.255");
      else
        FUNC_10(VAR_2->prompt, "%s", FUNC_3(&VAR_4->addr[VAR_6].peer));
      FUNC_6(&VAR_4->addr[VAR_6].ifa, &VAR_10);
      FUNC_10(VAR_2->prompt, " netmask 0x%08lx", (long)FUNC_9(VAR_10.s_addr));
      break;


    case 128:
      FUNC_10(VAR_2->prompt, "  inet6 %s", FUNC_3(&VAR_3));
      if (FUNC_2(&VAR_4->addr[VAR_6].peer) != VAR_0)
        FUNC_10(VAR_2->prompt, " --> %s",
                      FUNC_3(&VAR_4->addr[VAR_6].peer));
      FUNC_7(&VAR_4->addr[VAR_6].ifa, &VAR_9);
      if (FUNC_2(&VAR_4->addr[VAR_6].peer) == VAR_0)
        FUNC_10(VAR_2->prompt, " prefixlen %d", VAR_9);
      if ((VAR_8 = FUNC_8(&VAR_4->addr[VAR_6].ifa)) != -1)
        FUNC_10(VAR_2->prompt, " scopeid 0x%x", (unsigned)VAR_8);
      break;

    }
    FUNC_10(VAR_2->prompt, "\n");
  }

  return 0;
}
