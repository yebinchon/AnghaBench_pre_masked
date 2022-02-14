
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u_long ;
struct in_addr {int s_addr; } ;
struct TYPE_7__ {scalar_t__ nItems; } ;
struct TYPE_6__ {TYPE_3__ peer_list; } ;
struct TYPE_8__ {TYPE_2__ cfg; } ;
struct TYPE_5__ {TYPE_4__ ipcp; } ;
struct bundle {TYPE_1__ ncp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct in_addr) ;
 scalar_t__ FUNC_1 (TYPE_4__*,struct in_addr,struct in_addr) ;
 struct in_addr FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ,char*,...) ;

__attribute__((used)) static struct in_addr
FUNC_4(struct bundle *VAR_3, struct in_addr VAR_4)
{
  struct in_addr VAR_5;
  u_long VAR_6;

  for (VAR_6 = 0; VAR_6 < VAR_3->ncp.ipcp.cfg.peer_list.nItems; VAR_6++) {
    VAR_5 = FUNC_2(&VAR_3->ncp.ipcp.cfg.peer_list);
    FUNC_3(VAR_1, "ChooseHisAddr: Check item %ld (%s)\n",
              VAR_6, FUNC_0(VAR_5));
    if (FUNC_1(&VAR_3->ncp.ipcp, VAR_4, VAR_5)) {
      FUNC_3(VAR_2, "Selected IP address %s\n", FUNC_0(VAR_5));
      break;
    }
  }

  if (VAR_6 == VAR_3->ncp.ipcp.cfg.peer_list.nItems) {
    FUNC_3(VAR_1, "ChooseHisAddr: All addresses in use !\n");
    VAR_5.s_addr = VAR_0;
  }

  return VAR_5;
}
