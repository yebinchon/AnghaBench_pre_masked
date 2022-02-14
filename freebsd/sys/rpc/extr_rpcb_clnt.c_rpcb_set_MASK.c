
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int xdrproc_t ;
struct netconfig {int nc_netid; } ;
struct netbuf {int dummy; } ;
typedef int rpcvers_t ;
typedef int rpcprog_t ;
typedef int rpcproc_t ;
typedef int bool_t ;
struct TYPE_4__ {int cf_stat; } ;
struct TYPE_3__ {char* r_owner; int r_addr; int r_netid; int r_vers; int r_prog; } ;
typedef TYPE_1__ RPCB ;
typedef int CLIENT ;


 int FUNC_0 (int *,int ,int ,char*,int ,char*,int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 int * FUNC_4 () ;
 TYPE_2__ VAR_6 ;
 int FUNC_5 (char*,int,char*,int) ;
 int FUNC_6 (struct netconfig*,struct netbuf*) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;

bool_t
FUNC_7(rpcprog_t VAR_10, rpcvers_t VAR_11,
    const struct netconfig *VAR_12,
    const struct netbuf *VAR_13)
{
 CLIENT *VAR_14;
 bool_t VAR_15 = VAR_0;
 RPCB VAR_16;



 struct netconfig VAR_17;
 struct netbuf VAR_18;


 if (VAR_12 == ((void*)0)) {
  VAR_6.cf_stat = VAR_5;
  return (VAR_0);
 }
 if (VAR_13 == ((void*)0)) {
  VAR_6.cf_stat = VAR_4;
  return (VAR_0);
 }
 VAR_14 = FUNC_4();
 if (! VAR_14) {
  return (VAR_0);
 }



 VAR_17 = *VAR_12;
 VAR_18 = *VAR_13;
 VAR_16.r_addr = FUNC_6(&VAR_17, &VAR_18);
 if (!VAR_16.r_addr) {
  FUNC_1(VAR_14);
  VAR_6.cf_stat = VAR_3;
  return (VAR_0);
 }
 VAR_16.r_prog = VAR_10;
 VAR_16.r_vers = VAR_11;
 VAR_16.r_netid = VAR_12->nc_netid;
 VAR_16.r_owner = "";


 FUNC_0(VAR_14, (rpcproc_t)VAR_2, (xdrproc_t) VAR_9,
     (char *)(void *)&VAR_16, (xdrproc_t) VAR_8,
     (char *)(void *)&VAR_15, VAR_7);

 FUNC_1(VAR_14);
 FUNC_2(VAR_16.r_addr, VAR_1);
 return (VAR_15);
}
