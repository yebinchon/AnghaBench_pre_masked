
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct netconfig {int nc_netid; } ;
struct netbuf {int dummy; } ;
typedef int rpcvers_t ;
typedef int rpcprog_t ;
typedef TYPE_2__* rpcblist_ptr ;
typedef int rpcblist ;
struct TYPE_5__ {void* r_owner; int r_addr; void* r_netid; int r_vers; int r_prog; } ;
struct TYPE_6__ {struct TYPE_6__* rpcb_next; TYPE_1__ rpcb_map; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_2__* VAR_1 ;
 TYPE_2__* FUNC_1 (int) ;
 void* FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct netconfig*,struct netbuf*) ;

__attribute__((used)) static void
FUNC_5(rpcprog_t VAR_3, rpcvers_t VAR_4, struct netconfig *VAR_5,
     struct netbuf *VAR_6)
{
 rpcblist_ptr VAR_7;

 VAR_7 = FUNC_1(sizeof (rpcblist));
 if (VAR_7 == ((void*)0)) {
  FUNC_3(VAR_0, "no memory!");
  FUNC_0(1);
 }

 VAR_7->rpcb_map.r_prog = VAR_3;
 VAR_7->rpcb_map.r_vers = VAR_4;
 VAR_7->rpcb_map.r_netid = FUNC_2(VAR_5->nc_netid);
 VAR_7->rpcb_map.r_addr = FUNC_4(VAR_5, VAR_6);
 VAR_7->rpcb_map.r_owner = FUNC_2(VAR_2);
 VAR_7->rpcb_next = VAR_1;
 VAR_1 = VAR_7;
}
