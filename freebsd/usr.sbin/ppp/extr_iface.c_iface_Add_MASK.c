
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ncprange {int dummy; } ;
struct ncpaddr {int dummy; } ;
struct ncp {int dummy; } ;
struct iface_addr {int system; int peer; int ifa; } ;
struct iface {unsigned int addrs; struct iface_addr* addr; int name; } ;


 int FUNC_0 (int,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct iface_addr*,struct iface_addr*,int) ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 int FUNC_3 (int ,struct iface_addr*,int) ;
 int FUNC_4 (int ,struct iface_addr*,int) ;
 int FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (struct iface_addr*,struct iface_addr*,int) ;
 int FUNC_7 (struct ncp*,struct iface_addr*) ;
 int FUNC_8 (struct ncp*,struct iface_addr*) ;
 int FUNC_9 (int *,struct ncpaddr const*) ;
 scalar_t__ FUNC_10 (int *,struct ncpaddr const*) ;
 scalar_t__ FUNC_11 (int *,struct ncpaddr*) ;
 int FUNC_12 (int *,struct ncprange const*) ;
 scalar_t__ FUNC_13 (int *,struct ncprange const*) ;
 int FUNC_14 (struct ncprange const*) ;
 int FUNC_15 (struct ncprange const*,struct ncpaddr*) ;
 scalar_t__ FUNC_16 (struct iface_addr*,int) ;
 int FUNC_17 (int ) ;

int
FUNC_18(struct iface *VAR_6, struct ncp *VAR_7, const struct ncprange *VAR_8,
          const struct ncpaddr *VAR_9, int VAR_10)
{
  int VAR_11, VAR_12, VAR_13;
  unsigned VAR_14;
  struct ncpaddr VAR_15;
  struct iface_addr *VAR_16, VAR_17;

  VAR_11 = FUNC_14(VAR_8);
  if ((VAR_13 = FUNC_0(VAR_11, VAR_4, 0)) == -1) {
    FUNC_5(VAR_3, "iface_Add: socket(): %s\n", FUNC_17(VAR_5));
    return 0;
  }
  FUNC_15(VAR_8, &VAR_15);

  for (VAR_14 = 0; VAR_14 < VAR_6->addrs; VAR_14++) {
    if (FUNC_11(&VAR_6->addr[VAR_14].ifa, &VAR_15) ||
        FUNC_10(&VAR_6->addr[VAR_14].peer, VAR_9)) {

      if (!(VAR_10 & VAR_1)) {
        FUNC_2(VAR_13);
        return 0;
      }

      if (FUNC_13(&VAR_6->addr[VAR_14].ifa, VAR_8) &&
          FUNC_10(&VAR_6->addr[VAR_14].peer, VAR_9)) {
        FUNC_2(VAR_13);
        FUNC_7(VAR_7, VAR_6->addr + VAR_14);
        return 1;
      }

      VAR_12 = FUNC_4(VAR_6->name, VAR_6->addr + VAR_14, VAR_13);
      if (VAR_12)
        FUNC_8(VAR_7, VAR_6->addr + VAR_14);
      FUNC_12(&VAR_6->addr[VAR_14].ifa, VAR_8);
      FUNC_9(&VAR_6->addr[VAR_14].peer, VAR_9);
      if (!FUNC_3(VAR_6->name, VAR_6->addr + VAR_14, VAR_13)) {
        if (VAR_12) {
          FUNC_1(VAR_6->addr + VAR_14 + 1, VAR_6->addr + VAR_14,
                (VAR_6->addrs - VAR_14 - 1) * sizeof *VAR_6->addr);
          VAR_6->addrs--;
          VAR_14--;
        }
        FUNC_2(VAR_13);
        return 0;
      }
      FUNC_2(VAR_13);
      FUNC_7(VAR_7, VAR_6->addr + VAR_14);
      return 1;
    }
  }

  VAR_16 = (struct iface_addr *)FUNC_16
    (VAR_6->addr, (VAR_6->addrs + 1) * sizeof VAR_6->addr[0]);
  if (VAR_16 == ((void*)0)) {
    FUNC_5(VAR_3, "iface_inAdd: realloc: %s\n", FUNC_17(VAR_5));
    FUNC_2(VAR_13);
    return 0;
  }
  VAR_6->addr = VAR_16;

  FUNC_12(&VAR_17.ifa, VAR_8);
  FUNC_9(&VAR_17.peer, VAR_9);
  VAR_17.system = !!(VAR_10 & VAR_2);
  if (!FUNC_3(VAR_6->name, &VAR_17, VAR_13)) {
    FUNC_2(VAR_13);
    return 0;
  }

  if (VAR_10 & VAR_0) {

    VAR_14 = 0;
    FUNC_1(VAR_6->addr, VAR_6->addr + 1, VAR_6->addrs * sizeof *VAR_6->addr);
  } else
    VAR_14 = VAR_6->addrs;

  VAR_6->addrs++;
  FUNC_6(VAR_6->addr + VAR_14, &VAR_17, sizeof(*VAR_6->addr));

  FUNC_2(VAR_13);
  FUNC_7(VAR_7, VAR_6->addr + VAR_14);

  return 1;
}
