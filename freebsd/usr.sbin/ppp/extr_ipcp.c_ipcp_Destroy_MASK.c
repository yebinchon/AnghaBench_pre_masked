
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * resolv_nons; int * resolv; } ;
struct ipcp {TYPE_1__ ns; int throughput; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void
FUNC_2(struct ipcp *VAR_0)
{
  FUNC_1(&VAR_0->throughput);

  if (VAR_0->ns.resolv != ((void*)0)) {
    FUNC_0(VAR_0->ns.resolv);
    VAR_0->ns.resolv = ((void*)0);
  }
  if (VAR_0->ns.resolv_nons != ((void*)0)) {
    FUNC_0(VAR_0->ns.resolv_nons);
    VAR_0->ns.resolv_nons = ((void*)0);
  }
}
