
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct rxe_send_wqe {int status; } ;
struct TYPE_2__ {int queue; } ;
struct rxe_qp {TYPE_1__ sq; int resp_pkts; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct rxe_qp*,struct rxe_send_wqe*) ;
 int FUNC_2 (struct sk_buff*) ;
 struct rxe_send_wqe* FUNC_3 (int ) ;
 int FUNC_4 (struct rxe_qp*) ;
 struct sk_buff* FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct rxe_qp *VAR_1, bool VAR_2)
{
 struct sk_buff *VAR_3;
 struct rxe_send_wqe *VAR_4;

 while ((VAR_3 = FUNC_5(&VAR_1->resp_pkts))) {
  FUNC_4(VAR_1);
  FUNC_2(VAR_3);
 }

 while ((VAR_4 = FUNC_3(VAR_1->sq.queue))) {
  if (VAR_2) {
   VAR_4->status = VAR_0;
   FUNC_1(VAR_1, VAR_4);
  } else {
   FUNC_0(VAR_1->sq.queue);
  }
 }
}
