
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rxe_pkt_info {TYPE_1__* wqe; TYPE_2__* qp; } ;
struct rxe_av {int dummy; } ;
struct TYPE_4__ {struct rxe_av pri_av; } ;
struct TYPE_3__ {struct rxe_av av; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;

struct rxe_av *FUNC_1(struct rxe_pkt_info *VAR_2)
{
 if (!VAR_2 || !VAR_2->qp)
  return ((void*)0);

 if (FUNC_0(VAR_2->qp) == VAR_0 || FUNC_0(VAR_2->qp) == VAR_1)
  return &VAR_2->qp->pri_av;

 return (VAR_2->wqe) ? &VAR_2->wqe->av : ((void*)0);
}
