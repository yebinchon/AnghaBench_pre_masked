
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int my_range; int peer_range; int peer_list; } ;
struct in_addr {int dummy; } ;
struct ipcp {TYPE_2__ cfg; struct in_addr peer_ip; } ;
struct TYPE_3__ {struct ipcp ipcp; } ;
struct bundle {TYPE_1__ ncp; } ;


 int FUNC_0 (struct ipcp*,struct in_addr,struct in_addr) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char,int) ;
 int FUNC_3 (int *,struct in_addr*) ;
 int FUNC_4 (int *,struct in_addr) ;

int
FUNC_5(struct bundle *VAR_0, struct in_addr VAR_1)
{
  struct ipcp *VAR_2 = &VAR_0->ncp.ipcp;
  struct in_addr VAR_3;

  FUNC_2(&VAR_2->cfg.peer_range, '\0', sizeof VAR_2->cfg.peer_range);
  FUNC_1(&VAR_2->cfg.peer_list);
  VAR_2->peer_ip = VAR_1;
  FUNC_4(&VAR_2->cfg.peer_range, VAR_1);
  FUNC_3(&VAR_2->cfg.my_range, &VAR_3);

  return FUNC_0(VAR_2, VAR_3, VAR_1);
}
