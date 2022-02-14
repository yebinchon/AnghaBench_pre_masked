
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int rpcvers_t ;
typedef scalar_t__ rpcprog_t ;
typedef TYPE_2__* rpcblist_ptr ;
struct TYPE_4__ {scalar_t__ r_prog; unsigned int r_vers; int * r_netid; } ;
struct TYPE_5__ {TYPE_1__ rpcb_map; struct TYPE_5__* rpcb_next; } ;


 TYPE_2__* VAR_0 ;
 scalar_t__ FUNC_0 (int *,char*) ;

__attribute__((used)) static void
FUNC_1(rpcprog_t VAR_1, char *VAR_2, rpcvers_t *VAR_3, rpcvers_t *VAR_4)
{
 register rpcblist_ptr VAR_5;
 unsigned int VAR_6 = 0;
 unsigned int VAR_7 = 0;

 for (VAR_5 = VAR_0; VAR_5 != ((void*)0); VAR_5 = VAR_5->rpcb_next) {
  if ((VAR_5->rpcb_map.r_prog != VAR_1) ||
      ((VAR_5->rpcb_map.r_netid != ((void*)0)) &&
   (FUNC_0(VAR_5->rpcb_map.r_netid, VAR_2) != 0)))
   continue;
  if (VAR_6 == 0) {
   VAR_7 = VAR_5->rpcb_map.r_vers;
   VAR_6 = VAR_7;
  } else if (VAR_5->rpcb_map.r_vers < VAR_6) {
   VAR_6 = VAR_5->rpcb_map.r_vers;
  } else if (VAR_5->rpcb_map.r_vers > VAR_7) {
   VAR_7 = VAR_5->rpcb_map.r_vers;
  }
 }
 *VAR_3 = VAR_6;
 *VAR_4 = VAR_7;
 return;
}
