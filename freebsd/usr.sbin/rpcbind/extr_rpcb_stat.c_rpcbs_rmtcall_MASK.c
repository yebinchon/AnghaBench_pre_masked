
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct netconfig {int * nc_netid; } ;
typedef size_t rpcvers_t ;
typedef scalar_t__ rpcprog_t ;
typedef scalar_t__ rpcproc_t ;
struct TYPE_7__ {scalar_t__ prog; size_t vers; scalar_t__ proc; int failure; int success; int indirect; struct TYPE_7__* next; int * netid; } ;
typedef TYPE_2__ rpcbs_rmtcalllist ;
typedef TYPE_3__* rpcblist_ptr ;
struct TYPE_9__ {TYPE_2__* rmtinfo; } ;
struct TYPE_6__ {size_t r_vers; } ;
struct TYPE_8__ {TYPE_1__ rpcb_map; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 TYPE_5__* VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 struct netconfig* FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int *,char*) ;

void
FUNC_3(rpcvers_t VAR_3, rpcproc_t VAR_4, rpcprog_t VAR_5,
       rpcvers_t VAR_6, rpcproc_t VAR_7, char *VAR_8, rpcblist_ptr VAR_9)
{
 rpcbs_rmtcalllist *VAR_10;
 struct netconfig *VAR_11;

 if (VAR_3 >= VAR_1)
  return;
 for (VAR_10 = VAR_2[VAR_3].rmtinfo; VAR_10; VAR_10 = VAR_10->next) {

  if(VAR_10->netid == ((void*)0))
   return;

  if ((VAR_10->prog == VAR_5) && (VAR_10->vers == VAR_6) &&
      (VAR_10->proc == VAR_7) &&
      (FUNC_2(VAR_10->netid, VAR_8) == 0)) {
   if ((VAR_9 == ((void*)0)) ||
       (VAR_9->rpcb_map.r_vers != VAR_6))
    VAR_10->failure++;
   else
    VAR_10->success++;
   if (VAR_4 == VAR_0)
    VAR_10->indirect++;
   return;
  }
 }
 VAR_11 = FUNC_1(VAR_8);
 if (VAR_11 == ((void*)0)) {
  return;
 }
 VAR_10 = (rpcbs_rmtcalllist *) FUNC_0(sizeof (rpcbs_rmtcalllist));
 if (VAR_10 == ((void*)0)) {
  return;
 }
 VAR_10->prog = VAR_5;
 VAR_10->vers = VAR_6;
 VAR_10->proc = VAR_7;
 VAR_10->netid = VAR_11->nc_netid;
 if ((VAR_9 == ((void*)0)) ||
      (VAR_9->rpcb_map.r_vers != VAR_6)) {
  VAR_10->failure = 1;
  VAR_10->success = 0;
 } else {
  VAR_10->failure = 0;
  VAR_10->success = 1;
 }
 VAR_10->indirect = 1;
 VAR_10->next = VAR_2[VAR_3].rmtinfo;
 VAR_2[VAR_3].rmtinfo = VAR_10;
 return;
}
