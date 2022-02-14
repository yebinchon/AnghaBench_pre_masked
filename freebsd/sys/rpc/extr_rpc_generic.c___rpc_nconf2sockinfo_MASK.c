
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netid_af {int dummy; } ;
struct netconfig {char* nc_netid; scalar_t__ nc_semantics; } ;
struct __rpc_sockinfo {int si_socktype; int si_af; int si_alen; int si_proto; } ;
struct TYPE_2__ {char* netid; int protocol; int af; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_2 (char*,char*) ;

int
FUNC_3(const struct netconfig *VAR_1, struct __rpc_sockinfo *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < (sizeof VAR_0) / (sizeof (struct netid_af)); VAR_3++)
  if (FUNC_2(VAR_0[VAR_3].netid, VAR_1->nc_netid) == 0 || (
      FUNC_2(VAR_1->nc_netid, "unix") == 0 &&
      FUNC_2(VAR_0[VAR_3].netid, "local") == 0)) {
   VAR_2->si_af = VAR_0[VAR_3].af;
   VAR_2->si_proto = VAR_0[VAR_3].protocol;
   VAR_2->si_socktype =
       FUNC_1((int)VAR_1->nc_semantics);
   if (VAR_2->si_socktype == -1)
    return 0;
   VAR_2->si_alen = FUNC_0(VAR_2->si_af);
   return 1;
  }

 return 0;
}
