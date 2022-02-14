
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct ncp {int dummy; } ;
struct iface {int addrs; TYPE_1__* addr; int name; } ;
struct TYPE_5__ {int system; int ifa; } ;




 int FUNC_0 (int,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,unsigned int) ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int ,TYPE_1__*,int) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (struct ncp*,TYPE_1__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;

void
FUNC_8(struct iface *VAR_5, struct ncp *VAR_6, int VAR_7, int VAR_8)
{
  int VAR_9, VAR_10, VAR_11, VAR_12 = -1, VAR_13 = -1, *VAR_14;
  unsigned VAR_15;

  if (VAR_5->addrs) {
    VAR_10 = VAR_11 = VAR_8 == VAR_0 ? 0 : 1;

    for (VAR_15 = 0; VAR_15 < VAR_5->addrs; VAR_15++) {
      VAR_9 = FUNC_6(&VAR_5->addr[VAR_15].ifa);
      if (VAR_7 == 0 || VAR_7 == VAR_9) {
        if (!VAR_5->addr[VAR_15].system && (VAR_8 & VAR_1))
          continue;
        switch (VAR_9) {
        case 129:
          if (VAR_10) {
            VAR_10 = 0;
            continue;
          }
          VAR_14 = &VAR_12;
          break;


        case 128:
          if (VAR_11) {
            VAR_11 = 0;
            continue;
          }
          VAR_14 = &VAR_13;
          break;

        default:
          continue;
        }

        if (*VAR_14 == -1 && (*VAR_14 = FUNC_0(VAR_9, VAR_3, 0)) == -1)
          FUNC_4(VAR_2, "iface_Clear: socket(): %s\n", FUNC_7(VAR_4));
        else if (FUNC_3(VAR_5->name, VAR_5->addr + VAR_15, *VAR_14)) {
          FUNC_5(VAR_6, VAR_5->addr + VAR_15);
          FUNC_1(VAR_5->addr + VAR_15 + 1, VAR_5->addr + VAR_15,
                (VAR_5->addrs - VAR_15 - 1) * sizeof *VAR_5->addr);
          VAR_5->addrs--;
          VAR_15--;
        }
      }
    }



    if (VAR_12)
      FUNC_2(VAR_12);
    if (VAR_13)
      FUNC_2(VAR_13);
  }
}
