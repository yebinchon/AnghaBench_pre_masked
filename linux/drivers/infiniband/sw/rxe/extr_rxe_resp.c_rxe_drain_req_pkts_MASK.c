
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {scalar_t__ queue; } ;
struct rxe_qp {TYPE_1__ rq; int srq; int req_pkts; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct rxe_qp*) ;
 struct sk_buff* FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct rxe_qp *VAR_0, bool VAR_1)
{
 struct sk_buff *VAR_2;

 while ((VAR_2 = FUNC_4(&VAR_0->req_pkts))) {
  FUNC_3(VAR_0);
  FUNC_1(VAR_2);
 }

 if (VAR_1)
  return;

 while (!VAR_0->srq && VAR_0->rq.queue && FUNC_2(VAR_0->rq.queue))
  FUNC_0(VAR_0->rq.queue);
}
