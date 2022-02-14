
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xdrproc_t ;
struct netconfig {char* nc_netid; } ;
typedef int rpcvers_t ;
typedef int rpcprog_t ;
typedef int rpcproc_t ;
typedef int bool_t ;
struct TYPE_2__ {char* r_netid; char* r_addr; char* r_owner; int r_vers; int r_prog; } ;
typedef TYPE_1__ RPCB ;
typedef int CLIENT ;


 int FUNC_0 (int *,int ,int ,char*,int ,char*,int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 () ;
 int * FUNC_3 () ;
 int * VAR_2 ;
 int FUNC_4 (char*,int,char*,int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

bool_t
FUNC_5(rpcprog_t VAR_6, rpcvers_t VAR_7, const struct netconfig *VAR_8)
{
 CLIENT *VAR_9;
 bool_t VAR_10 = VAR_0;
 RPCB VAR_11;




 VAR_9 = FUNC_3();
 if (! VAR_9) {
  return (VAR_0);
 }

 VAR_11.r_prog = VAR_6;
 VAR_11.r_vers = VAR_7;
 if (VAR_8)
  VAR_11.r_netid = VAR_8->nc_netid;
 else {

  VAR_11.r_netid = (char *)(uintptr_t) &VAR_2[0];
 }

 VAR_11.r_addr = (char *)(uintptr_t) &VAR_2[0];




 VAR_11.r_owner = "";


 FUNC_0(VAR_9, (rpcproc_t)VAR_1, (xdrproc_t) VAR_5,
     (char *)(void *)&VAR_11, (xdrproc_t) VAR_4,
     (char *)(void *)&VAR_10, VAR_3);

 FUNC_1(VAR_9);
 return (VAR_10);
}
