
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_udata {int dummy; } ;
struct ib_pd {int dummy; } ;
struct TYPE_2__ {int umem_pd; } ;


 TYPE_1__* FUNC_0 (struct ib_pd*) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct ib_pd *VAR_0, struct ib_udata *VAR_1)
{
 FUNC_1((FUNC_0(VAR_0))->umem_pd);
}
