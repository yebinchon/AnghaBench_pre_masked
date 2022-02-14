
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rpcent {char* r_name; } ;
typedef TYPE_1__* rpcbs_rmtcalllist_ptr ;
struct TYPE_5__ {TYPE_1__* rmtinfo; } ;
typedef TYPE_2__ rpcb_stat ;
struct TYPE_4__ {int prog; int vers; int proc; char* netid; int indirect; int success; int failure; struct TYPE_4__* next; } ;


 int VAR_0 ;
 struct rpcent* FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(int VAR_1, rpcb_stat *VAR_2)
{
 register rpcbs_rmtcalllist_ptr VAR_3;
 struct rpcent *VAR_4;

 if (VAR_1 == VAR_0)
  FUNC_1(
  "prog\t\tvers\tproc\tnetid\tindirect success failure\n");
 else
  FUNC_1("prog\t\tvers\tproc\tnetid\tsuccess\tfailure\n");
 for (VAR_3 = VAR_2->rmtinfo; VAR_3; VAR_3 = VAR_3->next) {
  VAR_4 = FUNC_0(VAR_3->prog);
  if (VAR_4)
   FUNC_1("%-16s", VAR_4->r_name);
  else
   FUNC_1("%-16d", VAR_3->prog);
  FUNC_1("%d\t%d\t%s\t",
   VAR_3->vers, VAR_3->proc, VAR_3->netid);
  if (VAR_1 == VAR_0)
   FUNC_1("%d\t ", VAR_3->indirect);
  FUNC_1("%d\t%d\n", VAR_3->success, VAR_3->failure);
 }
}
