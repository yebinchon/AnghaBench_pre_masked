
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {int dummy; } ;
struct ib_umem {int dummy; } ;
struct ib_pool_fmr {int dummy; } ;
struct TYPE_2__ {int qp_active; } ;


 int FUNC_0 (struct ib_pool_fmr*) ;
 int FUNC_1 (struct ib_umem*) ;
 TYPE_1__* FUNC_2 (struct socket*) ;

void FUNC_3(struct socket *VAR_0, struct ib_pool_fmr **VAR_1, struct ib_umem **VAR_2)
{
 if (!FUNC_2(VAR_0)->qp_active)
  return;

 FUNC_0(*VAR_1);
 *VAR_1 = ((void*)0);

 FUNC_1(*VAR_2);
 *VAR_2 = ((void*)0);
}
