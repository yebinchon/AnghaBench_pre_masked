
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* rpcb_entry_list_ptr ;
struct TYPE_4__ {scalar_t__ r_maddr; } ;
struct TYPE_5__ {TYPE_1__ rpcb_entry_map; struct TYPE_5__* rpcb_entry_next; } ;


 int FUNC_0 (char*) ;

__attribute__((used)) static void
FUNC_1(rpcb_entry_list_ptr *VAR_0)
{
 register rpcb_entry_list_ptr VAR_1, VAR_2;

 for (VAR_1 = *VAR_0; VAR_1 != ((void*)0); ) {
  VAR_2 = VAR_1;
  VAR_1 = VAR_1->rpcb_entry_next;
  FUNC_0((char *)VAR_2->rpcb_entry_map.r_maddr);
  FUNC_0((char *)VAR_2);
 }
 *VAR_0 = ((void*)0);
}
