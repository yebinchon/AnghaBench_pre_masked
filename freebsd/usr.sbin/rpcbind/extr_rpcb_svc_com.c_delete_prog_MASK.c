
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* rpcblist_ptr ;
struct TYPE_8__ {unsigned int r_prog; int r_netid; int r_vers; } ;
struct TYPE_6__ {unsigned int r_prog; int r_netid; int r_vers; int r_addr; } ;
struct TYPE_7__ {TYPE_1__ rpcb_map; struct TYPE_7__* rpcb_next; } ;
typedef TYPE_3__ RPCB ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 TYPE_2__* VAR_0 ;
 int FUNC_2 (TYPE_3__*,char*) ;
 int FUNC_3 (int ) ;

void
FUNC_4(unsigned int VAR_1)
{
 RPCB VAR_2;
 register rpcblist_ptr VAR_3;

 for (VAR_3 = VAR_0; VAR_3 != ((void*)0); VAR_3 = VAR_3->rpcb_next) {
  if ((VAR_3->rpcb_map.r_prog != VAR_1))
   continue;
  if (FUNC_1(VAR_3->rpcb_map.r_netid, VAR_3->rpcb_map.r_addr))
   continue;
  VAR_2.r_prog = VAR_3->rpcb_map.r_prog;
  VAR_2.r_vers = VAR_3->rpcb_map.r_vers;
  VAR_2.r_netid = FUNC_3(VAR_3->rpcb_map.r_netid);
  (void) FUNC_2(&VAR_2, "superuser");
  FUNC_0(VAR_2.r_netid);
 }
}
