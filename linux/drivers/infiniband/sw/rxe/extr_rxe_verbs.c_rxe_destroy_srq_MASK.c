
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ queue; } ;
struct rxe_srq {struct rxe_srq* pd; TYPE_1__ rq; } ;
struct ib_udata {int dummy; } ;
struct ib_srq {int dummy; } ;


 int FUNC_0 (struct rxe_srq*) ;
 int FUNC_1 (scalar_t__) ;
 struct rxe_srq* FUNC_2 (struct ib_srq*) ;

__attribute__((used)) static void FUNC_3(struct ib_srq *VAR_0, struct ib_udata *VAR_1)
{
 struct rxe_srq *VAR_2 = FUNC_2(VAR_0);

 if (VAR_2->rq.queue)
  FUNC_1(VAR_2->rq.queue);

 FUNC_0(VAR_2->pd);
 FUNC_0(VAR_2);
}
