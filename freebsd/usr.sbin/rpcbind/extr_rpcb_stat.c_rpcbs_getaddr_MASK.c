
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct netconfig {int * nc_netid; } ;
typedef size_t rpcvers_t ;
typedef scalar_t__ rpcprog_t ;
struct TYPE_3__ {scalar_t__ prog; size_t vers; int failure; int success; struct TYPE_3__* next; int * netid; } ;
typedef TYPE_1__ rpcbs_addrlist ;
struct TYPE_4__ {TYPE_1__* addrinfo; } ;


 size_t VAR_0 ;
 TYPE_2__* VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 struct netconfig* FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int *,char*) ;

void
FUNC_3(rpcvers_t VAR_2, rpcprog_t VAR_3, rpcvers_t VAR_4, char *VAR_5,
       char *VAR_6)
{
 rpcbs_addrlist *VAR_7;
 struct netconfig *VAR_8;

 if (VAR_2 >= VAR_0)
  return;
 for (VAR_7 = VAR_1[VAR_2].addrinfo; VAR_7; VAR_7 = VAR_7->next) {

  if(VAR_7->netid == ((void*)0))
   return;
  if ((VAR_7->prog == VAR_3) && (VAR_7->vers == VAR_4) &&
      (FUNC_2(VAR_7->netid, VAR_5) == 0)) {
   if ((VAR_6 == ((void*)0)) || (VAR_6[0] == 0))
    VAR_7->failure++;
   else
    VAR_7->success++;
   return;
  }
 }
 VAR_8 = FUNC_1(VAR_5);
 if (VAR_8 == ((void*)0)) {
  return;
 }
 VAR_7 = (rpcbs_addrlist *) FUNC_0(sizeof (rpcbs_addrlist));
 if (VAR_7 == ((void*)0)) {
  return;
 }
 VAR_7->prog = VAR_3;
 VAR_7->vers = VAR_4;
 VAR_7->netid = VAR_8->nc_netid;
 if ((VAR_6 == ((void*)0)) || (VAR_6[0] == 0)) {
  VAR_7->failure = 1;
  VAR_7->success = 0;
 } else {
  VAR_7->failure = 0;
  VAR_7->success = 1;
 }
 VAR_7->next = VAR_1[VAR_2].addrinfo;
 VAR_1[VAR_2].addrinfo = VAR_7;
}
