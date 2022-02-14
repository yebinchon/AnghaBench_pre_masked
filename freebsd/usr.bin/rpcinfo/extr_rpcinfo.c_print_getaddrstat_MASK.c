
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rpcent {char* r_name; } ;
typedef TYPE_1__* rpcbs_addrlist_ptr ;
struct TYPE_5__ {TYPE_1__* addrinfo; } ;
typedef TYPE_2__ rpcb_stat ;
struct TYPE_4__ {int prog; int vers; char* netid; int success; int failure; struct TYPE_4__* next; } ;


 struct rpcent* FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(int VAR_0, rpcb_stat *VAR_1)
{
 rpcbs_addrlist_ptr VAR_2;
 register struct rpcent *VAR_3;

 FUNC_1("prog\t\tvers\tnetid\t  success\tfailure\n");
 for (VAR_2 = VAR_1->addrinfo; VAR_2; VAR_2 = VAR_2->next) {
  VAR_3 = FUNC_0(VAR_2->prog);
  if (VAR_3)
   FUNC_1("%-16s", VAR_3->r_name);
  else
   FUNC_1("%-16d", VAR_2->prog);
  FUNC_1("%d\t%s\t  %-12d\t%d\n",
   VAR_2->vers, VAR_2->netid,
   VAR_2->success, VAR_2->failure);
 }
}
