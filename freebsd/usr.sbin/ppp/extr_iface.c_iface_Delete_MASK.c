
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct ncpaddr {int dummy; } ;
struct ncp {int dummy; } ;
struct iface {unsigned int addrs; TYPE_1__* addr; int name; } ;
struct TYPE_5__ {int ifa; } ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,unsigned int) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int ,TYPE_1__*,int) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (struct ncp*,TYPE_1__*) ;
 scalar_t__ FUNC_6 (struct ncpaddr*,struct ncpaddr const*) ;
 int FUNC_7 (struct ncpaddr const*) ;
 int FUNC_8 (int *,struct ncpaddr*) ;
 int FUNC_9 (int ) ;

int
FUNC_10(struct iface *VAR_3, struct ncp *VAR_4, const struct ncpaddr *VAR_5)
{
  struct ncpaddr VAR_6;
  unsigned VAR_7;
  int VAR_8, VAR_9;

  if ((VAR_9 = FUNC_0(FUNC_7(VAR_5), VAR_1, 0)) == -1) {
    FUNC_4(VAR_0, "iface_Delete: socket(): %s\n", FUNC_9(VAR_2));
    return 0;
  }

  for (VAR_7 = VAR_8 = 0; VAR_7 < VAR_3->addrs; VAR_7++) {
    FUNC_8(&VAR_3->addr[VAR_7].ifa, &VAR_6);
    if (FUNC_6(&VAR_6, VAR_5)) {
      if (FUNC_3(VAR_3->name, VAR_3->addr + VAR_7, VAR_9)) {
        FUNC_5(VAR_4, VAR_3->addr + VAR_7);
        FUNC_1(VAR_3->addr + VAR_7 + 1, VAR_3->addr + VAR_7,
              (VAR_3->addrs - VAR_7 - 1) * sizeof *VAR_3->addr);
        VAR_3->addrs--;
        VAR_8 = 1;
      }
      break;
    }
  }

  FUNC_2(VAR_9);

  return VAR_8;
}
