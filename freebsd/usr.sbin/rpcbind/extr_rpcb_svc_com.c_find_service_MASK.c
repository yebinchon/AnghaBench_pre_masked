
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ rpcvers_t ;
typedef scalar_t__ rpcprog_t ;
typedef TYPE_2__* rpcblist_ptr ;
struct TYPE_5__ {scalar_t__ r_prog; scalar_t__ r_vers; int * r_netid; } ;
struct TYPE_6__ {TYPE_1__ rpcb_map; struct TYPE_6__* rpcb_next; } ;


 TYPE_2__* VAR_0 ;
 scalar_t__ FUNC_0 (int *,char*) ;

__attribute__((used)) static rpcblist_ptr
FUNC_1(rpcprog_t VAR_1, rpcvers_t VAR_2, char *VAR_3)
{
 register rpcblist_ptr VAR_4 = ((void*)0);
 register rpcblist_ptr VAR_5;

 for (VAR_5 = VAR_0; VAR_5 != ((void*)0); VAR_5 = VAR_5->rpcb_next) {
  if ((VAR_5->rpcb_map.r_prog != VAR_1) ||
      ((VAR_5->rpcb_map.r_netid != ((void*)0)) &&
   (FUNC_0(VAR_5->rpcb_map.r_netid, VAR_3) != 0)))
   continue;
  VAR_4 = VAR_5;
  if (VAR_5->rpcb_map.r_vers == VAR_2)
   break;
 }
 return (VAR_4);
}
